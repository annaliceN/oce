// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapOfIntegerVec2d_HeaderFile
#define _MAT2d_DataMapOfIntegerVec2d_HeaderFile

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
#ifndef _Handle_MAT2d_DataMapNodeOfDataMapOfIntegerVec2d_HeaderFile
#include <Handle_MAT2d_DataMapNodeOfDataMapOfIntegerVec2d.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class gp_Vec2d;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapNodeOfDataMapOfIntegerVec2d;
class MAT2d_DataMapIteratorOfDataMapOfIntegerVec2d;



class MAT2d_DataMapOfIntegerVec2d  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   MAT2d_DataMapOfIntegerVec2d(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     MAT2d_DataMapOfIntegerVec2d& Assign(const MAT2d_DataMapOfIntegerVec2d& Other) ;
    MAT2d_DataMapOfIntegerVec2d& operator =(const MAT2d_DataMapOfIntegerVec2d& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~MAT2d_DataMapOfIntegerVec2d()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const gp_Vec2d& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const gp_Vec2d& Find(const Standard_Integer& K) const;
   const gp_Vec2d& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     gp_Vec2d& ChangeFind(const Standard_Integer& K) ;
    gp_Vec2d& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   MAT2d_DataMapOfIntegerVec2d(const MAT2d_DataMapOfIntegerVec2d& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
