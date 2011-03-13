// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draft_FaceInfo_HeaderFile
#define _Draft_FaceInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
class Geom_Surface;
class Geom_Curve;
class Standard_DomainError;
class TopoDS_Face;



class Draft_FaceInfo  {
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

  
  Standard_EXPORT   Draft_FaceInfo();
  
  Standard_EXPORT   Draft_FaceInfo(const Handle(Geom_Surface)& S,const Standard_Boolean HasNewGeometry);
  
  Standard_EXPORT     void RootFace(const TopoDS_Face& F) ;
  
  Standard_EXPORT     Standard_Boolean NewGeometry() const;
  
  Standard_EXPORT     void Add(const TopoDS_Face& F) ;
  
  Standard_EXPORT    const TopoDS_Face& FirstFace() const;
  
  Standard_EXPORT    const TopoDS_Face& SecondFace() const;
  
  Standard_EXPORT    const Handle_Geom_Surface& Geometry() const;
  
  Standard_EXPORT     Handle_Geom_Surface& ChangeGeometry() ;
  
  Standard_EXPORT    const TopoDS_Face& RootFace() const;
  
  Standard_EXPORT     Handle_Geom_Curve& ChangeCurve() ;
  
  Standard_EXPORT    const Handle_Geom_Curve& Curve() const;





protected:





private:



Standard_Boolean myNewGeom;
Handle_Geom_Surface myGeom;
TopoDS_Face myRootFace;
TopoDS_Face myF1;
TopoDS_Face myF2;
Handle_Geom_Curve myCurv;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
