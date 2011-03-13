// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS2D_DataMapOfLocStat_HeaderFile
#define _AIS2D_DataMapOfLocStat_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_AIS2D_InteractiveObject_HeaderFile
#include <Handle_AIS2D_InteractiveObject.hxx>
#endif
#ifndef _Handle_AIS2D_LocalStatus_HeaderFile
#include <Handle_AIS2D_LocalStatus.hxx>
#endif
#ifndef _Handle_AIS2D_DataMapNodeOfDataMapOfLocStat_HeaderFile
#include <Handle_AIS2D_DataMapNodeOfDataMapOfLocStat.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class AIS2D_InteractiveObject;
class AIS2D_LocalStatus;
class TColStd_MapTransientHasher;
class AIS2D_DataMapNodeOfDataMapOfLocStat;
class AIS2D_DataMapIteratorOfDataMapOfLocStat;



class AIS2D_DataMapOfLocStat  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   AIS2D_DataMapOfLocStat(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     AIS2D_DataMapOfLocStat& Assign(const AIS2D_DataMapOfLocStat& Other) ;
    AIS2D_DataMapOfLocStat& operator =(const AIS2D_DataMapOfLocStat& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~AIS2D_DataMapOfLocStat()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Handle(AIS2D_InteractiveObject)& K,const Handle(AIS2D_LocalStatus)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Handle(AIS2D_InteractiveObject)& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Handle(AIS2D_InteractiveObject)& K) ;
  
  Standard_EXPORT    const Handle_AIS2D_LocalStatus& Find(const Handle(AIS2D_InteractiveObject)& K) const;
   const Handle_AIS2D_LocalStatus& operator()(const Handle(AIS2D_InteractiveObject)& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_AIS2D_LocalStatus& ChangeFind(const Handle(AIS2D_InteractiveObject)& K) ;
    Handle_AIS2D_LocalStatus& operator()(const Handle(AIS2D_InteractiveObject)& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   AIS2D_DataMapOfLocStat(const AIS2D_DataMapOfLocStat& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
