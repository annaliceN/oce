// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_InteriorPointTool_HeaderFile
#define _IntSurf_InteriorPointTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _gp_Dir2d_HeaderFile
#include <gp_Dir2d.hxx>
#endif
class IntSurf_InteriorPoint;


//! This class provides a tool on the "interior point" <br>
//!          that can be used to instantiates the Walking <br>
//!          algorithmes (see package IntWalk). <br>
class IntSurf_InteriorPointTool  {
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

  //! Returns the 3d coordinates of the starting point. <br>
      static  gp_Pnt Value3d(const IntSurf_InteriorPoint& PStart) ;
  //! Returns the <U,V> parameters which are associated <br>
//!          with <P> <br>
//!          it's the parameters which start the marching algorithm <br>
      static  void Value2d(const IntSurf_InteriorPoint& PStart,Standard_Real& U,Standard_Real& V) ;
  //! returns the tangent at the intersectin in 3d space <br>
//!          associated to <P> <br>
      static  gp_Vec Direction3d(const IntSurf_InteriorPoint& PStart) ;
  //! returns the tangent at the intersectin in the <br>
//!          parametric space of the parametrized surface.This tangent <br>
//!          is associated to the value2d <br>
      static  gp_Dir2d Direction2d(const IntSurf_InteriorPoint& PStart) ;





protected:





private:





};


#include <IntSurf_InteriorPointTool.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
