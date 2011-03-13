// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LProp_CurAndInf_HeaderFile
#define _LProp_CurAndInf_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TColStd_SequenceOfReal_HeaderFile
#include <TColStd_SequenceOfReal.hxx>
#endif
#ifndef _LProp_SequenceOfCIType_HeaderFile
#include <LProp_SequenceOfCIType.hxx>
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
#ifndef _LProp_CIType_HeaderFile
#include <LProp_CIType.hxx>
#endif
class Standard_OutOfRange;


//! Stores the parameters of a curve 2d or 3d corresponding <br>
//!          to the curvature's extremas and the Inflection's Points. <br>
class LProp_CurAndInf  {
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

  
  Standard_EXPORT   LProp_CurAndInf();
  
  Standard_EXPORT     void AddInflection(const Standard_Real Param) ;
  
  Standard_EXPORT     void AddExtCur(const Standard_Real Param,const Standard_Boolean IsMin) ;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  //! Returns the number of points. <br>
//!          The Points are stored to increasing parameter. <br>
  Standard_EXPORT     Standard_Integer NbPoints() const;
  //! Returns the parameter of the Nth point. <br>//! raises if N not in the range [1,NbPoints()] <br>
  Standard_EXPORT     Standard_Real Parameter(const Standard_Integer N) const;
  //! Returns <br>
//!          - MinCur if the Nth parameter corresponds to <br>
//!          a minimum of the radius of curvature. <br>
//!          - MaxCur if the Nth parameter corresponds to <br>
//!          a maximum of the radius of curvature. <br>
//!          - Inflection if the parameter corresponds to <br>
//!          a point of inflection. <br>//! raises if N not in the range [1,NbPoints()] <br>
  Standard_EXPORT     LProp_CIType Type(const Standard_Integer N) const;





protected:





private:



TColStd_SequenceOfReal theParams;
LProp_SequenceOfCIType theTypes;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
