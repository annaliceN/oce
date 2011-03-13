// File:	BRepAlgo_FaceRestrictor.cxx
// Created:	Fri Sep  1 14:28:42 1995
// Author:	Yves FRICAUD
//		<yfr@nonox>

#include <BRepAlgo_FaceRestrictor.ixx>

#include <BRepTopAdaptor_FClass2d.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopExp_Explorer.hxx>
#include <TopExp.hxx>
#include <TopOpeBRepBuild_WireToFace.hxx>
#include <TopTools_ListIteratorOfListOfShape.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <BRep_Builder.hxx>
#include <BRep_Tool.hxx>
#include <GeomProjLib.hxx>
#include <gp_Pnt2d.hxx>

#include <Precision.hxx>

//=======================================================================
//function : BRepAlgo_FaceRestrictor
//purpose  : 
//=======================================================================

BRepAlgo_FaceRestrictor::BRepAlgo_FaceRestrictor()
{}

//=======================================================================
//function : 
//purpose  : 
//=======================================================================

void BRepAlgo_FaceRestrictor::Init(const TopoDS_Face&     F,
				   const Standard_Boolean Proj,
				   const Standard_Boolean CorrectionOrientation)
{
  myFace = F; modeProj = Proj;  myCorrection = CorrectionOrientation;
}


//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void BRepAlgo_FaceRestrictor::Add(TopoDS_Wire& W)
{
  wires.Append(W);
}


//=======================================================================
//function : Clear
//purpose  : 
//=======================================================================

void BRepAlgo_FaceRestrictor::Clear()
{
  wires.Clear();
  faces.Clear();
}

//=======================================================================
//function : ChangePcurve
//purpose  : 
//=======================================================================

static Standard_Boolean  ChangePCurve (TopoDS_Edge&          E,
				       const Handle(Geom_Surface)& S,
				       TopLoc_Location&      L)
{
  BRep_Builder         BB;
  Handle(Geom_Surface) SE;
  Handle(Geom2d_Curve) C2;
  TopLoc_Location      LE;
  Standard_Real        f,l;

  BRep_Tool::CurveOnSurface (E,C2,SE,LE,f,l,1);
  if (!C2.IsNull()) 
    BB.UpdateEdge(E,C2,S,L,Precision::Confusion());
  return (C2.IsNull());
}

//=======================================================================
//function : ProjCurve3d
//purpose  : 
//=======================================================================

static void ProjCurve3d (TopoDS_Edge&          E,
			 const Handle(Geom_Surface)& S,
			 TopLoc_Location&      L)
{
  BRep_Builder              BB;
  TopLoc_Location           LE;
  Standard_Real             f,l;
  Handle(Geom_Curve)        C  = BRep_Tool::Curve(E,LE,f,l);
  Handle(Geom_TrimmedCurve) CT = new Geom_TrimmedCurve(C,f,l);
  
  TopLoc_Location LL = L.Inverted().Multiplied(LE);
  CT->Transform(LL.Transformation());
  
  Handle(Geom2d_Curve) C2 = GeomProjLib::Curve2d (CT,S);
  BB.UpdateEdge(E,C2,S,L,Precision::Confusion());
}	  

//=======================================================================
//function : Perform
//purpose  : 
//=======================================================================

void BRepAlgo_FaceRestrictor::Perform()
{

  if (myCorrection) {
    PerformWithCorrection();
    return;
  }

  myDone = Standard_False;
  TopTools_ListIteratorOfListOfShape it(wires);

  //--------------------------------------------------------------------
  // recuperation la geometrie de la face de reference.
  //--------------------------------------------------------------------
  TopLoc_Location L;
  const Handle(Geom_Surface)& S = BRep_Tool::Surface(myFace,L);

  //-----------------------------------------------------------------------
  // test si les edges sont sur S. sinon ajout de S sur la premiere pcurve.
  // ou projection de l edge sur F.
  //---------------------------------------------------------------------- 
  TopExp_Explorer Exp;
//  BRep_Builder    BB;
  Standard_Real   f,l;

  TopOpeBRepBuild_WireToFace WTF;

  for ( ; it.More(); it.Next()) {
    // mise a jour de la surface sur les edges.
    const TopoDS_Wire& W = TopoDS::Wire(it.Value());

    for (Exp.Init(W,TopAbs_EDGE); Exp.More(); Exp.Next()) {

      TopoDS_Edge E = TopoDS::Edge(Exp.Current());
      Handle(Geom2d_Curve) C2 = BRep_Tool::CurveOnSurface(E,S,L,f,l);
      
      if (C2.IsNull()) {
	// pas de pcurve sur la surface de reference.
	if (modeProj) {
	  // Projection de la courbe 3d sur la surface.
	  ProjCurve3d ( E, S, L);
	}
	else {
	  // recuperation de la premiere pcurve qui est colle sur <S>
	  Standard_Boolean YaPCurve = ChangePCurve (E, S, L);
	  if (!YaPCurve) {
	    ProjCurve3d (E, S, L);
	  }

	}
      }
    }
    WTF.AddWire(W);
  }

  WTF.MakeFaces(myFace,faces);

  myDone = Standard_True;
}


