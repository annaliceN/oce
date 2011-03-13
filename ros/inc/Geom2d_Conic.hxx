// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2d_Conic_HeaderFile
#define _Geom2d_Conic_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom2d_Conic_HeaderFile
#include <Handle_Geom2d_Conic.hxx>
#endif

#ifndef _gp_Ax22d_HeaderFile
#include <gp_Ax22d.hxx>
#endif
#ifndef _Geom2d_Curve_HeaderFile
#include <Geom2d_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_ConstructionError;
class Standard_DomainError;
class gp_Ax22d;
class gp_Ax2d;
class gp_Pnt2d;


//! The abstract class Conic describes the common <br>
//! behavior of conic curves in 2D space and, in <br>
//! particular, their general characteristics. The Geom2d <br>
//! package provides four specific classes of conics: <br>
//! Geom2d_Circle, Geom2d_Ellipse, <br>
//! Geom2d_Hyperbola and Geom2d_Parabola. <br>
//! A conic is positioned in the plane with a coordinate <br>
//! system (gp_Ax22d object), where the origin is the <br>
//! center of the conic (or the apex in case of a parabola). <br>
//! This coordinate system is the local coordinate <br>
//! system of the conic. It gives the conic an explicit <br>
//! orientation, determining the direction in which the <br>
//! parameter increases along the conic. The "X Axis" of <br>
//! the local coordinate system also defines the origin of <br>
//! the parameter of the conic. <br>
class Geom2d_Conic : public Geom2d_Curve {

public:

  //! Modifies this conic, redefining its local coordinate system <br>
//! partially, by assigning P as its origin <br>
  Standard_EXPORT     void SetAxis(const gp_Ax22d& A) ;
  
  Standard_EXPORT     void SetXAxis(const gp_Ax2d& A) ;
  //! Assigns the origin and unit vector of axis A to the <br>
//! origin of the local coordinate system of this conic and either: <br>
//! - its "X Direction", or <br>
//! - its "Y Direction". <br>
//! The other unit vector of the local coordinate system <br>
//! of this conic is recomputed normal to A, without <br>
//! changing the orientation of the local coordinate <br>
//! system (right-handed or left-handed). <br>
  Standard_EXPORT     void SetYAxis(const gp_Ax2d& A) ;
  //! Modifies this conic, redefining its local coordinate <br>
//! system fully, by assigning A as this coordinate system. <br>
  Standard_EXPORT     void SetLocation(const gp_Pnt2d& P) ;
  
//!  Returns the "XAxis" of the conic. <br>
//!  This axis defines the origin of parametrization of the conic. <br>
//!  This axis and the "Yaxis" define the local coordinate system <br>
//!  of the conic. <br>
//! -C++: return const& <br>
  Standard_EXPORT     gp_Ax2d XAxis() const;
  
//!  Returns the "YAxis" of the conic. <br>
//!  The "YAxis" is perpendicular to the "Xaxis". <br>
  Standard_EXPORT     gp_Ax2d YAxis() const;
  
//!  returns the eccentricity value of the conic e. <br>
//!  e = 0 for a circle <br>
//!  0 < e < 1 for an ellipse  (e = 0 if MajorRadius = MinorRadius) <br>
//!  e > 1 for a hyperbola <br>
//!  e = 1 for a parabola <br>
  Standard_EXPORT   virtual  Standard_Real Eccentricity() const = 0;
  
//!  Returns the location point of the conic. <br>
//!  For the circle, the ellipse and the hyperbola it is the center of <br>
//!  the conic. For the parabola it is the vertex of the parabola. <br>
  Standard_EXPORT     gp_Pnt2d Location() const;
  
//!  Returns the local coordinates system of the conic. <br>
  Standard_EXPORT    const gp_Ax22d& Position() const;
  
//!  Reverses the direction of parameterization of <me>. <br>
//!  The local coordinate system of the conic is modified. <br>
  Standard_EXPORT     void Reverse() ;
  //! Returns the  parameter on the  reversed  curve for <br>
//!          the point of parameter U on <me>. <br>
//! <br>
  Standard_EXPORT   virtual  Standard_Real ReversedParameter(const Standard_Real U) const = 0;
  //! Returns GeomAbs_CN which is the global continuity of any conic. <br>
  Standard_EXPORT     GeomAbs_Shape Continuity() const;
  
//!  Returns True, the order of continuity of a conic is infinite. <br>
  Standard_EXPORT     Standard_Boolean IsCN(const Standard_Integer N) const;




  DEFINE_STANDARD_RTTI(Geom2d_Conic)

protected:


gp_Ax22d pos;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
