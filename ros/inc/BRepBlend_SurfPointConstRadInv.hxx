// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_SurfPointConstRadInv_HeaderFile
#define _BRepBlend_SurfPointConstRadInv_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Blend_SurfPointFuncInv_HeaderFile
#include <Blend_SurfPointFuncInv.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Adaptor3d_HSurface;
class Adaptor3d_HCurve;
class math_Vector;
class math_Matrix;
class gp_Pnt;


//! This function  is used  to find a  solution on  a done <br>
//!          point   of   the curve when   using  SurfRstConsRad or <br>
//!          CSConstRad... <br>
//!          The vector <X>  used in Value, Values and  Derivatives <br>
//!          methods  has  to   be the  vector   of the  parametric <br>
//!          coordinates w, U,  V where w is  the parameter  on the <br>
//!          guide line, U,V   are the parametric coordinates of  a <br>
//!          point on the partner surface. <br>
class BRepBlend_SurfPointConstRadInv  : public Blend_SurfPointFuncInv {
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

  
  Standard_EXPORT   BRepBlend_SurfPointConstRadInv(const Handle(Adaptor3d_HSurface)& S,const Handle(Adaptor3d_HCurve)& C);
  
  Standard_EXPORT     void Set(const Standard_Real R,const Standard_Integer Choix) ;
  //! returns 3. <br>
  Standard_EXPORT     Standard_Integer NbEquations() const;
  //! computes the values <F> of the Functions for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Value(const math_Vector& X,math_Vector& F) ;
  //! returns the values <D> of the derivatives for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Derivatives(const math_Vector& X,math_Matrix& D) ;
  //! returns the values <F> of the functions and the derivatives <br>
//!          <D> for the variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Values(const math_Vector& X,math_Vector& F,math_Matrix& D) ;
  //! Set the Point on which a solution has to be found. <br>
  Standard_EXPORT     void Set(const gp_Pnt& P) ;
  //! Returns in the vector Tolerance the parametric tolerance <br>
//!          for each of the 3 variables; <br>
//!          Tol is the tolerance used in 3d space. <br>
  Standard_EXPORT     void GetTolerance(math_Vector& Tolerance,const Standard_Real Tol) const;
  //! Returns in the vector InfBound the lowest values allowed <br>
//!          for each of the 3 variables. <br>
//!          Returns in the vector SupBound the greatest values allowed <br>
//!          for each of the 3 variables. <br>
  Standard_EXPORT     void GetBounds(math_Vector& InfBound,math_Vector& SupBound) const;
  //! Returns Standard_True if Sol is a zero of the function. <br>
//!          Tol is the tolerance used in 3d space. <br>
  Standard_EXPORT     Standard_Boolean IsSolution(const math_Vector& Sol,const Standard_Real Tol) ;





protected:





private:



Handle_Adaptor3d_HSurface surf;
Handle_Adaptor3d_HCurve curv;
gp_Pnt point;
Standard_Real ray;
Standard_Integer choix;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