//=======================================================================
//function : IsDone
//purpose  : 
//=======================================================================

Standard_Boolean BRepAlgo_FaceRestrictor::IsDone() const 
{
  return myDone;
}


//=======================================================================
//function : More
//purpose  : 
//=======================================================================

Standard_Boolean BRepAlgo_FaceRestrictor::More() const 
{
  return (!faces.IsEmpty());
}


//=======================================================================
//function : Next
//purpose  : 
//=======================================================================

void BRepAlgo_FaceRestrictor::Next()
{
  faces.RemoveFirst();
}


//=======================================================================
//function : Current
//purpose  : 
//=======================================================================

TopoDS_Face BRepAlgo_FaceRestrictor::Current() const 
{
  return (TopoDS::Face(faces.First()));
}

//=======================================================================
//function : Standard_Boolean
//purpose  : 
//=======================================================================

static Standard_Boolean IsClosed (const TopoDS_Wire& W)
     
{
  if (W.Closed()) return 1;
  TopoDS_Vertex V1,V2;
  TopExp::Vertices (W, V1,V2);
  return (V1.IsSame(V2));
}


//=======================================================================
//function : IsInside
//purpose  : 
//=======================================================================

static Standard_Boolean IsInside(const TopoDS_Wire&       wir,
				 const TopoDS_Face&       F,
				 BRepTopAdaptor_FClass2d& /*FClass2d*/)
{

//Standard_Real U,V;
  TopExp_Explorer exp;
  for (exp.Init(wir,TopAbs_EDGE);
       exp.More();
       exp.Next()) {
    const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
    Standard_Real f,l;
    Handle(Geom2d_Curve) C2d = BRep_Tool::CurveOnSurface(edg,F,f,l);
    Standard_Real prm;

    if (!Precision::IsNegativeInfinite(f) && 
	!Precision::IsPositiveInfinite(l)) {
      prm = (f+l)/2.;
    }
    else {
      if (Precision::IsNegativeInfinite(f) && 
	  Precision::IsPositiveInfinite(l)){
	prm = 0.;
      }
      else if (Precision::IsNegativeInfinite(f)) {
	prm = l-1.;
      }
      else {
	prm = f+1.;
      }
    }

    gp_Pnt2d pt2d(C2d->Value(prm));
    BRepTopAdaptor_FClass2d FClass2d(F,Precision::PConfusion());
    TopAbs_State st2=FClass2d.Perform(pt2d,Standard_False);
    return(st2 == TopAbs_IN);     
  }
  return Standard_False;
}
//=======================================================================
//function : Store
//purpose  : 
//=======================================================================

static void Store (const TopoDS_Wire& W2,
		   const TopoDS_Wire& W1,
		   TopTools_DataMapOfShapeListOfShape& keyIsIn,
		   TopTools_DataMapOfShapeListOfShape& keyContains)
{
  if (!keyIsIn.IsBound(W2)) {
    TopTools_ListOfShape empty;
    keyIsIn.Bind(W2,empty);
  }
  keyIsIn(W2).Append(W1);
  if (!keyContains.IsBound(W1)) {
    TopTools_ListOfShape empty;
    keyContains.Bind(W1,empty);
  }
  keyContains(W1).Append(W2);
}
//=======================================================================
//function : BuildFaceIn
//purpose  : 
//=======================================================================

