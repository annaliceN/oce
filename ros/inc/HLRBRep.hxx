// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_HeaderFile
#define _HLRBRep_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Edge;
class HLRBRep_Curve;
class HLRBRep_CurveTool;
class HLRBRep_BCurveTool;
class HLRBRep_Curve;
class HLRBRep_SurfaceTool;
class HLRBRep_BSurfaceTool;
class HLRBRep_Surface;
class HLRBRep_CLPropsATool;
class HLRBRep_CLProps;
class HLRBRep_SLPropsATool;
class HLRBRep_SLProps;
class HLRBRep_CInter;
class HLRBRep_LineTool;
class HLRBRep_InterCSurf;
class HLRBRep_EdgeFaceTool;
class HLRBRep_Intersector;
class HLRBRep_EdgeData;
class HLRBRep_FaceData;
class HLRBRep_FaceIterator;
class HLRBRep_Array1OfEData;
class HLRBRep_Array1OfFData;
class HLRBRep_Data;
class HLRBRep_ShapeToHLR;
class HLRBRep_HLRToShape;
class HLRBRep_ShapeBounds;
class HLRBRep_SeqOfShapeBounds;
class HLRBRep_EdgeInterferenceTool;
class HLRBRep_VertexList;
class HLRBRep_EdgeIList;
class HLRBRep_AreaLimit;
class HLRBRep_EdgeBuilder;
class HLRBRep_Hider;
class HLRBRep_InternalAlgo;
class HLRBRep_Algo;
class HLRBRep_PolyAlgo;
class HLRBRep_BiPoint;
class HLRBRep_BiPnt2D;
class HLRBRep_ListOfBPoint;
class HLRBRep_ListOfBPnt2D;
class HLRBRep_PolyHLRToShape;
class HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter;
class HLRBRep_SequenceNodeOfSeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter;
class HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter;
class HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter;
class HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter;
class HLRBRep_TheProjPCurOfCInter;
class HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter;
class HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter;
class HLRBRep_TheIntConicCurveOfCInter;
class HLRBRep_IntConicCurveOfCInter;
class HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter;
class HLRBRep_ThePolygon2dToolOfTheIntPCurvePCurveOfCInter;
class HLRBRep_InterferencePoly2dOfTheIntPCurvePCurveOfCInter;
class HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter;
class HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter;
class HLRBRep_TheIntPCurvePCurveOfCInter;
class HLRBRep_ThePolygonOfInterCSurf;
class HLRBRep_ThePolygonToolOfInterCSurf;
class HLRBRep_ThePolyhedronOfInterCSurf;
class HLRBRep_ThePolyhedronToolOfInterCSurf;
class HLRBRep_TheInterferenceOfInterCSurf;
class HLRBRep_TheCSFunctionOfInterCSurf;
class HLRBRep_TheExactInterCSurf;
class HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf;
class HLRBRep_TheQuadCurvExactInterCSurf;
class HLRBRep_SequenceNodeOfSeqOfShapeBounds;
class HLRBRep_ListNodeOfListOfBPoint;
class HLRBRep_ListIteratorOfListOfBPoint;
class HLRBRep_ListNodeOfListOfBPnt2D;
class HLRBRep_ListIteratorOfListOfBPnt2D;


//! Hidden Lines Removal <br>
//!          algorithms on the BRep DataStructure. <br>
//! <br>
//!          The class PolyAlgo  is used to remove Hidden lines <br>
//!          on Shapes with Triangulations. <br>
class HLRBRep  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   static  TopoDS_Edge MakeEdge(const HLRBRep_Curve& ec,const Standard_Real U1,const Standard_Real U2) ;
  
  Standard_EXPORT   static  void PolyHLRAngleAndDeflection(const Standard_Real InAngl,Standard_Real& OutAngl,Standard_Real& OutDefl) ;





protected:





private:




friend class HLRBRep_CurveTool;
friend class HLRBRep_BCurveTool;
friend class HLRBRep_Curve;
friend class HLRBRep_SurfaceTool;
friend class HLRBRep_BSurfaceTool;
friend class HLRBRep_Surface;
friend class HLRBRep_CLPropsATool;
friend class HLRBRep_CLProps;
friend class HLRBRep_SLPropsATool;
friend class HLRBRep_SLProps;
friend class HLRBRep_CInter;
friend class HLRBRep_LineTool;
friend class HLRBRep_InterCSurf;
friend class HLRBRep_EdgeFaceTool;
friend class HLRBRep_Intersector;
friend class HLRBRep_EdgeData;
friend class HLRBRep_FaceData;
friend class HLRBRep_FaceIterator;
friend class HLRBRep_Array1OfEData;
friend class HLRBRep_Array1OfFData;
friend class HLRBRep_Data;
friend class HLRBRep_ShapeToHLR;
friend class HLRBRep_HLRToShape;
friend class HLRBRep_ShapeBounds;
friend class HLRBRep_SeqOfShapeBounds;
friend class HLRBRep_EdgeInterferenceTool;
friend class HLRBRep_VertexList;
friend class HLRBRep_EdgeIList;
friend class HLRBRep_AreaLimit;
friend class HLRBRep_EdgeBuilder;
friend class HLRBRep_Hider;
friend class HLRBRep_InternalAlgo;
friend class HLRBRep_Algo;
friend class HLRBRep_PolyAlgo;
friend class HLRBRep_BiPoint;
friend class HLRBRep_BiPnt2D;
friend class HLRBRep_ListOfBPoint;
friend class HLRBRep_ListOfBPnt2D;
friend class HLRBRep_PolyHLRToShape;
friend class HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter;
friend class HLRBRep_SequenceNodeOfSeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter;
friend class HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter;
friend class HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter;
friend class HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter;
friend class HLRBRep_TheProjPCurOfCInter;
friend class HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter;
friend class HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter;
friend class HLRBRep_TheIntConicCurveOfCInter;
friend class HLRBRep_IntConicCurveOfCInter;
friend class HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter;
friend class HLRBRep_ThePolygon2dToolOfTheIntPCurvePCurveOfCInter;
friend class HLRBRep_InterferencePoly2dOfTheIntPCurvePCurveOfCInter;
friend class HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter;
friend class HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter;
friend class HLRBRep_TheIntPCurvePCurveOfCInter;
friend class HLRBRep_ThePolygonOfInterCSurf;
friend class HLRBRep_ThePolygonToolOfInterCSurf;
friend class HLRBRep_ThePolyhedronOfInterCSurf;
friend class HLRBRep_ThePolyhedronToolOfInterCSurf;
friend class HLRBRep_TheInterferenceOfInterCSurf;
friend class HLRBRep_TheCSFunctionOfInterCSurf;
friend class HLRBRep_TheExactInterCSurf;
friend class HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf;
friend class HLRBRep_TheQuadCurvExactInterCSurf;
friend class HLRBRep_SequenceNodeOfSeqOfShapeBounds;
friend class HLRBRep_ListNodeOfListOfBPoint;
friend class HLRBRep_ListIteratorOfListOfBPoint;
friend class HLRBRep_ListNodeOfListOfBPnt2D;
friend class HLRBRep_ListIteratorOfListOfBPnt2D;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
