// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CSLib_NormalPolyDef_HeaderFile
#define _CSLib_NormalPolyDef_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColStd_Array1OfReal_HeaderFile
#include <TColStd_Array1OfReal.hxx>
#endif
#ifndef _math_FunctionWithDerivative_HeaderFile
#include <math_FunctionWithDerivative.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TColStd_Array1OfReal;



class CSLib_NormalPolyDef  : public math_FunctionWithDerivative {
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

  
  Standard_EXPORT   CSLib_NormalPolyDef(const Standard_Integer k0,const TColStd_Array1OfReal& li);
  //! computes the value <F>of the function for the variable <X>. <br>
//!          Returns True if the calculation were successfully done, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Value(const Standard_Real X,Standard_Real& F) ;
  //! computes the derivative <D> of the function <br>
//!          for the variable <X>. <br>
//!           Returns True if the calculation were successfully done, <br>
//!           False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Derivative(const Standard_Real X,Standard_Real& D) ;
  //! computes the value <F> and the derivative <D> of the <br>
//!          function for the variable <X>. <br>
//!          Returns True if the calculation were successfully done, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Values(const Standard_Real X,Standard_Real& F,Standard_Real& D) ;





protected:





private:



Standard_Integer myK0;
TColStd_Array1OfReal myTABli;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
