// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeCustom_Curve2d_HeaderFile
#define _ShapeCustom_Curve2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom2d_Line_HeaderFile
#include <Handle_Geom2d_Line.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_BSplineCurve_HeaderFile
#include <Handle_Geom2d_BSplineCurve.hxx>
#endif
class TColgp_Array1OfPnt2d;
class Geom2d_Line;
class Geom2d_Curve;
class Geom2d_BSplineCurve;


//! Converts curve2d to analytical form with given <br>
//!          precision or simpify curve2d. <br>
class ShapeCustom_Curve2d  {
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

  //! Check if poleses is in the plane with given precision <br>
//!          Returns false if no. <br>
  Standard_EXPORT   static  Standard_Boolean IsLinear(const TColgp_Array1OfPnt2d& thePoles,const Standard_Real theTolerance,Standard_Real& theDeviation) ;
  //! Try to convert BSpline2d or Bezier2d to line 2d <br>
//!          only if it is linear. Recalculate first and last parameters. <br>
//!          Returns line2d or null curve2d. <br>
  Standard_EXPORT   static  Handle_Geom2d_Line ConvertToLine2d(const Handle(Geom2d_Curve)& theCurve,const Standard_Real theFirstIn,const Standard_Real theLastIn,const Standard_Real theTolerance,Standard_Real& theNewFirst,Standard_Real& theNewLast,Standard_Real& theDeviation) ;
  //! Try to remove knots from bspline where local derivatives are the same. <br>
//!          Remove knots with given precision. <br>
//!          Returns false if Bsplien was not modified <br>
  Standard_EXPORT   static  Standard_Boolean SimplifyBSpline2d(Handle(Geom2d_BSplineCurve)& theBSpline2d,const Standard_Real theTolerance) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
