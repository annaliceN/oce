// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_Curve_HeaderFile
#define _HLRBRep_Curve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepAdaptor_Curve_HeaderFile
#include <BRepAdaptor_Curve.hxx>
#endif
#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
class Standard_NoSuchObject;
class Standard_DomainError;
class Standard_OutOfRange;
class StdFail_UndefinedDerivative;
class BRepAdaptor_Curve;
class TopoDS_Edge;
class gp_Pnt;
class gp_Vec;
class gp_Pnt2d;
class gp_Dir2d;
class TColStd_Array1OfReal;
class gp_Vec2d;
class gp_Lin2d;
class gp_Circ2d;
class gp_Elips2d;
class gp_Hypr2d;
class gp_Parab2d;
class TColgp_Array1OfPnt2d;
class TColStd_Array1OfInteger;


//! Defines a 2d curve by projection of  a 3D curve on <br>
//!          a    plane     with  an     optional   perspective <br>
//!          transformation. <br>
class HLRBRep_Curve  {
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

  //! Creates an undefined Curve. <br>
  Standard_EXPORT   HLRBRep_Curve();
  
        void Projector(const Standard_Address Proj) ;
  //! Returns the 3D curve. <br>
        BRepAdaptor_Curve& Curve() ;
  //! Sets the 3D curve to be projected. <br>
  Standard_EXPORT     void Curve(const TopoDS_Edge& E) ;
  //! Returns the parameter   on the 2d  curve  from the <br>
//!          parameter on the 3d curve. <br>
  Standard_EXPORT     Standard_Real Parameter2d(const Standard_Real P3d) const;
  //! Returns the parameter   on the 3d  curve  from the <br>
//!          parameter on the 2d curve. <br>
  Standard_EXPORT     Standard_Real Parameter3d(const Standard_Real P2d) const;
  //! Update the minmax and the internal data <br>
  Standard_EXPORT     Standard_Real Update(const Standard_Address TotMin,const Standard_Address TotMax) ;
  //! Update the minmax returns tol for enlarge; <br>
  Standard_EXPORT     Standard_Real UpdateMinMax(const Standard_Address TotMin,const Standard_Address TotMax) ;
  //!  Computes the Z    coordinate  of the  point  of <br>
//!  parameter U on the curve in the viewing coordinate system <br>
  Standard_EXPORT     Standard_Real Z(const Standard_Real U) const;
  //!  Computes the 3D point   of parameter U  on the <br>
//!  curve. <br>
//! <br>
        gp_Pnt Value3D(const Standard_Real U) const;
  //!  Computes the 3D point   of parameter U  on the <br>
//!  curve. <br>
//! <br>
        void D0(const Standard_Real U,gp_Pnt& P) const;
  //!  Computes the point of parameter  U on the curve <br>
//!  with its first derivative. <br>
//! <br>
        void D1(const Standard_Real U,gp_Pnt& P,gp_Vec& V) const;
  //! Depending on <AtStart> computes the 2D point and <br>
//!  tangent on the curve  at sart (or at  end).  If the  first <br>
//!  derivative is null look after  at start (or before at end) <br>
//!  with the second derivative. <br>
  Standard_EXPORT     void Tangent(const Standard_Boolean AtStart,gp_Pnt2d& P,gp_Dir2d& D) const;
  
        Standard_Real FirstParameter() const;
  
        Standard_Real LastParameter() const;
  
        GeomAbs_Shape Continuity() const;
  //! If necessary,  breaks the  curve in  intervals  of <br>
//!          continuity  <S>.    And  returns   the number   of <br>
//!          intervals. <br>
        Standard_Integer NbIntervals(const GeomAbs_Shape S) ;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
        void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) ;
  
        Standard_Boolean IsClosed() const;
  
        Standard_Boolean IsPeriodic() const;
  
        Standard_Real Period() const;
  //! Computes the point of parameter U on the curve. <br>
//! <br>
        gp_Pnt2d Value(const Standard_Real U) const;
  //! Computes the point of parameter U on the curve. <br>
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt2d& P) const;
  //! Computes the point  of  parameter U on the curve <br>
//!  with its first derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C1. <br>
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V) const;
  //! Raised if the continuity of the current interval <br>
//!  is not C2. <br>
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) const;
  
//!  Returns the point P of parameter U, the first, the second <br>
//!  and the third derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C3. <br>
  Standard_EXPORT     void D3(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) const;
  
//!  The returned vector gives the value of the derivative for the <br>
//!  order of derivation N. <br>//! Raised if the continuity of the current interval <br>
//!  is not CN. <br>//! Raised if N < 1. <br>
  Standard_EXPORT     gp_Vec2d DN(const Standard_Real U,const Standard_Integer N) const;
  //!  Returns the parametric  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
        Standard_Real Resolution(const Standard_Real R3d) const;
  //! Returns  the  type of the   curve  in the  current <br>
//!          interval :   Line,   Circle,   Ellipse, Hyperbola, <br>
//!          Parabola, BezierCurve, BSplineCurve, OtherCurve. <br>
        GeomAbs_CurveType GetType() const;
  
  Standard_EXPORT     gp_Lin2d Line() const;
  
  Standard_EXPORT     gp_Circ2d Circle() const;
  
  Standard_EXPORT     gp_Elips2d Ellipse() const;
  
  Standard_EXPORT     gp_Hypr2d Hyperbola() const;
  
  Standard_EXPORT     gp_Parab2d Parabola() const;
  
        Standard_Boolean IsRational() const;
  
        Standard_Integer Degree() const;
  
        Standard_Integer NbPoles() const;
  
  Standard_EXPORT     void Poles(TColgp_Array1OfPnt2d& TP) const;
  
  Standard_EXPORT     void PolesAndWeights(TColgp_Array1OfPnt2d& TP,TColStd_Array1OfReal& TW) const;
  
        Standard_Integer NbKnots() const;
  
  Standard_EXPORT     void Knots(TColStd_Array1OfReal& kn) const;
  
  Standard_EXPORT     void Multiplicities(TColStd_Array1OfInteger& mu) const;





protected:





private:



BRepAdaptor_Curve myCurve;
GeomAbs_CurveType myType;
Standard_Address myProj;
Standard_Real myOX;
Standard_Real myOZ;
Standard_Real myVX;
Standard_Real myVZ;
Standard_Real myOF;


};


#include <HLRBRep_Curve.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
