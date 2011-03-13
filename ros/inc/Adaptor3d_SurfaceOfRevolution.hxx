// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor3d_SurfaceOfRevolution_HeaderFile
#define _Adaptor3d_SurfaceOfRevolution_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _gp_Ax1_HeaderFile
#include <gp_Ax1.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Ax3_HeaderFile
#include <gp_Ax3.hxx>
#endif
#ifndef _Adaptor3d_Surface_HeaderFile
#include <Adaptor3d_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _GeomAbs_SurfaceType_HeaderFile
#include <GeomAbs_SurfaceType.hxx>
#endif
#ifndef _Handle_Geom_BezierSurface_HeaderFile
#include <Handle_Geom_BezierSurface.hxx>
#endif
#ifndef _Handle_Geom_BSplineSurface_HeaderFile
#include <Handle_Geom_BSplineSurface.hxx>
#endif
class Adaptor3d_HCurve;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class gp_Ax1;
class TColStd_Array1OfReal;
class Adaptor3d_HSurface;
class gp_Pnt;
class gp_Vec;
class gp_Pln;
class gp_Cylinder;
class gp_Cone;
class gp_Sphere;
class gp_Torus;
class Geom_BezierSurface;
class Geom_BSplineSurface;
class gp_Ax3;
class gp_Dir;


//! This class defines a complete surface of revolution. <br>
//!  The surface is obtained by rotating a curve a complete revolution <br>
//!  about an axis. The curve and the axis must be in the same plane. <br>
//!  If the curve and the axis are not in the same plane it is always <br>
//!  possible to be in the previous case after a cylindrical projection <br>
//!  of the curve in a referenced plane. <br>
//!  For a complete surface of revolution the parametric range is <br>
//!  0 <= U <= 2*PI.       -- <br>
//!  The parametric range for V is defined with the revolved curve. <br>
//!  The origin of the U parametrization is given by the position <br>
//!  of the revolved curve (reference). The direction of the revolution <br>
//!  axis defines the positive sense of rotation (trigonometric sense) <br>
//!  corresponding to the increasing of the parametric value U. <br>
//!  The derivatives are always defined for the u direction. <br>
//!  For the v direction the definition of the derivatives depends on <br>
//!  the degree of continuity of the referenced curve. <br>
class Adaptor3d_SurfaceOfRevolution  : public Adaptor3d_Surface {
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

  
  Standard_EXPORT   Adaptor3d_SurfaceOfRevolution();
  //! The Curve is loaded. <br>
  Standard_EXPORT   Adaptor3d_SurfaceOfRevolution(const Handle(Adaptor3d_HCurve)& C);
  //! The Curve and the Direction are loaded. <br>
  Standard_EXPORT   Adaptor3d_SurfaceOfRevolution(const Handle(Adaptor3d_HCurve)& C,const gp_Ax1& V);
  //! Changes the Curve <br>
  Standard_EXPORT     void Load(const Handle(Adaptor3d_HCurve)& C) ;
  //! Changes the Direction <br>
  Standard_EXPORT     void Load(const gp_Ax1& V) ;
  
  Standard_EXPORT     gp_Ax1 AxeOfRevolution() const;
  
  Standard_EXPORT     Standard_Real FirstUParameter() const;
  
  Standard_EXPORT     Standard_Real LastUParameter() const;
  
  Standard_EXPORT     Standard_Real FirstVParameter() const;
  
  Standard_EXPORT     Standard_Real LastVParameter() const;
  
  Standard_EXPORT     GeomAbs_Shape UContinuity() const;
  //! Return CN. <br>
  Standard_EXPORT     GeomAbs_Shape VContinuity() const;
  //! Returns the number of U intervals for  continuity <br>
//!          <S>. May be one if UContinuity(me) >= <S> <br>
  Standard_EXPORT     Standard_Integer NbUIntervals(const GeomAbs_Shape S) const;
  //! Returns the number of V intervals for  continuity <br>
//!          <S>. May be one if VContinuity(me) >= <S> <br>
  Standard_EXPORT     Standard_Integer NbVIntervals(const GeomAbs_Shape S) const;
  //! Returns the  intervals with the requested continuity <br>
//!          in the U direction. <br>
  Standard_EXPORT     void UIntervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) const;
  //! Returns the  intervals with the requested continuity <br>
//!          in the V direction. <br>
  Standard_EXPORT     void VIntervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) const;
  //! Returns    a  surface trimmed in the U direction <br>
