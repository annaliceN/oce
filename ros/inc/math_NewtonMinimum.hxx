// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_NewtonMinimum_HeaderFile
#define _math_NewtonMinimum_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _math_Status_HeaderFile
#include <math_Status.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _math_Matrix_HeaderFile
#include <math_Matrix.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class StdFail_NotDone;
class Standard_DimensionError;
class math_MultipleVarFunctionWithHessian;
class math_Vector;



class math_NewtonMinimum  {
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
//!            or IsConverged() returns True for 2 successives Iterations. <br>
//!  Warning: Obsolete Constructor (because IsConverged can not be redefined <br>
//!           with this. ) <br>
  Standard_EXPORT   math_NewtonMinimum(math_MultipleVarFunctionWithHessian& F,const math_Vector& StartingPoint,const Standard_Real Tolerance = 1.0e-7,const Standard_Integer NbIterations = 40,const Standard_Real Convexity = 1.0e-6,const Standard_Boolean WithSingularity = Standard_True);
  
//!            The tolerance  required on  the  solution is given  by <br>
//!            Tolerance. <br>
//!             Iteration are  stopped if <br>
//!             (!WithSingularity)  and H(F(Xi)) is not definite <br>
//!             positive  (if the smaller eigenvalue of H < Convexity) <br>
//!            or IsConverged() returns True for 2 successives Iterations. <br>
//!  Warning: This constructor do not computation <br>
  Standard_EXPORT   math_NewtonMinimum(math_MultipleVarFunctionWithHessian& F,const Standard_Real Tolerance = 1.0e-7,const Standard_Integer NbIterations = 40,const Standard_Real Convexity = 1.0e-6,const Standard_Boolean WithSingularity = Standard_True);
  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~math_NewtonMinimum(){Delete();}
  //! Search the solution. <br>
  Standard_EXPORT     void Perform(math_MultipleVarFunctionWithHessian& F,const math_Vector& StartingPoint) ;
  //!  This method is  called    at the end  of   each <br>
//!            iteration to  check the convergence : <br>
//!            || Xi+1 - Xi || < Tolerance <br>
//!            or || F(Xi+1) - F(Xi)|| < Tolerance * || F(Xi) || <br>
//!            It can be  redefined in a sub-class to implement a specific  test. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsConverged() const;
  //! Tests if an error has occured. <br>
        Standard_Boolean IsDone() const;
  //! Tests if the Function is convexe during optimization. <br>
        Standard_Boolean IsConvex() const;
  //! returns the location vector of the minimum. <br>
//! Exception NotDone is raised if an error has occured. <br>
       const math_Vector& Location() const;
  //! outputs the location vector of the minimum in Loc. <br>
//! Exception NotDone is raised if an error has occured. <br>
//! Exception DimensionError is raised if the range of Loc is not <br>
//! equal to the range of the StartingPoint. <br>
        void Location(math_Vector& Loc) const;
  //! returns the value of the minimum. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
        Standard_Real Minimum() const;
  //! returns the gradient vector at the minimum. <br>
//! Exception NotDone is raised if an error has occured.the minimum was not found. <br>
       const math_Vector& Gradient() const;
  //! outputs the gradient vector at the minimum in Grad. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
//! Exception DimensionError is raised if the range of Grad is not <br>
//! equal to the range of the StartingPoint. <br>
        void Gradient(math_Vector& Grad) const;
  //! returns the number of iterations really done in the <br>
//!          calculation of the minimum. <br>
//! The exception NotDone is raised if an error has occured. <br>
        Standard_Integer NbIterations() const;
  //! Prints on the stream o information on the current state <br>
//!          of the object. <br>
//!          Is used to redefine the operator <<. <br>
  Standard_EXPORT     void Dump(Standard_OStream& o) const;





protected:



math_Status TheStatus;
math_Vector TheLocation;
math_Vector TheGradient;
math_Vector TheStep;
math_Matrix TheHessian;
Standard_Real PreviousMinimum;
Standard_Real TheMinimum;
Standard_Real MinEigenValue;
Standard_Real XTol;
Standard_Real CTol;
Standard_Integer nbiter;
Standard_Boolean NoConvexTreatement;
Standard_Boolean Convex;


private:



Standard_Boolean Done;
Standard_Integer Itermax;


};


#include <math_NewtonMinimum.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
