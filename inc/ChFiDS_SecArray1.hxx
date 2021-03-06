// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_SecArray1_HeaderFile
#define _ChFiDS_SecArray1_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class ChFiDS_CircSection;



class ChFiDS_SecArray1 
{
public:

  DEFINE_STANDARD_ALLOC

  
    ChFiDS_SecArray1(const Standard_Integer Low, const Standard_Integer Up);
  
    ChFiDS_SecArray1(const ChFiDS_CircSection& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const ChFiDS_CircSection& V) ;
  
      void Destroy() ;
~ChFiDS_SecArray1()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  ChFiDS_SecArray1& Assign (const ChFiDS_SecArray1& Other) ;
 const  ChFiDS_SecArray1& operator = (const ChFiDS_SecArray1& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const ChFiDS_CircSection& Value) ;
  
     const  ChFiDS_CircSection& Value (const Standard_Integer Index)  const;
   const  ChFiDS_CircSection& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      ChFiDS_CircSection& ChangeValue (const Standard_Integer Index) ;
    ChFiDS_CircSection& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT ChFiDS_SecArray1(const ChFiDS_SecArray1& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item ChFiDS_CircSection
#define Array1Item_hxx <ChFiDS_CircSection.hxx>
#define TCollection_Array1 ChFiDS_SecArray1
#define TCollection_Array1_hxx <ChFiDS_SecArray1.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _ChFiDS_SecArray1_HeaderFile
