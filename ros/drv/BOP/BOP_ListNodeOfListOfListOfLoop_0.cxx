// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <BOP_ListNodeOfListOfListOfLoop.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _BOP_ListOfLoop_HeaderFile
#include <BOP_ListOfLoop.hxx>
#endif
#ifndef _BOP_ListOfListOfLoop_HeaderFile
#include <BOP_ListOfListOfLoop.hxx>
#endif
#ifndef _BOP_ListIteratorOfListOfListOfLoop_HeaderFile
#include <BOP_ListIteratorOfListOfListOfLoop.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(BOP_ListNodeOfListOfListOfLoop)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BOP_ListNodeOfListOfListOfLoop)


IMPLEMENT_DOWNCAST(BOP_ListNodeOfListOfListOfLoop,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BOP_ListNodeOfListOfListOfLoop)


#define Item BOP_ListOfLoop
#define Item_hxx <BOP_ListOfLoop.hxx>
#define TCollection_ListNode BOP_ListNodeOfListOfListOfLoop
#define TCollection_ListNode_hxx <BOP_ListNodeOfListOfListOfLoop.hxx>
#define TCollection_ListIterator BOP_ListIteratorOfListOfListOfLoop
#define TCollection_ListIterator_hxx <BOP_ListIteratorOfListOfListOfLoop.hxx>
#define Handle_TCollection_ListNode Handle_BOP_ListNodeOfListOfListOfLoop
#define TCollection_ListNode_Type_() BOP_ListNodeOfListOfListOfLoop_Type_()
#define TCollection_List BOP_ListOfListOfLoop
#define TCollection_List_hxx <BOP_ListOfListOfLoop.hxx>
#include <TCollection_ListNode.gxx>

