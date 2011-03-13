// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WNT_ColorTable_HeaderFile
#define _WNT_ColorTable_HeaderFile

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
#ifndef _WNT_ColorRef_HeaderFile
#include <WNT_ColorRef.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;



class WNT_ColorTable  {
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

  
  Standard_EXPORT   WNT_ColorTable(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   WNT_ColorTable(const WNT_ColorRef& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const WNT_ColorRef& V) ;
  
  Standard_EXPORT     void Destroy() ;
~WNT_ColorTable()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const WNT_ColorTable& Assign(const WNT_ColorTable& Other) ;
   const WNT_ColorTable& operator =(const WNT_ColorTable& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const WNT_ColorRef& Value) ;
  
       const WNT_ColorRef& Value(const Standard_Integer Index) const;
     const WNT_ColorRef& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        WNT_ColorRef& ChangeValue(const Standard_Integer Index) ;
      WNT_ColorRef& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   WNT_ColorTable(const WNT_ColorTable& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item WNT_ColorRef
#define Array1Item_hxx <WNT_ColorRef.hxx>
#define TCollection_Array1 WNT_ColorTable
#define TCollection_Array1_hxx <WNT_ColorTable.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
