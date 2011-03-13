// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_Array1OfEData_HeaderFile
#define _HLRBRep_Array1OfEData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class HLRBRep_EdgeData;



class HLRBRep_Array1OfEData  {
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

  
  Standard_EXPORT   HLRBRep_Array1OfEData(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   HLRBRep_Array1OfEData(const HLRBRep_EdgeData& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const HLRBRep_EdgeData& V) ;
  
  Standard_EXPORT     void Destroy() ;
~HLRBRep_Array1OfEData()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const HLRBRep_Array1OfEData& Assign(const HLRBRep_Array1OfEData& Other) ;
   const HLRBRep_Array1OfEData& operator =(const HLRBRep_Array1OfEData& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const HLRBRep_EdgeData& Value) ;
  
       const HLRBRep_EdgeData& Value(const Standard_Integer Index) const;
     const HLRBRep_EdgeData& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        HLRBRep_EdgeData& ChangeValue(const Standard_Integer Index) ;
      HLRBRep_EdgeData& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   HLRBRep_Array1OfEData(const HLRBRep_Array1OfEData& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item HLRBRep_EdgeData
#define Array1Item_hxx <HLRBRep_EdgeData.hxx>
#define TCollection_Array1 HLRBRep_Array1OfEData
#define TCollection_Array1_hxx <HLRBRep_Array1OfEData.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
