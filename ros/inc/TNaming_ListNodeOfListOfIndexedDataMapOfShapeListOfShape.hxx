// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape_HeaderFile
#define _TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape_HeaderFile
#include <Handle_TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape.hxx>
#endif

#ifndef _TopTools_IndexedDataMapOfShapeListOfShape_HeaderFile
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopTools_IndexedDataMapOfShapeListOfShape;
class TNaming_ListOfIndexedDataMapOfShapeListOfShape;
class TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape;



class TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape : public TCollection_MapNode {

public:

  
      TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape(const TopTools_IndexedDataMapOfShapeListOfShape& I,const TCollection_MapNodePtr& n);
  
        TopTools_IndexedDataMapOfShapeListOfShape& Value() const;




  DEFINE_STANDARD_RTTI(TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape)

protected:




private: 


TopTools_IndexedDataMapOfShapeListOfShape myValue;


};

#define Item TopTools_IndexedDataMapOfShapeListOfShape
#define Item_hxx <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#define TCollection_ListNode TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape
#define TCollection_ListNode_hxx <TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape.hxx>
#define TCollection_ListIterator TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape
#define TCollection_ListIterator_hxx <TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape.hxx>
#define Handle_TCollection_ListNode Handle_TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape
#define TCollection_ListNode_Type_() TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape_Type_()
#define TCollection_List TNaming_ListOfIndexedDataMapOfShapeListOfShape
#define TCollection_List_hxx <TNaming_ListOfIndexedDataMapOfShapeListOfShape.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
