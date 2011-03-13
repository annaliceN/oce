// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_MidPointRelation_HeaderFile
#define _AIS_MidPointRelation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_MidPointRelation_HeaderFile
#include <Handle_AIS_MidPointRelation.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _AIS_Relation_HeaderFile
#include <AIS_Relation.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager3d_HeaderFile
#include <Handle_PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Prs3d_Projector_HeaderFile
#include <Handle_Prs3d_Projector.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager2d_HeaderFile
#include <Handle_PrsMgr_PresentationManager2d.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Handle_Geom_Transformation_HeaderFile
#include <Handle_Geom_Transformation.hxx>
#endif
#ifndef _Handle_SelectMgr_Selection_HeaderFile
#include <Handle_SelectMgr_Selection.hxx>
#endif
class TopoDS_Shape;
class Geom_Plane;
class PrsMgr_PresentationManager3d;
class Prs3d_Presentation;
class Prs3d_Projector;
class PrsMgr_PresentationManager2d;
class Graphic2d_GraphicObject;
class Geom_Transformation;
class SelectMgr_Selection;
class gp_Lin;
class gp_Pnt;
class gp_Circ;
class gp_Elips;


//! presentation of equal distance to point myMidPoint <br>
class AIS_MidPointRelation : public AIS_Relation {

public:

  
  Standard_EXPORT   AIS_MidPointRelation(const TopoDS_Shape& aSymmTool,const TopoDS_Shape& FirstShape,const TopoDS_Shape& SecondShape,const Handle(Geom_Plane)& aPlane);
  
      virtual  Standard_Boolean IsMovable() const;
  
        void SetTool(const TopoDS_Shape& aMidPointTool) ;
  
       const TopoDS_Shape& GetTool() const;
  //! Computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Geom_Transformation)& aTrsf,const Handle(Prs3d_Presentation)& aPresentation) ;




  DEFINE_STANDARD_RTTI(AIS_MidPointRelation)

protected:




private: 

  
  Standard_EXPORT     void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void Compute(const Handle(PrsMgr_PresentationManager2d)& aPresentationManager,const Handle(Graphic2d_GraphicObject)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,const Standard_Integer aMode) ;
  
  Standard_EXPORT     void ComputeFaceFromPnt(const Handle(Prs3d_Presentation)& aprs,const Standard_Boolean first) ;
  
  Standard_EXPORT     void ComputeEdgeFromPnt(const Handle(Prs3d_Presentation)& aprs,const Standard_Boolean first) ;
  
  Standard_EXPORT     void ComputeVertexFromPnt(const Handle(Prs3d_Presentation)& aprs,const Standard_Boolean first) ;
  
  Standard_EXPORT     void ComputePointsOnLine(const gp_Lin& aLin,const Standard_Boolean first) ;
  
  Standard_EXPORT     void ComputePointsOnLine(const gp_Pnt& pnt1,const gp_Pnt& pnt2,const Standard_Boolean first) ;
  
  Standard_EXPORT     void ComputePointsOnCirc(const gp_Circ& aCirc,const gp_Pnt& pnt1,const gp_Pnt& pnt2,const Standard_Boolean first) ;
  //! ComputePointsOn... methods set myFAttach, myFirstPnt and myLastPnt <br>
//! from the following initial data: curve, end points, myMidPoint. <br>
//! End points (pnt1 & pnt2) and curve define the trimmed curve. <br>
//! If end points are equal, curve is not trimmed (line - special case). <br>
//! <br>
//!     .------. pnt2 <br>
//!    /        \ <br>
//!   .  circle  . myLastPnt <br>
//!   |          | <br>
//!   . pnt1     . myFAttach <br>
//!    \   arc  /          . myMidPoint <br>
//!     .______. myFirstPnt <br>
  Standard_EXPORT     void ComputePointsOnElips(const gp_Elips& anEll,const gp_Pnt& pnt1,const gp_Pnt& pnt2,const Standard_Boolean first) ;

TopoDS_Shape myTool;
gp_Pnt myMidPoint;
gp_Pnt myFAttach;
gp_Pnt myFirstPnt1;
gp_Pnt myFirstPnt2;
gp_Pnt mySAttach;
gp_Pnt mySecondPnt1;
gp_Pnt mySecondPnt2;


};


#include <AIS_MidPointRelation.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
