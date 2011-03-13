// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeCustom_Surface_HeaderFile
#define _ShapeCustom_Surface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom_Surface;


//! Converts a surface to the analitical form with given <br>
//!          precision. Conversion is done only the surface is bspline <br>
//!          of bezier and this can be approximed by some analytical <br>
//!          surface with that precision. <br>
class ShapeCustom_Surface  {
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

  
  Standard_EXPORT   ShapeCustom_Surface();
  
  Standard_EXPORT   ShapeCustom_Surface(const Handle(Geom_Surface)& S);
  
  Standard_EXPORT     void Init(const Handle(Geom_Surface)& S) ;
  //! Returns maximal deviation of converted surface from the original <br>
//!          one computed by last call to ConvertToAnalytical <br>
        Standard_Real Gap() const;
  //! Tries to convert the Surface to an Analytic form <br>
//!          Returns the result <br>
//!          Works only if the Surface is BSpline or Bezier. <br>
//!          Else, or in case of failure, returns a Null Handle <br>
  Standard_EXPORT     Handle_Geom_Surface ConvertToAnalytical(const Standard_Real tol,const Standard_Boolean substitute) ;
  //! Tries to convert the Surface to the Periodic form <br>
//!          Returns the resulting surface <br>
//!          Works only if the Surface is BSpline and is closed with <br>
//!          Precision::Confusion() <br>
//!          Else, or in case of failure, returns a Null Handle <br>
  Standard_EXPORT     Handle_Geom_Surface ConvertToPeriodic(const Standard_Boolean substitute,const Standard_Real preci = -1) ;





protected:





private:



Handle_Geom_Surface mySurf;
Standard_Real myGap;


};


#include <ShapeCustom_Surface.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
