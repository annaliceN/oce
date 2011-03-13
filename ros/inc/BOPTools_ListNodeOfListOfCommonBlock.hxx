// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_ListNodeOfListOfCommonBlock_HeaderFile
#define _BOPTools_ListNodeOfListOfCommonBlock_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOPTools_ListNodeOfListOfCommonBlock_HeaderFile
#include <Handle_BOPTools_ListNodeOfListOfCommonBlock.hxx>
#endif

#ifndef _BOPTools_CommonBlock_HeaderFile
#include <BOPTools_CommonBlock.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class BOPTools_CommonBlock;
class BOPTools_ListOfCommonBlock;
class BOPTools_ListIteratorOfListOfCommonBlock;



class BOPTools_ListNodeOfListOfCommonBlock : public TCollection_MapNode {

public:

  
      BOPTools_ListNodeOfListOfCommonBlock(const BOPTools_CommonBlock& I,const TCollection_MapNodePtr& n);
  
        BOPTools_CommonBlock& Value() const;




  DEFINE_STANDARD_RTTI(BOPTools_ListNodeOfListOfCommonBlock)

protected:




private: 


BOPTools_CommonBlock myValue;


};

#define Item BOPTools_CommonBlock
#define Item_hxx <BOPTools_CommonBlock.hxx>
#define TCollection_ListNode BOPTools_ListNodeOfListOfCommonBlock
#define TCollection_ListNode_hxx <BOPTools_ListNodeOfListOfCommonBlock.hxx>
#define TCollection_ListIterator BOPTools_ListIteratorOfListOfCommonBlock
#define TCollection_ListIterator_hxx <BOPTools_ListIteratorOfListOfCommonBlock.hxx>
#define Handle_TCollection_ListNode Handle_BOPTools_ListNodeOfListOfCommonBlock
#define TCollection_ListNode_Type_() BOPTools_ListNodeOfListOfCommonBlock_Type_()
#define TCollection_List BOPTools_ListOfCommonBlock
#define TCollection_List_hxx <BOPTools_ListOfCommonBlock.hxx>

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