static void BuildFaceIn(      TopoDS_Face& F, 
			const TopoDS_Wire& W, 
			TopTools_DataMapOfShapeListOfShape& KeyContains, 
			TopTools_DataMapOfShapeListOfShape& KeyIsIn,
			TopAbs_Orientation                  Orientation,
			TopTools_ListOfShape&               Faces)
{
  BRep_Builder B;
  
  if (!KeyContains.IsBound(W) || KeyContains(W).IsEmpty()) return;

  // Suppression de W dans les KeyIsIn.
//  for (TopTools_ListIteratorOfListOfShape it(KeyContains(W)); it.More(); it.Next()) {

  TopTools_ListIteratorOfListOfShape it;
  for (it.Initialize(KeyContains(W)); it.More(); it.Next()) {
    const TopoDS_Wire&    WI = TopoDS::Wire(it.Value());
    TopTools_ListOfShape& L2 = KeyIsIn(WI);
    TopTools_ListIteratorOfListOfShape it2;
    for (it2.Initialize(L2); it2.More(); it2.Next()) {
      if (it2.Value().IsSame(W)) {
	L2.Remove(it2);
	break;
      }
    }
  }

  TopTools_ListOfShape WireExt;

  for (it.Initialize(KeyContains(W)); it.More(); it.Next()) {
    const TopoDS_Wire&    WI = TopoDS::Wire(it.Value());
    TopTools_ListOfShape& L2 = KeyIsIn(WI);
   
    if (L2.IsEmpty()) {
      WireExt.Append(WI);
    }
  }
  
  for (it.Initialize(WireExt); it.More(); it.Next()) {
    const TopoDS_Wire&    WI = TopoDS::Wire(it.Value());
    TopTools_ListOfShape& L2 = KeyIsIn(WI);
    if (L2.IsEmpty()) {
      if (Orientation == TopAbs_FORWARD) {
	TopoDS_Wire NWI(WI);
	NWI.Reverse();
//	TopoDS_Wire NWI = TopoDS::Wire(WI.Reversed());
	B.Add(F,NWI);
	BuildFaceIn (F,WI,KeyContains, KeyIsIn,TopAbs_REVERSED,Faces);
      }
      else {
	TopoDS_Shape aLocalShape  = Faces.First().EmptyCopied();
	TopoDS_Face NF = TopoDS::Face(aLocalShape);
//	TopoDS_Face NF = TopoDS::Face(Faces.First().EmptyCopied());;
	B.Add        (NF,WI);
	Faces.Append (NF);
	BuildFaceIn (NF, WI, KeyContains, KeyIsIn, TopAbs_FORWARD,Faces);
      }
    }
  }
}

//=======================================================================
//function : Perform
//purpose  : 
//=======================================================================

void BRepAlgo_FaceRestrictor::PerformWithCorrection()
{
  BRep_Builder B;

  myDone = Standard_False;
  TopTools_ListIteratorOfListOfShape it(wires);
  //---------------------------------------------------------
  // Reorientation de tous les wires fermes matiere a gauche.
  //---------------------------------------------------------
  for (; it.More(); it.Next()) {
    TopoDS_Wire& W  = TopoDS::Wire(it.Value());
    TopoDS_Shape aLocalShape = myFace.EmptyCopied();
    TopoDS_Face  NF = TopoDS::Face(aLocalShape);
//    TopoDS_Face  NF = TopoDS::Face(myFace.EmptyCopied());
    NF.Orientation(TopAbs_FORWARD);
    B.Add(NF,W);
    
    if (IsClosed(W)) {  
      BRepTopAdaptor_FClass2d FClass2d(NF,Precision::PConfusion());
      if(FClass2d.PerformInfinitePoint() != TopAbs_OUT) { 
	W.Reverse();
      }
    }
  }
  //---------------------------------------------------------
  // Classification des wires les uns par rapport aux autres.
  //---------------------------------------------------------
  Standard_Integer j,i = 1;

  for (it.Initialize(wires) ; it.More(); it.Next()) {
    TopoDS_Wire& W1  = TopoDS::Wire(it.Value());
    TopTools_ListIteratorOfListOfShape it2(wires);  
    j = 1;    

    if (IsClosed(W1)) {
      TopoDS_Shape aLocalShape = myFace.EmptyCopied();
      TopoDS_Face  NF = TopoDS::Face(aLocalShape);
//      TopoDS_Face  NF = TopoDS::Face(myFace.EmptyCopied());
      NF.Orientation(TopAbs_FORWARD);
      B.Add(NF,W1);
      
      BRepTopAdaptor_FClass2d FClass2d(NF,Precision::PConfusion());
      while (it2.More()) {
	const TopoDS_Wire& W2 = TopoDS::Wire(it2.Value());
	if (!W1.IsSame(W2) && IsInside (W2,NF,FClass2d)) {
	  Store (W2,W1,keyIsIn,keyContains);
	} 
	it2.Next();
	j++;
      }
    }
    i++;
  }
  TopTools_ListOfShape WireExt;
  
  for (it.Initialize(wires) ; it.More(); it.Next()) {
    const TopoDS_Wire& W = TopoDS::Wire(it.Value());
    if (!keyIsIn.IsBound(W) || keyIsIn(W).IsEmpty()) {
      WireExt.Append(W);
    }
  }
  
  for (it.Initialize(WireExt) ; it.More(); it.Next()) {
    const TopoDS_Wire& W = TopoDS::Wire(it.Value());
    if (!keyIsIn.IsBound(W) || keyIsIn(W).IsEmpty()) {
      TopoDS_Shape aLocalShape = myFace.EmptyCopied();
      TopoDS_Face NewFace = TopoDS::Face(aLocalShape);
//      TopoDS_Face NewFace = TopoDS::Face(myFace.EmptyCopied());
      NewFace.Orientation(TopAbs_FORWARD);
      B.Add     (NewFace,W);
      faces.Append(NewFace); 
      //--------------------------------------------
      // Construction d une face par wire exterieur.
      //--------------------------------------------
      BuildFaceIn(NewFace,W, keyContains, keyIsIn, TopAbs_FORWARD, faces);
    }
  }
  myDone = Standard_True;
}










