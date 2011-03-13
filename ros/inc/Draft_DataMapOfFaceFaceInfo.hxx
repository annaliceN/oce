// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draft_DataMapOfFaceFaceInfo_HeaderFile
#define _Draft_DataMapOfFaceFaceInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_Draft_DataMapNodeOfDataMapOfFaceFaceInfo_HeaderFile
#include <Handle_Draft_DataMapNodeOfDataMapOfFaceFaceInfo.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Face;
class Draft_FaceInfo;
class TopTools_ShapeMapHasher;
class Draft_DataMapNodeOfDataMapOfFaceFaceInfo;
class Draft_DataMapIteratorOfDataMapOfFaceFaceInfo;



class Draft_DataMapOfFaceFaceInfo  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   Draft_DataMapOfFaceFaceInfo(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     Draft_DataMapOfFaceFaceInfo& Assign(const Draft_DataMapOfFaceFaceInfo& Other) ;
    Draft_DataMapOfFaceFaceInfo& operator =(const Draft_DataMapOfFaceFaceInfo& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~Draft_DataMapOfFaceFaceInfo()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TopoDS_Face& K,const Draft_FaceInfo& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TopoDS_Face& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TopoDS_Face& K) ;
  
  Standard_EXPORT    const Draft_FaceInfo& Find(const TopoDS_Face& K) const;
   const Draft_FaceInfo& operator()(const TopoDS_Face& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Draft_FaceInfo& ChangeFind(const TopoDS_Face& K) ;
    Draft_FaceInfo& operator()(const TopoDS_Face& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   Draft_DataMapOfFaceFaceInfo(const Draft_DataMapOfFaceFaceInfo& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