//!           equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
  Standard_EXPORT     Handle_Adaptor3d_HSurface UTrim(const Standard_Real First,const Standard_Real Last,const Standard_Real Tol) const;
  //! Returns    a  surface trimmed in the V direction  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
  Standard_EXPORT     Handle_Adaptor3d_HSurface VTrim(const Standard_Real First,const Standard_Real Last,const Standard_Real Tol) const;
  
  Standard_EXPORT     Standard_Boolean IsUClosed() const;
  
  Standard_EXPORT     Standard_Boolean IsVClosed() const;
  
  Standard_EXPORT     Standard_Boolean IsUPeriodic() const;
  
  Standard_EXPORT     Standard_Real UPeriod() const;
  
  Standard_EXPORT     Standard_Boolean IsVPeriodic() const;
  
  Standard_EXPORT     Standard_Real VPeriod() const;
  //! Computes the point of parameters U,V on the surface. <br>
  Standard_EXPORT     gp_Pnt Value(const Standard_Real U,const Standard_Real V) const;
  //! Computes the point of parameters U,V on the surface. <br>
  Standard_EXPORT     void D0(const Standard_Real U,const Standard_Real V,gp_Pnt& P) const;
  //! Computes the point  and the first derivatives on <br>
//!  the surface. <br>//! Raised   if  the continuity  of   the  current <br>
//!  intervals is not C1. <br>
  Standard_EXPORT     void D1(const Standard_Real U,const Standard_Real V,gp_Pnt& P,gp_Vec& D1U,gp_Vec& D1V) const;
  //!  Computes   the point,  the  first  and  second <br>
//!  derivatives on the surface. <br>//! Raised  if   the   continuity   of the current <br>
//!  intervals is not C2. <br>
  Standard_EXPORT     void D2(const Standard_Real U,const Standard_Real V,gp_Pnt& P,gp_Vec& D1U,gp_Vec& D1V,gp_Vec& D2U,gp_Vec& D2V,gp_Vec& D2UV) const;
  //! Computes the point,  the first, second and third <br>
//!  derivatives on the surface. <br>//! Raised  if   the   continuity   of the current <br>
//!  intervals is not C3. <br>
  Standard_EXPORT     void D3(const Standard_Real U,const Standard_Real V,gp_Pnt& P,gp_Vec& D1U,gp_Vec& D1V,gp_Vec& D2U,gp_Vec& D2V,gp_Vec& D2UV,gp_Vec& D3U,gp_Vec& D3V,gp_Vec& D3UUV,gp_Vec& D3UVV) const;
  //!  Computes the derivative of order Nu <br>
//!  in the direction U and Nv in the direction V <br>
//!  at the point P(U, V). <br>//! Raised if the current U  interval is not not CNu <br>
//!  and the current V interval is not CNv. <br>//! Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0. <br>
  Standard_EXPORT     gp_Vec DN(const Standard_Real U,const Standard_Real V,const Standard_Integer Nu,const Standard_Integer Nv) const;
  //!  Returns the parametric U  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
  Standard_EXPORT     Standard_Real UResolution(const Standard_Real R3d) const;
  //!  Returns the parametric V  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
  Standard_EXPORT     Standard_Real VResolution(const Standard_Real R3d) const;
  //! Returns the type of the surface : Plane, Cylinder, <br>
//!          Cone,      Sphere,        Torus,    BezierSurface, <br>
//!          BSplineSurface,               SurfaceOfRevolution, <br>
//!          SurfaceOfExtrusion, OtherSurface <br>
  Standard_EXPORT     GeomAbs_SurfaceType GetType() const;
  
  Standard_EXPORT     gp_Pln Plane() const;
  
  Standard_EXPORT     gp_Cylinder Cylinder() const;
  //! Apex of the Cone = Cone.Position().Location() <br>
//!           ==> ReferenceRadius = 0. <br>
  Standard_EXPORT     gp_Cone Cone() const;
  
  Standard_EXPORT     gp_Sphere Sphere() const;
  
  Standard_EXPORT     gp_Torus Torus() const;
  
  Standard_EXPORT     Standard_Integer UDegree() const;
  
  Standard_EXPORT     Standard_Integer NbUPoles() const;
  
  Standard_EXPORT     Standard_Integer VDegree() const;
  
  Standard_EXPORT     Standard_Integer NbVPoles() const;
  
  Standard_EXPORT     Standard_Integer NbUKnots() const;
  
  Standard_EXPORT     Standard_Integer NbVKnots() const;
  
  Standard_EXPORT     Standard_Boolean IsURational() const;
  
  Standard_EXPORT     Standard_Boolean IsVRational() const;
  
  Standard_EXPORT     Handle_Geom_BezierSurface Bezier() const;
  
  Standard_EXPORT     Handle_Geom_BSplineSurface BSpline() const;
  
  Standard_EXPORT     gp_Ax3 Axis() const;
  
  Standard_EXPORT     gp_Dir Direction() const;
  
  Standard_EXPORT     Handle_Adaptor3d_HCurve BasisCurve() const;





protected:





private:



Handle_Adaptor3d_HCurve myBasisCurve;
gp_Ax1 myAxis;
Standard_Boolean myHaveAxis;
gp_Ax3 myAxeRev;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
