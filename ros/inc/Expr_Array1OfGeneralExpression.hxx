// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_Array1OfGeneralExpression_HeaderFile
#define _Expr_Array1OfGeneralExpression_HeaderFile

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
#ifndef _Handle_Expr_GeneralExpression_HeaderFile
#include <Handle_Expr_GeneralExpression.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Expr_GeneralExpression;



class Expr_Array1OfGeneralExpression  {
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

  
  Standard_EXPORT   Expr_Array1OfGeneralExpression(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   Expr_Array1OfGeneralExpression(const Handle(Expr_GeneralExpression)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(Expr_GeneralExpression)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~Expr_Array1OfGeneralExpression()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const Expr_Array1OfGeneralExpression& Assign(const Expr_Array1OfGeneralExpression& Other) ;
   const Expr_Array1OfGeneralExpression& operator =(const Expr_Array1OfGeneralExpression& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(Expr_GeneralExpression)& Value) ;
  
       const Handle_Expr_GeneralExpression& Value(const Standard_Integer Index) const;
     const Handle_Expr_GeneralExpression& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_Expr_GeneralExpression& ChangeValue(const Standard_Integer Index) ;
      Handle_Expr_GeneralExpression& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   Expr_Array1OfGeneralExpression(const Expr_Array1OfGeneralExpression& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_Expr_GeneralExpression
#define Array1Item_hxx <Expr_GeneralExpression.hxx>
#define TCollection_Array1 Expr_Array1OfGeneralExpression
#define TCollection_Array1_hxx <Expr_Array1OfGeneralExpression.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
