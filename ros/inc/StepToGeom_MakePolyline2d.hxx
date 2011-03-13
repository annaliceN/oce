// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakePolyline2d_HeaderFile
#define _StepToGeom_MakePolyline2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepGeom_Polyline_HeaderFile
#include <Handle_StepGeom_Polyline.hxx>
#endif
#ifndef _Handle_Geom2d_BSplineCurve_HeaderFile
#include <Handle_Geom2d_BSplineCurve.hxx>
#endif
class StepGeom_Polyline;
class Geom2d_BSplineCurve;


//! Translates Polyline entity into Geom2d_BSpline <br>
//!          In case if Polyline has more than 2 points bspline will be C0 <br>
class StepToGeom_MakePolyline2d  {
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

  
  Standard_EXPORT   static  Standard_Boolean Convert(const Handle(StepGeom_Polyline)& SPL,Handle(Geom2d_BSplineCurve)& CC) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
