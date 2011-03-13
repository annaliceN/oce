// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FairCurve_Newton_HeaderFile
#define _FairCurve_Newton_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _math_NewtonMinimum_HeaderFile
#include <math_NewtonMinimum.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class math_MultipleVarFunctionWithHessian;
class math_Vector;


//! Algorithme of Optimization used to make "FairCurve" <br>
class FairCurve_Newton  : public math_NewtonMinimum {
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

  //! -- Given the  starting   point  StartingPoint, <br>
//!            The tolerance  required on  the  solution is given  by <br>
//!            Tolerance. <br>
//!             Iteration are  stopped if <br>
//!             (!WithSingularity)  and H(F(Xi)) is not definite <br>
//!             positive  (if the smaller eigenvalue of H < Convexity) <br>
//!             or IsConverged() returns True for 2 successives Iterations. <br>
//!  Warning: Obsolete Constructor (because IsConverged can not be redefined <br>
//!           with this. ) <br>
  Standard_EXPORT   FairCurve_Newton(math_MultipleVarFunctionWithHessian& F,const math_Vector& StartingPoint,const Standard_Real SpatialTolerance = 1.0e-7,const Standard_Real CriteriumTolerance = 1.0e-2,const Standard_Integer NbIterations = 40,const Standard_Real Convexity = 1.0e-6,const Standard_Boolean WithSingularity = Standard_True);
  
//!            The tolerance  required on  the  solution is given  by <br>
//!            Tolerance. <br>
//!             Iteration are  stopped if <br>
//!             (!WithSingularity)  and H(F(Xi)) is not definite <br>
//!             positive  (if the smaller eigenvalue of H < Convexity) <br>
//!            or IsConverged() returns True for 2 successives Iterations. <br>
//!  Warning: This constructor do not computation <br>
  Standard_EXPORT   FairCurve_Newton(math_MultipleVarFunctionWithHessian& F,const Standard_Real SpatialTolerance = 1.0e-7,const Standard_Real Tolerance = 1.0e-7,const Standard_Integer NbIterations = 40,const Standard_Real Convexity = 1.0e-6,const Standard_Boolean WithSingularity = Standard_True);
  //!  This method is  called    at the end  of   each <br>
//!          iteration to  check the convergence : <br>
//!          || Xi+1 - Xi || < SpatialTolerance/100 Or <br>
//!          || Xi+1 - Xi || < SpatialTolerance and <br>
//!          |F(Xi+1) - F(Xi)| < CriteriumTolerance * |F(xi)| <br>
//!          It can be redefined in a sub-class to implement a specific test. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsConverged() const;





protected:





private:



Standard_Real mySpTol;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
