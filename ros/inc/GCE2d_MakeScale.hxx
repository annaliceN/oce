// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCE2d_MakeScale_HeaderFile
#define _GCE2d_MakeScale_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom2d_Transformation_HeaderFile
#include <Handle_Geom2d_Transformation.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom2d_Transformation;
class gp_Pnt2d;


//! This class implements an elementary construction algorithm for <br>
//! a scaling transformation in 2D space. The result is a <br>
//! Geom2d_Transformation transformation. <br>
//! A MakeScale object provides a framework for: <br>
//! -   defining the construction of the transformation, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
class GCE2d_MakeScale  {
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

  //! Constructs a scaling transformation with <br>
//! -   Point as the center of the transformation, and <br>
//! -   Scale as the scale factor. <br>
  Standard_EXPORT   GCE2d_MakeScale(const gp_Pnt2d& Point,const Standard_Real Scale);
  //! Returns the constructed transformation. <br>
  Standard_EXPORT    const Handle_Geom2d_Transformation& Value() const;
  
  Standard_EXPORT    const Handle_Geom2d_Transformation& Operator() const;
Standard_EXPORT operator Handle_Geom2d_Transformation() const;





protected:





private:



Handle_Geom2d_Transformation TheScale;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
