// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_LabelIntegerMap_HeaderFile
#define _TDF_LabelIntegerMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TDF_DataMapNodeOfLabelIntegerMap_HeaderFile
#include <Handle_TDF_DataMapNodeOfLabelIntegerMap.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TDF_Label;
class TDF_LabelMapHasher;
class TDF_DataMapNodeOfLabelIntegerMap;
class TDF_DataMapIteratorOfLabelIntegerMap;



class TDF_LabelIntegerMap  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   TDF_LabelIntegerMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TDF_LabelIntegerMap& Assign(const TDF_LabelIntegerMap& Other) ;
    TDF_LabelIntegerMap& operator =(const TDF_LabelIntegerMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TDF_LabelIntegerMap()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TDF_Label& K,const Standard_Integer& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TDF_Label& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TDF_Label& K) ;
  
  Standard_EXPORT    const Standard_Integer& Find(const TDF_Label& K) const;
   const Standard_Integer& operator()(const TDF_Label& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Standard_Integer& ChangeFind(const TDF_Label& K) ;
    Standard_Integer& operator()(const TDF_Label& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   TDF_LabelIntegerMap(const TDF_LabelIntegerMap& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
