// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TCollection_HeaderFile
#define _TCollection_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TCollection_AsciiString;
class TCollection_ExtendedString;
class TCollection_HAsciiString;
class TCollection_HExtendedString;
class TCollection_Array1Descriptor;
class TCollection_Array1;
class TCollection_HArray1;
class TCollection_Array2Descriptor;
class TCollection_Array2;
class TCollection_HArray2;
class TCollection_Stack;
class TCollection_StackNode;
class TCollection_StackIterator;
class TCollection_Queue;
class TCollection_QueueNode;
class TCollection_List;
class TCollection_ListNode;
class TCollection_ListIterator;
class TCollection_SList;
class TCollection_SListNode;
class TCollection_BaseSequence;
class TCollection_SeqNode;
class TCollection_Sequence;
class TCollection_SequenceNode;
class TCollection_HSequence;
class TCollection_Set;
class TCollection_SetIterator;
class TCollection_SetList;
class TCollection_HSet;
class TCollection_MapHasher;
class TCollection_BasicMap;
class TCollection_MapNode;
class TCollection_BasicMapIterator;
class TCollection_Map;
class TCollection_MapIterator;
class TCollection_StdMapNode;
class TCollection_DataMap;
class TCollection_DataMapIterator;
class TCollection_DataMapNode;
class TCollection_DoubleMap;
class TCollection_DoubleMapIterator;
class TCollection_DoubleMapNode;
class TCollection_IndexedMap;
class TCollection_IndexedMapNode;
class TCollection_IndexedDataMap;
class TCollection_IndexedDataMapNode;
class TCollection_Compare;
class TCollection_PrivCompareOfInteger;
class TCollection_PrivCompareOfReal;
class TCollection_CompareOfInteger;
class TCollection_CompareOfReal;
class TCollection_AVLBaseNode;
class TCollection_AVLSearchTree;
class TCollection_AVLNode;
class TCollection_AVLList;
class TCollection_AVLIterator;


//! The package <TCollection> provides the services for the <br>
//! transient basic data structures. <br>
class TCollection  {
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

  //! Returns a  prime number greater than  <I> suitable <br>
//! to dimension a Map.  When  <I> becomes great there <br>
//! is  a  limit on  the  result (today  the  limit is <br>
//! around 1 000 000). This is not a limit of the number of <br>
//! items but a limit in the number  of buckets.  i.e. <br>
//! there will be more collisions  in  the map. <br>
  Standard_EXPORT   static  Standard_Integer NextPrimeForMap(const Standard_Integer I) ;





protected:





private:




friend class TCollection_AsciiString;
friend class TCollection_ExtendedString;
friend class TCollection_HAsciiString;
friend class TCollection_HExtendedString;
friend class TCollection_Array1Descriptor;
friend class TCollection_Array1;
friend class TCollection_HArray1;
friend class TCollection_Array2Descriptor;
friend class TCollection_Array2;
friend class TCollection_HArray2;
friend class TCollection_Stack;
friend class TCollection_StackNode;
friend class TCollection_StackIterator;
friend class TCollection_Queue;
friend class TCollection_QueueNode;
friend class TCollection_List;
friend class TCollection_ListNode;
friend class TCollection_ListIterator;
friend class TCollection_SList;
friend class TCollection_SListNode;
friend class TCollection_BaseSequence;
friend class TCollection_SeqNode;
friend class TCollection_Sequence;
friend class TCollection_SequenceNode;
friend class TCollection_HSequence;
friend class TCollection_Set;
friend class TCollection_SetIterator;
friend class TCollection_SetList;
friend class TCollection_HSet;
friend class TCollection_MapHasher;
friend class TCollection_BasicMap;
friend class TCollection_MapNode;
friend class TCollection_BasicMapIterator;
friend class TCollection_Map;
friend class TCollection_MapIterator;
friend class TCollection_StdMapNode;
friend class TCollection_DataMap;
friend class TCollection_DataMapIterator;
friend class TCollection_DataMapNode;
friend class TCollection_DoubleMap;
friend class TCollection_DoubleMapIterator;
friend class TCollection_DoubleMapNode;
friend class TCollection_IndexedMap;
friend class TCollection_IndexedMapNode;
friend class TCollection_IndexedDataMap;
friend class TCollection_IndexedDataMapNode;
friend class TCollection_Compare;
friend class TCollection_PrivCompareOfInteger;
friend class TCollection_PrivCompareOfReal;
friend class TCollection_CompareOfInteger;
friend class TCollection_CompareOfReal;
friend class TCollection_AVLBaseNode;
friend class TCollection_AVLSearchTree;
friend class TCollection_AVLNode;
friend class TCollection_AVLList;
friend class TCollection_AVLIterator;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
