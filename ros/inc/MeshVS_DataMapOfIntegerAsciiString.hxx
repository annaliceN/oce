// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapOfIntegerAsciiString_HeaderFile
#define _MeshVS_DataMapOfIntegerAsciiString_HeaderFile

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
#ifndef _Handle_MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString_HeaderFile
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_AsciiString;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString;
class MeshVS_DataMapIteratorOfDataMapOfIntegerAsciiString;



class MeshVS_DataMapOfIntegerAsciiString  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   MeshVS_DataMapOfIntegerAsciiString(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     MeshVS_DataMapOfIntegerAsciiString& Assign(const MeshVS_DataMapOfIntegerAsciiString& Other) ;
    MeshVS_DataMapOfIntegerAsciiString& operator =(const MeshVS_DataMapOfIntegerAsciiString& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~MeshVS_DataMapOfIntegerAsciiString()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const TCollection_AsciiString& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const TCollection_AsciiString& Find(const Standard_Integer& K) const;
   const TCollection_AsciiString& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     TCollection_AsciiString& ChangeFind(const Standard_Integer& K) ;
    TCollection_AsciiString& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   MeshVS_DataMapOfIntegerAsciiString(const MeshVS_DataMapOfIntegerAsciiString& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
