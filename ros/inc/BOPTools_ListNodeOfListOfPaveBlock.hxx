// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_ListNodeOfListOfPaveBlock_HeaderFile
#define _BOPTools_ListNodeOfListOfPaveBlock_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOPTools_ListNodeOfListOfPaveBlock_HeaderFile
#include <Handle_BOPTools_ListNodeOfListOfPaveBlock.hxx>
#endif

#ifndef _BOPTools_PaveBlock_HeaderFile
#include <BOPTools_PaveBlock.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class BOPTools_PaveBlock;
class BOPTools_ListOfPaveBlock;
class BOPTools_ListIteratorOfListOfPaveBlock;



class BOPTools_ListNodeOfListOfPaveBlock : public TCollection_MapNode {

public:

  
      BOPTools_ListNodeOfListOfPaveBlock(const BOPTools_PaveBlock& I,const TCollection_MapNodePtr& n);
  
        BOPTools_PaveBlock& Value() const;




  DEFINE_STANDARD_RTTI(BOPTools_ListNodeOfListOfPaveBlock)

protected:




private: 


BOPTools_PaveBlock myValue;


};

#define Item BOPTools_PaveBlock
#define Item_hxx <BOPTools_PaveBlock.hxx>
#define TCollection_ListNode BOPTools_ListNodeOfListOfPaveBlock
#define TCollection_ListNode_hxx <BOPTools_ListNodeOfListOfPaveBlock.hxx>
#define TCollection_ListIterator BOPTools_ListIteratorOfListOfPaveBlock
#define TCollection_ListIterator_hxx <BOPTools_ListIteratorOfListOfPaveBlock.hxx>
#define Handle_TCollection_ListNode Handle_BOPTools_ListNodeOfListOfPaveBlock
#define TCollection_ListNode_Type_() BOPTools_ListNodeOfListOfPaveBlock_Type_()
#define TCollection_List BOPTools_ListOfPaveBlock
#define TCollection_List_hxx <BOPTools_ListOfPaveBlock.hxx>

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
