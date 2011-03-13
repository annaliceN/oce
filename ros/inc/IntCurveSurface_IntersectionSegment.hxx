// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_IntersectionSegment_HeaderFile
#define _IntCurveSurface_IntersectionSegment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _IntCurveSurface_IntersectionPoint_HeaderFile
#include <IntCurveSurface_IntersectionPoint.hxx>
#endif
class IntCurveSurface_IntersectionPoint;


//! A IntersectionSegment describes a segment of curve <br>
//!          (w1,w2) where distance(C(w),Surface) is less than a <br>
//!          given tolerances. <br>
class IntCurveSurface_IntersectionSegment  {
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

  
  Standard_EXPORT   IntCurveSurface_IntersectionSegment();
  
  Standard_EXPORT   IntCurveSurface_IntersectionSegment(const IntCurveSurface_IntersectionPoint& P1,const IntCurveSurface_IntersectionPoint& P2);
  
  Standard_EXPORT     void SetValues(const IntCurveSurface_IntersectionPoint& P1,const IntCurveSurface_IntersectionPoint& P2) ;
  
  Standard_EXPORT     void Values(IntCurveSurface_IntersectionPoint& P1,IntCurveSurface_IntersectionPoint& P2) const;
  
  Standard_EXPORT     void FirstPoint(IntCurveSurface_IntersectionPoint& P1) const;
  
  Standard_EXPORT     void SecondPoint(IntCurveSurface_IntersectionPoint& P2) const;
  
  Standard_EXPORT    const IntCurveSurface_IntersectionPoint& FirstPoint() const;
  
  Standard_EXPORT    const IntCurveSurface_IntersectionPoint& SecondPoint() const;
  
  Standard_EXPORT     void Dump() const;





protected:





private:



IntCurveSurface_IntersectionPoint myP1;
IntCurveSurface_IntersectionPoint myP2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
