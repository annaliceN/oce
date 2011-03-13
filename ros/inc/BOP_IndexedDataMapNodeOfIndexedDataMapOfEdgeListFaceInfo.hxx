// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo_HeaderFile
#define _BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo_HeaderFile
#include <Handle_BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BOP_ListOfFaceInfo_HeaderFile
#include <BOP_ListOfFaceInfo.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
class TopoDS_Shape;
class BOP_ListOfFaceInfo;
class TopTools_ShapeMapHasher;
class BOP_IndexedDataMapOfEdgeListFaceInfo;



class BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo : public TCollection_MapNode {

public:

  
      BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo(const TopoDS_Shape& K1,const Standard_Integer K2,const BOP_ListOfFaceInfo& I,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        TopoDS_Shape& Key1() const;
  
        Standard_Integer& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;
  
        BOP_ListOfFaceInfo& Value() const;




  DEFINE_STANDARD_RTTI(BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo)

protected:




private: 


TopoDS_Shape myKey1;
Standard_Integer myKey2;
BOP_ListOfFaceInfo myValue;
TCollection_MapNodePtr myNext2;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem BOP_ListOfFaceInfo
#define TheItem_hxx <BOP_ListOfFaceInfo.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_IndexedDataMapNode BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo
#define TCollection_IndexedDataMapNode_hxx <BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo
#define TCollection_IndexedDataMapNode_Type_() BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo_Type_()
#define TCollection_IndexedDataMap BOP_IndexedDataMapOfEdgeListFaceInfo
#define TCollection_IndexedDataMap_hxx <BOP_IndexedDataMapOfEdgeListFaceInfo.hxx>

#include <TCollection_IndexedDataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_hxx
#undef Handle_TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_Type_
#undef TCollection_IndexedDataMap
#undef TCollection_IndexedDataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
