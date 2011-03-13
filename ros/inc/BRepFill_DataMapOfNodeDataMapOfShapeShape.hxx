// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_DataMapOfNodeDataMapOfShapeShape_HeaderFile
#define _BRepFill_DataMapOfNodeDataMapOfShapeShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_MAT_Node_HeaderFile
#include <Handle_MAT_Node.hxx>
#endif
#ifndef _Handle_BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape_HeaderFile
#include <Handle_BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class MAT_Node;
class TopTools_DataMapOfShapeShape;
class TColStd_MapTransientHasher;
class BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape;
class BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape;



class BRepFill_DataMapOfNodeDataMapOfShapeShape  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   BRepFill_DataMapOfNodeDataMapOfShapeShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     BRepFill_DataMapOfNodeDataMapOfShapeShape& Assign(const BRepFill_DataMapOfNodeDataMapOfShapeShape& Other) ;
    BRepFill_DataMapOfNodeDataMapOfShapeShape& operator =(const BRepFill_DataMapOfNodeDataMapOfShapeShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~BRepFill_DataMapOfNodeDataMapOfShapeShape()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Handle(MAT_Node)& K,const TopTools_DataMapOfShapeShape& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Handle(MAT_Node)& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Handle(MAT_Node)& K) ;
  
  Standard_EXPORT    const TopTools_DataMapOfShapeShape& Find(const Handle(MAT_Node)& K) const;
   const TopTools_DataMapOfShapeShape& operator()(const Handle(MAT_Node)& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     TopTools_DataMapOfShapeShape& ChangeFind(const Handle(MAT_Node)& K) ;
    TopTools_DataMapOfShapeShape& operator()(const Handle(MAT_Node)& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   BRepFill_DataMapOfNodeDataMapOfShapeShape(const BRepFill_DataMapOfNodeDataMapOfShapeShape& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
