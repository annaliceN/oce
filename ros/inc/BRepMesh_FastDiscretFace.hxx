// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_FastDiscretFace_HeaderFile
#define _BRepMesh_FastDiscretFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepMesh_FastDiscretFace_HeaderFile
#include <Handle_BRepMesh_FastDiscretFace.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BRepMesh_DataMapOfVertexInteger_HeaderFile
#include <BRepMesh_DataMapOfVertexInteger.hxx>
#endif
#ifndef _BRepMesh_DataMapOfShapePairOfPolygon_HeaderFile
#include <BRepMesh_DataMapOfShapePairOfPolygon.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BRepMesh_DataMapOfIntegerPnt_HeaderFile
#include <BRepMesh_DataMapOfIntegerPnt.hxx>
#endif
#ifndef _Handle_BRepMesh_DataStructureOfDelaun_HeaderFile
#include <Handle_BRepMesh_DataStructureOfDelaun.hxx>
#endif
#ifndef _BRepMesh_ListOfVertex_HeaderFile
#include <BRepMesh_ListOfVertex.hxx>
#endif
#ifndef _TColStd_IndexedMapOfInteger_HeaderFile
#include <TColStd_IndexedMapOfInteger.hxx>
#endif
#ifndef _BRepMesh_DataMapOfIntegerListOfXY_HeaderFile
#include <BRepMesh_DataMapOfIntegerListOfXY.hxx>
#endif
#ifndef _Handle_BRepMesh_FaceAttribute_HeaderFile
#include <Handle_BRepMesh_FaceAttribute.hxx>
#endif
#ifndef _TColStd_IndexedMapOfReal_HeaderFile
#include <TColStd_IndexedMapOfReal.hxx>
#endif
#ifndef _MeshDS_BaseAllocator_HeaderFile
#include <MeshDS_BaseAllocator.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_BRepAdaptor_HSurface_HeaderFile
#include <Handle_BRepAdaptor_HSurface.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _BRepMesh_ClassifierPtr_HeaderFile
#include <BRepMesh_ClassifierPtr.hxx>
#endif
class BRepMesh_DataStructureOfDelaun;
class BRepMesh_FaceAttribute;
class TopoDS_Face;
class TopTools_DataMapOfShapeReal;
class TopoDS_Vertex;
class BRepAdaptor_HSurface;
class TopoDS_Edge;
class Geom2d_Curve;
class BRepMesh_ListOfVertex;
class TColStd_ListOfInteger;
class BRepMesh_Delaun;
class gp_XY;
class gp_Pnt2d;
class BRepMesh_Triangle;
class BRepMesh_Edge;
class BRepMesh_Vertex;
class gp_Pnt;


//! Algorithm  to mesh  a face  with  respect of  the <br>
//!          frontier the deflection  and by option the  shared <br>
//!          components. <br>
class BRepMesh_FastDiscretFace : public MMgt_TShared {

public:

  
  Standard_EXPORT   BRepMesh_FastDiscretFace(const Standard_Real angle,const Standard_Boolean withShare = Standard_True,const Standard_Boolean inshape = Standard_False,const Standard_Boolean shapetrigu = Standard_False);
  
  Standard_EXPORT     void Add(const TopoDS_Face& face,const Handle(BRepMesh_FaceAttribute)& attrib,const TopTools_DataMapOfShapeReal& mapdefle) ;
  
  Standard_EXPORT     Standard_Boolean Update(const TopoDS_Edge& Edge,const TopoDS_Face& Face,const Handle(Geom2d_Curve)& C,const Standard_Real defedge,const Standard_Real first,const Standard_Real last) ;
  
  Standard_EXPORT     Standard_Real Control(const Handle(BRepAdaptor_HSurface)& caro,const Standard_Real defface,BRepMesh_ListOfVertex& inter,TColStd_ListOfInteger& badTri,TColStd_ListOfInteger& nulTri,BRepMesh_Delaun& trigu,const Standard_Boolean isfirst) ;
  
  Standard_EXPORT     gp_XY FindUV(const TopoDS_Vertex& V,const gp_Pnt2d& XY,const Standard_Integer ip,const Handle(BRepAdaptor_HSurface)& S,const Standard_Real mindist) ;
  //! Gives the triangle of <Index>. <br>
  Standard_EXPORT    const BRepMesh_Triangle& Triangle(const Standard_Integer Index) const;
  //! Gives the edge of index <Index>. <br>
  Standard_EXPORT    const BRepMesh_Edge& Edge(const Standard_Integer Index) const;
  //! Gives the vertex of <Index>. <br>
  Standard_EXPORT    const BRepMesh_Vertex& Vertex(const Standard_Integer Index) const;
  //! Gives the location3d of the vertex of <Index>. <br>
  Standard_EXPORT    const gp_Pnt& Pnt(const Standard_Integer Index) const;




  DEFINE_STANDARD_RTTI(BRepMesh_FastDiscretFace)

protected:




private: 

  
  Standard_EXPORT     void Add(const TopoDS_Vertex& theVert,const TopoDS_Face& face,const Handle(BRepAdaptor_HSurface)& S) ;
  
  Standard_EXPORT     void InternalVertices(const Handle(BRepAdaptor_HSurface)& caro,BRepMesh_ListOfVertex& inter,const Standard_Real defedge,const BRepMesh_ClassifierPtr& classifier) ;
  
  Standard_EXPORT     void AddInShape(const TopoDS_Face& face,const Standard_Real defedge) ;

Standard_Real angle;
Standard_Boolean WithShare;
BRepMesh_DataMapOfVertexInteger vertices;
BRepMesh_DataMapOfShapePairOfPolygon edges;
BRepMesh_DataMapOfShapePairOfPolygon internaledges;
Standard_Integer nbLocat;
BRepMesh_DataMapOfIntegerPnt Location3d;
Handle_BRepMesh_DataStructureOfDelaun structure;
BRepMesh_ListOfVertex mylistver;
TColStd_IndexedMapOfInteger myvemap;
BRepMesh_DataMapOfIntegerListOfXY mylocation2d;
Handle_BRepMesh_FaceAttribute myattrib;
Standard_Boolean myshapetrigu;
Standard_Boolean myinshape;
Standard_Boolean myInternalVerticesMode;
TColStd_IndexedMapOfReal myUParam;
TColStd_IndexedMapOfReal myVParam;
MeshDS_BaseAllocator myAllocator;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
