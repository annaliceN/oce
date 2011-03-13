// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_QuadricTool_HeaderFile
#define _IntSurf_QuadricTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class IntSurf_Quadric;
class gp_Vec;


//! This class provides a tool on a quadric that can be <br>
//!          used to instantiates the Walking algorithmes (see <br>
//!          package IntWalk) with a Quadric from IntSurf <br>
//!          as implicit surface. <br>
class IntSurf_QuadricTool  {
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

  //! Returns the value of the function. <br>
      static  Standard_Real Value(const IntSurf_Quadric& Quad,const Standard_Real X,const Standard_Real Y,const Standard_Real Z) ;
  //! Returns the gradient of the function. <br>
      static  void Gradient(const IntSurf_Quadric& Quad,const Standard_Real X,const Standard_Real Y,const Standard_Real Z,gp_Vec& V) ;
  //! Returns the value and the gradient. <br>
      static  void ValueAndGradient(const IntSurf_Quadric& Quad,const Standard_Real X,const Standard_Real Y,const Standard_Real Z,Standard_Real& Val,gp_Vec& Grad) ;
  //! returns the tolerance of the zero of the implicit function <br>
  Standard_EXPORT   static  Standard_Real Tolerance(const IntSurf_Quadric& Quad) ;





protected:





private:





};


#include <IntSurf_QuadricTool.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
