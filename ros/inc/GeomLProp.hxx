// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomLProp_HeaderFile
#define _GeomLProp_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom_Curve;
class GeomLProp_CurveTool;
class GeomLProp_SurfaceTool;
class GeomLProp_CLProps;
class GeomLProp_SLProps;


//! These global functions compute the degree of <br>
//!          continuity of a 3D curve built by concatenation of two <br>
//!          other curves (or portions of curves) at their junction point. <br>
class GeomLProp  {
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

  
  Standard_EXPORT   static  GeomAbs_Shape Continuity(const Handle(Geom_Curve)& C1,const Handle(Geom_Curve)& C2,const Standard_Real u1,const Standard_Real u2,const Standard_Boolean r1,const Standard_Boolean r2,const Standard_Real tl,const Standard_Real ta) ;
  
  Standard_EXPORT   static  GeomAbs_Shape Continuity(const Handle(Geom_Curve)& C1,const Handle(Geom_Curve)& C2,const Standard_Real u1,const Standard_Real u2,const Standard_Boolean r1,const Standard_Boolean r2) ;





protected:





private:




friend class GeomLProp_CurveTool;
friend class GeomLProp_SurfaceTool;
friend class GeomLProp_CLProps;
friend class GeomLProp_SLProps;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
