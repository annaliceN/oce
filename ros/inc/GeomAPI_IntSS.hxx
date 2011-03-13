// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomAPI_IntSS_HeaderFile
#define _GeomAPI_IntSS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _GeomInt_IntSS_HeaderFile
#include <GeomInt_IntSS.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
class StdFail_NotDone;
class Standard_OutOfRange;
class Geom_Surface;
class Geom_Curve;


//! This class implements methods for <br>
//!   computing the intersection curves   between two surfaces. <br>
//!       The result is curves from Geom.  The "domain" used for <br>
//!       a surface   is the natural  parametric domain <br>
//!       unless the surface is a  RectangularTrimmedSurface <br>
//!       from Geom. <br>
class GeomAPI_IntSS  {
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

  //! Constructs an empty object. Use the <br>
//! function Perform for further initialization algorithm by two surfaces. <br>
      GeomAPI_IntSS();
  //! Computes the intersection curves <br>
//! between the two surfaces S1 and S2. Parameter Tol defines the precision <br>
//! of curves computation. For most cases the value 1.0e-7 is recommended to use. <br>
//! Warning <br>
//! Use the function IsDone to verify that the intersections are successfully computed.I <br>
      GeomAPI_IntSS(const Handle(Geom_Surface)& S1,const Handle(Geom_Surface)& S2,const Standard_Real Tol);
  //! Initializes an algorithm with the <br>
//! given arguments and computes the intersection curves between the two surfaces S1 and S2. <br>
//! Parameter Tol defines the precision of curves computation. For most <br>
//! cases the value 1.0e-7 is recommended to use. <br>
//! Warning <br>
//! Use function IsDone to verify that the intersections are successfully computed. <br>
        void Perform(const Handle(Geom_Surface)& S1,const Handle(Geom_Surface)& S2,const Standard_Real Tol) ;
  //! Returns True if the intersection was successful. <br>
        Standard_Boolean IsDone() const;
  //! Returns the number of computed intersection curves. <br>
//! Exceptions <br>
//! StdFail_NotDone if the computation fails. <br>
        Standard_Integer NbLines() const;
  //! Returns the computed intersection curve of index Index. <br>
//! Exceptions <br>
//! StdFail_NotDone if the computation fails. <br>
//! Standard_OutOfRange if Index is out of range [1, NbLines] where NbLines <br>
//! is the number of computed intersection curves. <br>
       const Handle_Geom_Curve& Line(const Standard_Integer Index) const;





protected:





private:



GeomInt_IntSS myIntersec;


};


#include <GeomAPI_IntSS.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
