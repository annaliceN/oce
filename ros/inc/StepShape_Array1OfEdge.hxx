// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Array1OfEdge_HeaderFile
#define _StepShape_Array1OfEdge_HeaderFile

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
#ifndef _Handle_StepShape_Edge_HeaderFile
#include <Handle_StepShape_Edge.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepShape_Edge;



class StepShape_Array1OfEdge  {
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

  
  Standard_EXPORT   StepShape_Array1OfEdge(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepShape_Array1OfEdge(const Handle(StepShape_Edge)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(StepShape_Edge)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepShape_Array1OfEdge()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepShape_Array1OfEdge& Assign(const StepShape_Array1OfEdge& Other) ;
   const StepShape_Array1OfEdge& operator =(const StepShape_Array1OfEdge& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepShape_Edge)& Value) ;
  
       const Handle_StepShape_Edge& Value(const Standard_Integer Index) const;
     const Handle_StepShape_Edge& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_StepShape_Edge& ChangeValue(const Standard_Integer Index) ;
      Handle_StepShape_Edge& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepShape_Array1OfEdge(const StepShape_Array1OfEdge& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_StepShape_Edge
#define Array1Item_hxx <StepShape_Edge.hxx>
#define TCollection_Array1 StepShape_Array1OfEdge
#define TCollection_Array1_hxx <StepShape_Array1OfEdge.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
