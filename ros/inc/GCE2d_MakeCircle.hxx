// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCE2d_MakeCircle_HeaderFile
#define _GCE2d_MakeCircle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom2d_Circle_HeaderFile
#include <Handle_Geom2d_Circle.hxx>
#endif
#ifndef _GCE2d_Root_HeaderFile
#include <GCE2d_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom2d_Circle;
class StdFail_NotDone;
class gp_Circ2d;
class gp_Ax2d;
class gp_Ax22d;
class gp_Pnt2d;


//! This class implements the following algorithms used <br>
//!           to create Cirlec from Geom2d. <br>
//! <br>
//!           * Create a Circle parallel to another and passing <br>
//!             though a point. <br>
//!           * Create a Circle parallel to another at the distance <br>
//!             Dist. <br>
//!           * Create a Circle passing through 3 points. <br>
//!           * Create a Circle with its center and the normal of its <br>
//!             plane and its radius. <br>
//!           * Create a Circle with its axis and radius. <br>
class GCE2d_MakeCircle  : public GCE2d_Root {
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

  //!  creates a circle from a non persistent one. <br>
  Standard_EXPORT   GCE2d_MakeCircle(const gp_Circ2d& C);
  
//!  A is the "XAxis" of the circle which defines the origin <br>
//!  of parametrization. <br>
//!  It is not forbidden to create a circle with Radius = 0.0 <br>
//!  The status is "NegativeRadius" if Radius < 0. <br>
  Standard_EXPORT   GCE2d_MakeCircle(const gp_Ax2d& A,const Standard_Real Radius,const Standard_Boolean Sense = Standard_True);
  
//!  A is the local coordinate system of the circle which defines <br>
//!  the origin of parametrization. <br>
//!  It is not forbidden to create a circle with Radius = 0.0 <br>
//!  The status is "NegativeRadius" if Radius < 0. <br>
  Standard_EXPORT   GCE2d_MakeCircle(const gp_Ax22d& A,const Standard_Real Radius);
  //! Make a Circle from Geom2d <TheCirc> parallel to another <br>
//!           Circ <Circ> with a distance <Dist>. <br>
//!           If Dist is greater than zero the result is enclosing <br>
//!           the circle <Circ>, else the result is enclosed by the <br>
//!           circle <Circ>. <br>
  Standard_EXPORT   GCE2d_MakeCircle(const gp_Circ2d& Circ,const Standard_Real Dist);
  //! Make a Circle from Geom2d <TheCirc> parallel to another <br>
//!           Circ <Circ> and passing through a Pnt <Point>. <br>
  Standard_EXPORT   GCE2d_MakeCircle(const gp_Circ2d& Circ,const gp_Pnt2d& Point);
  //! Make a Circ from gp <TheCirc> passing through 3 <br>
//!           Pnt2d <P1>,<P2>,<P3>. <br>
  Standard_EXPORT   GCE2d_MakeCircle(const gp_Pnt2d& P1,const gp_Pnt2d& P2,const gp_Pnt2d& P3);
  //! Make a Circ from geom2d <TheCirc> by its center an radius. <br>
  Standard_EXPORT   GCE2d_MakeCircle(const gp_Pnt2d& P,const Standard_Real Radius,const Standard_Boolean Sense = Standard_True);
  //! Makes a Circle from geom2d <TheCirc> with its center <br>
//!           <Center> and a point giving the radius. <br>
//!           If Sense is true the local coordinate system of <br>
//!           the solution is direct and non direct in the other case. <br>
//! Warning <br>
//! The MakeCircle class does not prevent the <br>
//! construction of a circle with a null radius. <br>
//! If an error occurs (that is, when IsDone returns <br>
//! false), the Status function returns: <br>
//! -   gce_NegativeRadius if Radius is less than 0.0, or <br>
//! -   gce_IntersectionError if points P1, P2 and P3 <br>
//!   are collinear and the three are not coincident. <br>
  Standard_EXPORT   GCE2d_MakeCircle(const gp_Pnt2d& Center,const gp_Pnt2d& Point,const Standard_Boolean Sense = Standard_True);
  //! Returns the constructed circle. <br>
//! Exceptions StdFail_NotDone if no circle is constructed. <br>
  Standard_EXPORT    const Handle_Geom2d_Circle& Value() const;
  
  Standard_EXPORT    const Handle_Geom2d_Circle& Operator() const;
Standard_EXPORT operator Handle_Geom2d_Circle() const;





protected:





private:



Handle_Geom2d_Circle TheCircle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
