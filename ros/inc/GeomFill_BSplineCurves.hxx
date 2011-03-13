// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_BSplineCurves_HeaderFile
#define _GeomFill_BSplineCurves_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_BSplineSurface_HeaderFile
#include <Handle_Geom_BSplineSurface.hxx>
#endif
#ifndef _Handle_Geom_BSplineCurve_HeaderFile
#include <Handle_Geom_BSplineCurve.hxx>
#endif
#ifndef _GeomFill_FillingStyle_HeaderFile
#include <GeomFill_FillingStyle.hxx>
#endif
class Geom_BSplineSurface;
class Standard_ConstructionError;
class Geom_BSplineCurve;


//! An algorithm for constructing a BSpline surface filled <br>
//! from contiguous BSpline curves which form its boundaries. <br>
//! The algorithm accepts two, three or four BSpline <br>
//! curves as the boundaries of the target surface. <br>
//! A range of filling styles - more or less rounded, more <br>
//! or less flat - is available. <br>
//! A BSplineCurves object provides a framework for: <br>
//! -   defining the boundaries, and the filling style of the surface <br>
//! -   implementing the construction algorithm <br>
//! -   consulting the result. <br>
//! Warning <br>
//! Some problems may show up with rational curves. <br>
class GeomFill_BSplineCurves  {
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

  //! Constructs a default BSpline surface framework. <br>
  Standard_EXPORT   GeomFill_BSplineCurves();
  
  Standard_EXPORT   GeomFill_BSplineCurves(const Handle(Geom_BSplineCurve)& C1,const Handle(Geom_BSplineCurve)& C2,const Handle(Geom_BSplineCurve)& C3,const Handle(Geom_BSplineCurve)& C4,const GeomFill_FillingStyle Type);
  
  Standard_EXPORT   GeomFill_BSplineCurves(const Handle(Geom_BSplineCurve)& C1,const Handle(Geom_BSplineCurve)& C2,const Handle(Geom_BSplineCurve)& C3,const GeomFill_FillingStyle Type);
  //! Constructs a framework for building a BSpline surface from either <br>
//! -   the four contiguous BSpline curves, C1, C2, C3 and C4, or <br>
//! -   the three contiguous BSpline curves, C1, C2 and C3, or <br>
//! -   the two contiguous BSpline curves, C1 and C2. <br>
//! The type of filling style Type to be used is one of: <br>
//! -   GeomFill_Stretch - the style with the flattest patch <br>
//! -   GeomFill_Coons - a rounded style of patch with <br>
//!   less depth than that of Curved <br>
//! -   GeomFill_Curved - the style with the most rounded <br>
//!   patch.Constructs a framework for building a BSpline <br>
//!   surface common to the two BSpline curves, C1 and C2. <br>
//! Exceptions <br>
//! Standard_ConstructionError if the curves are not contiguous. <br>
  Standard_EXPORT   GeomFill_BSplineCurves(const Handle(Geom_BSplineCurve)& C1,const Handle(Geom_BSplineCurve)& C2,const GeomFill_FillingStyle Type);
  //! if the curves cannot be joined <br>
  Standard_EXPORT     void Init(const Handle(Geom_BSplineCurve)& C1,const Handle(Geom_BSplineCurve)& C2,const Handle(Geom_BSplineCurve)& C3,const Handle(Geom_BSplineCurve)& C4,const GeomFill_FillingStyle Type) ;
  //! if the curves cannot be joined <br>
  Standard_EXPORT     void Init(const Handle(Geom_BSplineCurve)& C1,const Handle(Geom_BSplineCurve)& C2,const Handle(Geom_BSplineCurve)& C3,const GeomFill_FillingStyle Type) ;
  //! Initializes or reinitializes this algorithm with two, three, <br>
//! or four curves - C1, C2, C3, and C4 - and Type, one <br>
//! of the following filling styles: <br>
//! -   GeomFill_Stretch - the style with the flattest patch <br>
//! -   GeomFill_Coons - a rounded style of patch with <br>
//!   less depth than that of Curved <br>
//! -   GeomFill_Curved - the style with the most rounded patch. <br>
//!   Exceptions <br>
//! Standard_ConstructionError if the curves are not contiguous. <br>
  Standard_EXPORT     void Init(const Handle(Geom_BSplineCurve)& C1,const Handle(Geom_BSplineCurve)& C2,const GeomFill_FillingStyle Type) ;
  //! Returns the BSpline surface Surface resulting from <br>
//! the computation performed by this algorithm. <br>
       const Handle_Geom_BSplineSurface& Surface() const;





protected:





private:



Handle_Geom_BSplineSurface mySurface;


};


#include <GeomFill_BSplineCurves.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
