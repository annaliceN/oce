// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dAPI_InterCurveCurve_HeaderFile
#define _Geom2dAPI_InterCurveCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Geom2dInt_GInter_HeaderFile
#include <Geom2dInt_GInter.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Geom2d_Curve;
class Standard_OutOfRange;
class Standard_NullObject;
class gp_Pnt2d;
class Geom2dInt_GInter;


//! This class implements methods for computing <br>
//! -       the intersections between  two 2D curves, <br>
//! -       the self-intersections of a  2D curve. <br>
//! Using the InterCurveCurve algorithm allows to get the following results: <br>
//! -      intersection points in the  case of cross intersections, <br>
//! -      intersection segments in the case of tangential intersections, <br>
//! -       nothing in the case of no intersections. <br>
class Geom2dAPI_InterCurveCurve  {
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

  //! Create an empty intersector. Use the <br>
//! function Init for further initialization of the intersection <br>
//! algorithm by curves or curve. <br>
  Standard_EXPORT   Geom2dAPI_InterCurveCurve();
  //! Creates an object and computes the <br>
//! intersections between the curves C1 and C2. <br>
  Standard_EXPORT   Geom2dAPI_InterCurveCurve(const Handle(Geom2d_Curve)& C1,const Handle(Geom2d_Curve)& C2,const Standard_Real Tol = 1.0e-6);
  
//! Creates an object and computes self-intersections of the curve C1. <br>
//!   Tolerance value Tol, defaulted to 1.0e-6, defines the precision of <br>
//! computing the intersection points. <br>
//! In case of a tangential intersection, Tol also defines the <br>
//! size of intersection segments (limited portions of the curves) <br>
//! where the distance between all points from two curves (or a curve <br>
//! in case of self-intersection) is less than Tol. <br>
//! Warning <br>
//! Use functions NbPoints and NbSegments to obtain the number of <br>
//! solutions. If the algorithm finds no intersections NbPoints and <br>
//! NbSegments return 0. <br>
  Standard_EXPORT   Geom2dAPI_InterCurveCurve(const Handle(Geom2d_Curve)& C1,const Standard_Real Tol = 1.0e-6);
  //! Initializes an algorithm with the <br>
//! given arguments and computes the intersections between the curves C1. and C2. <br>
  Standard_EXPORT     void Init(const Handle(Geom2d_Curve)& C1,const Handle(Geom2d_Curve)& C2,const Standard_Real Tol = 1.0e-6) ;
  //! Initializes an algorithm with the <br>
//! given arguments and computes the self-intersections of the curve C1. <br>
//! Tolerance value Tol, defaulted to 1.0e-6, defines the precision of <br>
//! computing the intersection points. In case of a tangential <br>
//! intersection, Tol also defines the size of intersection segments <br>
//! (limited portions of the curves) where the distance between all <br>
//! points from two curves (or a curve in case of self-intersection) is less than Tol. <br>
//! Warning <br>
//! Use functions NbPoints and NbSegments to obtain the number <br>
//! of solutions. If the algorithm finds no intersections NbPoints <br>
//! and NbSegments return 0. <br>
  Standard_EXPORT     void Init(const Handle(Geom2d_Curve)& C1,const Standard_Real Tol = 1.0e-6) ;
  //! Returns the number of intersection-points in case of cross intersections. <br>
//!        NbPoints returns 0 if no intersections were found. <br>
  Standard_EXPORT     Standard_Integer NbPoints() const;
  //! Returns the intersection point of index Index. <br>
//! Intersection points are computed in case of cross intersections with a <br>
//! precision equal to the tolerance value assigned at the time of <br>
//! construction or in the function Init (this value is defaulted to 1.0e-6). <br>
//! Exceptions <br>
//! Standard_OutOfRange if index is not in the range [ 1,NbPoints ], where <br>
//! NbPoints is the number of computed intersection points <br>
  Standard_EXPORT     gp_Pnt2d Point(const Standard_Integer Index) const;
  //! Returns the number of tangential intersections. <br>
//! NbSegments returns 0 if no intersections were found <br>
  Standard_EXPORT     Standard_Integer NbSegments() const;
  //!  Use this syntax only to get <br>
//! solutions of tangential intersection between two curves. <br>
//! Output values Curve1 and Curve2 are the intersection segments on the <br>
//! first curve and on the second curve accordingly. Parameter Index <br>
//! defines a number of computed solution. <br>
//! An intersection segment is a portion of an initial curve limited <br>
//! by two points. The distance from each point of this segment to the <br>
//! other curve is less or equal to the tolerance value assigned at the <br>
//! time of construction or in function Init (this value is defaulted to 1.0e-6). <br>
//!   Exceptions <br>
//! Standard_OutOfRange if Index is not in the range [ 1,NbSegments ], <br>
//! where NbSegments is the number of computed tangential intersections. <br>
//! Standard_NullObject if the algorithm is initialized for the <br>
//! computing of self-intersections on a curve. <br>
  Standard_EXPORT     void Segment(const Standard_Integer Index,Handle(Geom2d_Curve)& Curve1,Handle(Geom2d_Curve)& Curve2) const;
  //! Use this syntax to get solutions of <br>
//! tangential intersections only in case of a self-intersected curve. <br>
//! Output value Curve1 is the intersection segment of the curve <br>
//! defined by number Index. An intersection segment is a <br>
//! portion of the initial curve limited by two points. The distance <br>
//! between each point of this segment to another portion of the curve is <br>
//! less or equal to the tolerance value assigned at the time of <br>
//! construction or in the function Init (this value is defaulted to 1.0e-6). <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not in the range [ 1,NbSegments ], <br>
//! where NbSegments is the number of computed tangential intersections. <br>
  Standard_EXPORT     void Segment(const Standard_Integer Index,Handle(Geom2d_Curve)& Curve1) const;
  //! return the algorithmic object from Intersection. <br>
       const Geom2dInt_GInter& Intersector() const;





protected:





private:



Standard_Boolean myIsDone;
Handle_Geom2d_Curve myCurve1;
Handle_Geom2d_Curve myCurve2;
Geom2dInt_GInter myIntersector;


};


#include <Geom2dAPI_InterCurveCurve.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
