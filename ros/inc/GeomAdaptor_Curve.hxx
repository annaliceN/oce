// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomAdaptor_Curve_HeaderFile
#define _GeomAdaptor_Curve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Adaptor3d_Curve_HeaderFile
#include <Adaptor3d_Curve.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_BezierCurve_HeaderFile
#include <Handle_Geom_BezierCurve.hxx>
#endif
#ifndef _Handle_Geom_BSplineCurve_HeaderFile
#include <Handle_Geom_BSplineCurve.hxx>
#endif
class Geom_Curve;
class Standard_NoSuchObject;
class Standard_ConstructionError;
class Standard_OutOfRange;
class Standard_DomainError;
class GeomAdaptor_Surface;
class TColStd_Array1OfReal;
class Adaptor3d_HCurve;
class gp_Pnt;
class gp_Vec;
class gp_Lin;
class gp_Circ;
class gp_Elips;
class gp_Hypr;
class gp_Parab;
class Geom_BezierCurve;
class Geom_BSplineCurve;


//! This class provides an interface between the services provided by any <br>
//! curve from the package Geom and those required of the curve by algorithms which use it. <br>
class GeomAdaptor_Curve  : public Adaptor3d_Curve {
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

  
      GeomAdaptor_Curve();
  
      GeomAdaptor_Curve(const Handle(Geom_Curve)& C);
  //! ConstructionError is raised if Ufirst>Ulast <br>
      GeomAdaptor_Curve(const Handle(Geom_Curve)& C,const Standard_Real UFirst,const Standard_Real ULast);
  
        void Load(const Handle(Geom_Curve)& C) ;
  //! ConstructionError is raised if Ufirst>Ulast <br>
  Standard_EXPORT     void Load(const Handle(Geom_Curve)& C,const Standard_Real UFirst,const Standard_Real ULast) ;
  
//! Provides a curve inherited from Hcurve from Adaptor. <br>
//! This is inherited to provide easy to use constructors. <br>
       const Handle_Geom_Curve& Curve() const;
  
        Standard_Real FirstParameter() const;
  
        Standard_Real LastParameter() const;
  
  Standard_EXPORT     GeomAbs_Shape Continuity() const;
  //! Returns  the number  of  intervals for  continuity <br>
//!          <S>. May be one if Continuity(me) >= <S> <br>
  Standard_EXPORT     Standard_Integer NbIntervals(const GeomAbs_Shape S) ;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
  Standard_EXPORT     void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) ;
  //! Returns    a  curve equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
  Standard_EXPORT     Handle_Adaptor3d_HCurve Trim(const Standard_Real First,const Standard_Real Last,const Standard_Real Tol) const;
  
  Standard_EXPORT     Standard_Boolean IsClosed() const;
  
  Standard_EXPORT     Standard_Boolean IsPeriodic() const;
  
  Standard_EXPORT     Standard_Real Period() const;
  //! Computes the point of parameter U on the curve <br>
  Standard_EXPORT     gp_Pnt Value(const Standard_Real U) const;
  //! Computes the point of parameter U. <br>
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt& P) const;
  //! Computes the point of parameter U on the curve <br>
//!  with its first derivative. <br>
//! <br>
//!  Warning : On the specific case of BSplineCurve: <br>
//!  if the curve is cut in interval of continuity at least C1, the <br>
//!  derivatives are computed on the current interval. <br>
//!  else the derivatives are computed on the basis curve. <br>
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt& P,gp_Vec& V) const;
  
//!  Returns the point P of parameter U, the first and second <br>
//!  derivatives V1 and V2. <br>
//! <br>
//!  Warning : On the specific case of BSplineCurve: <br>
//!  if the curve is cut in interval of continuity at least C2, the <br>
//!  derivatives are computed on the current interval. <br>
//!  else the derivatives are computed on the basis curve. <br>
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) const;
  
//!  Returns the point P of parameter U, the first, the second <br>
//!  and the third derivative. <br>
//! <br>
//!  Warning : On the specific case of BSplineCurve: <br>
//!  if the curve is cut in interval of continuity at least C3, the <br>
//!  derivatives are computed on the current interval. <br>
//!  else the derivatives are computed on the basis curve. <br>
  Standard_EXPORT     void D3(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) const;
  
//!  The returned vector gives the value of the derivative for the <br>
//!  order of derivation N. <br>
//!  Warning : On the specific case of BSplineCurve: <br>
//!  if the curve is cut in interval of continuity CN, the <br>
//!  derivatives are computed on the current interval. <br>
//!  else the derivatives are computed on the basis curve. <br>//! Raised if N < 1. <br>
  Standard_EXPORT     gp_Vec DN(const Standard_Real U,const Standard_Integer N) const;
  //! returns the parametric resolution <br>
  Standard_EXPORT     Standard_Real Resolution(const Standard_Real R3d) const;
  
        GeomAbs_CurveType GetType() const;
  
  Standard_EXPORT     gp_Lin Line() const;
  
  Standard_EXPORT     gp_Circ Circle() const;
  
  Standard_EXPORT     gp_Elips Ellipse() const;
  
  Standard_EXPORT     gp_Hypr Hyperbola() const;
  
  Standard_EXPORT     gp_Parab Parabola() const;
  
//!          this should NEVER make a copy <br>
//!          of the underlying curve to read <br>
//!          the relevant information <br>
//! <br>
  Standard_EXPORT     Standard_Integer Degree() const;
  
//!          this should NEVER make a copy <br>
//!          of the underlying curve to read <br>
//!          the relevant information <br>
//! <br>
  Standard_EXPORT     Standard_Boolean IsRational() const;
  
//!          this should NEVER make a copy <br>
//!          of the underlying curve to read <br>
//!          the relevant information <br>
//! <br>
  Standard_EXPORT     Standard_Integer NbPoles() const;
  
//!          this should NEVER make a copy <br>
//!          of the underlying curve to read <br>
//!          the relevant information <br>
//! <br>
  Standard_EXPORT     Standard_Integer NbKnots() const;
  //! this will NOT make a copy of the <br>
//!         Bezier Curve : If you want to modify <br>
//!         the Curve please make a copy yourself <br>
//!         Also it will NOT trim the surface to <br>
//!         myFirst/Last. <br>
  Standard_EXPORT     Handle_Geom_BezierCurve Bezier() const;
  //! this will NOT make a copy of the <br>
//!         BSpline Curve : If you want to modify <br>
//!         the Curve please make a copy yourself <br>
//!         Also it will NOT trim the surface to <br>
//!         myFirst/Last. <br>
  Standard_EXPORT     Handle_Geom_BSplineCurve BSpline() const;


friend class GeomAdaptor_Surface;



protected:





private:

  
  Standard_EXPORT     GeomAbs_Shape LocalContinuity(const Standard_Real U1,const Standard_Real U2) const;


Handle_Geom_Curve myCurve;
GeomAbs_CurveType myTypeCurve;
Standard_Real myFirst;
Standard_Real myLast;


};


#include <GeomAdaptor_Curve.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
