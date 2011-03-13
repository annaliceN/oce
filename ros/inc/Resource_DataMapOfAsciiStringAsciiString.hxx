// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Resource_DataMapOfAsciiStringAsciiString_HeaderFile
#define _Resource_DataMapOfAsciiStringAsciiString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString_HeaderFile
#include <Handle_Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_AsciiString;
class Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString;
class Resource_DataMapIteratorOfDataMapOfAsciiStringAsciiString;



class Resource_DataMapOfAsciiStringAsciiString  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   Resource_DataMapOfAsciiStringAsciiString(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     Resource_DataMapOfAsciiStringAsciiString& Assign(const Resource_DataMapOfAsciiStringAsciiString& Other) ;
    Resource_DataMapOfAsciiStringAsciiString& operator =(const Resource_DataMapOfAsciiStringAsciiString& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~Resource_DataMapOfAsciiStringAsciiString()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TCollection_AsciiString& K,const TCollection_AsciiString& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TCollection_AsciiString& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TCollection_AsciiString& K) ;
  
  Standard_EXPORT    const TCollection_AsciiString& Find(const TCollection_AsciiString& K) const;
   const TCollection_AsciiString& operator()(const TCollection_AsciiString& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     TCollection_AsciiString& ChangeFind(const TCollection_AsciiString& K) ;
    TCollection_AsciiString& operator()(const TCollection_AsciiString& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   Resource_DataMapOfAsciiStringAsciiString(const Resource_DataMapOfAsciiStringAsciiString& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
