// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFeat_MakePipe_HeaderFile
#define _BRepFeat_MakePipe_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _TColGeom_SequenceOfCurve_HeaderFile
#include <TColGeom_SequenceOfCurve.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _BRepFeat_StatusError_HeaderFile
#include <BRepFeat_StatusError.hxx>
#endif
#ifndef _BRepFeat_Form_HeaderFile
#include <BRepFeat_Form.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom_Curve;
class Standard_ConstructionError;
class TopoDS_Shape;
class TopoDS_Face;
class TopoDS_Wire;
class TopoDS_Edge;
class TColGeom_SequenceOfCurve;


//! Constructs compound shapes with pipe <br>
//! features. These can be depressions or protrusions. <br>
//! The semantics of pipe feature creation is based on the construction of shapes: <br>
//! -   along a length <br>
//! -   up to a limiting face <br>
//! -   from a limiting face to a height. <br>
//! The shape defining construction of the pipe feature can be either the supporting edge or <br>
//! the concerned area of a face. <br>
//! In case of the supporting edge, this contour <br>
//! can be attached to a face of the basis shape <br>
//! by binding. When the contour is bound to this <br>
//! face, the information that the contour will <br>
//! slide on the face becomes available to the relevant class methods. <br>
//! In case of the concerned area of a face, you <br>
//! could, for example, cut it out and move it to a <br>
//! different height which will define the limiting <br>
//! face of a protrusion or depression. <br>
class BRepFeat_MakePipe  : public BRepFeat_Form {
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

  //! initializes the pipe class. <br>
      BRepFeat_MakePipe();
  //! A face Pbase is selected in the <br>
//! shape Sbase to serve as the basis for the <br>
//! pipe. It will be defined by the wire Spine. <br>
//! Fuse offers a choice between: <br>
//! -   removing matter with a Boolean cut using the setting 0 <br>
//! -   adding matter with Boolean fusion using the setting 1. <br>
//!   The sketch face Skface serves to determine <br>
//! the type of operation. If it is inside the basis <br>
//! shape, a local operation such as glueing can be performed. <br>
      BRepFeat_MakePipe(const TopoDS_Shape& Sbase,const TopoDS_Shape& Pbase,const TopoDS_Face& Skface,const TopoDS_Wire& Spine,const Standard_Integer Fuse,const Standard_Boolean Modify);
  //! Initializes this algorithm for adding pipes to shapes. <br>
//! A face Pbase is selected in the shape Sbase to <br>
//! serve as the basis for the pipe. It will be defined by the wire Spine. <br>
//! Fuse offers a choice between: <br>
//! -   removing matter with a Boolean cut using the setting 0 <br>
//! -   adding matter with Boolean fusion using the setting 1. <br>
//!  The sketch face Skface serves to determine <br>
//! the type of operation. If it is inside the basis <br>
//! shape, a local operation such as glueing can be performed. <br>
  Standard_EXPORT     void Init(const TopoDS_Shape& Sbase,const TopoDS_Shape& Pbase,const TopoDS_Face& Skface,const TopoDS_Wire& Spine,const Standard_Integer Fuse,const Standard_Boolean Modify) ;
  //! Indicates that the edge <E> will slide on the face <br>
//!          <OnFace>. Raises ConstructionError  if the  face does not belong to the <br>
//! basis shape, or the edge to the prismed shape. <br>
  Standard_EXPORT     void Add(const TopoDS_Edge& E,const TopoDS_Face& OnFace) ;
  
  Standard_EXPORT     void Perform() ;
  
  Standard_EXPORT     void Perform(const TopoDS_Shape& Until) ;
  //! Assigns one of the following semantics <br>
//! -   to a face Until <br>
//! -   from a face From to a height Until. <br>
//! Reconstructs the feature topologically according to the semantic option chosen. <br>
  Standard_EXPORT     void Perform(const TopoDS_Shape& From,const TopoDS_Shape& Until) ;
  
  Standard_EXPORT     void Curves(TColGeom_SequenceOfCurve& S) ;
  
  Standard_EXPORT     Handle_Geom_Curve BarycCurve() ;





protected:





private:



TopoDS_Shape myPbase;
TopoDS_Face mySkface;
TopTools_DataMapOfShapeListOfShape mySlface;
TopoDS_Wire mySpine;
TColGeom_SequenceOfCurve myCurves;
Handle_Geom_Curve myBCurve;
BRepFeat_StatusError myStatusError;


};


#include <BRepFeat_MakePipe.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
