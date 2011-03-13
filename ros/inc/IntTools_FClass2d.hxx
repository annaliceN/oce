// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_FClass2d_HeaderFile
#define _IntTools_FClass2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepTopAdaptor_SeqOfPtr_HeaderFile
#include <BRepTopAdaptor_SeqOfPtr.hxx>
#endif
#ifndef _TColStd_SequenceOfInteger_HeaderFile
#include <TColStd_SequenceOfInteger.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
class TopoDS_Face;
class gp_Pnt2d;


//! Class provides an algorithm to classify a 2d Point <br>
//!         in 2d space of face using boundaries of the face. <br>
class IntTools_FClass2d  {
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

  
//! Empty constructor <br>
  Standard_EXPORT   IntTools_FClass2d();
  
//! Initializes algorithm by the face F <br>
//! and tolerance Tol <br>
  Standard_EXPORT   IntTools_FClass2d(const TopoDS_Face& F,const Standard_Real Tol);
  
//! Initializes algorithm by the face F <br>
//! and tolerance Tol <br>
  Standard_EXPORT     void Init(const TopoDS_Face& F,const Standard_Real Tol) ;
  
//! Returns state of infinite 2d point relatively to (0, 0) <br>
  Standard_EXPORT     TopAbs_State PerformInfinitePoint() const;
  
//! Returns state of the 2d point Puv. <br>
//! If RecadreOnPeriodic is true (defalut value), <br>
//! for the periodic surface 2d point, adjusted to period, is <br>
//! classified. <br>
  Standard_EXPORT     TopAbs_State Perform(const gp_Pnt2d& Puv,const Standard_Boolean RecadreOnPeriodic = Standard_True) const;
  
//! Destructor <br>
  Standard_EXPORT     void Destroy() ;
~IntTools_FClass2d()
{
  Destroy();
}
  
//! Test a point with +- an offset (Tol) and returns <br>
//! On if some points are OUT an some are IN <br>
//!  (Caution: Internal use . see the code for more details) <br>
  Standard_EXPORT     TopAbs_State TestOnRestriction(const gp_Pnt2d& Puv,const Standard_Real Tol,const Standard_Boolean RecadreOnPeriodic = Standard_True) const;
  
  Standard_EXPORT     Standard_Boolean IsHole() const;





protected:





private:



BRepTopAdaptor_SeqOfPtr TabClass;
TColStd_SequenceOfInteger TabOrien;
Standard_Real Toluv;
TopoDS_Face Face;
Standard_Real U1;
Standard_Real V1;
Standard_Real U2;
Standard_Real V2;
Standard_Real Umin;
Standard_Real Umax;
Standard_Real Vmin;
Standard_Real Vmax;
Standard_Boolean myIsHole;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
