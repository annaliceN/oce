// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PPoly_FieldOfHArray1OfTriangle_HeaderFile
#define _PPoly_FieldOfHArray1OfTriangle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _DBC_BaseArray_HeaderFile
#include <DBC_BaseArray.hxx>
#endif
#ifndef _Handle_PPoly_VArrayNodeOfFieldOfHArray1OfTriangle_HeaderFile
#include <Handle_PPoly_VArrayNodeOfFieldOfHArray1OfTriangle.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PPoly_Triangle;
class PPoly_VArrayNodeOfFieldOfHArray1OfTriangle;
class PPoly_VArrayTNodeOfFieldOfHArray1OfTriangle;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PPoly_FieldOfHArray1OfTriangle);


class PPoly_FieldOfHArray1OfTriangle  : public DBC_BaseArray {

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

  
  Standard_EXPORT   PPoly_FieldOfHArray1OfTriangle();
  
  Standard_EXPORT   PPoly_FieldOfHArray1OfTriangle(const Standard_Integer Size);
  
  Standard_EXPORT   PPoly_FieldOfHArray1OfTriangle(const PPoly_FieldOfHArray1OfTriangle& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const PPoly_FieldOfHArray1OfTriangle& Other) ;
    void operator =(const PPoly_FieldOfHArray1OfTriangle& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const PPoly_Triangle& Value) ;
  
  Standard_EXPORT     PPoly_Triangle& Value(const Standard_Integer Index) const;
    PPoly_Triangle& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~PPoly_FieldOfHArray1OfTriangle()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};





// other Inline functions and methods (like "C++: function call" methods)


#endif
