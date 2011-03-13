// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_AttributeList_HeaderFile
#define _TDF_AttributeList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_ListNodeOfAttributeList_HeaderFile
#include <Handle_TDF_ListNodeOfAttributeList.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TDF_ListIteratorOfAttributeList;
class TDF_Attribute;
class TDF_ListNodeOfAttributeList;



class TDF_AttributeList  {
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

  
  Standard_EXPORT   TDF_AttributeList();
  
  Standard_EXPORT     void Assign(const TDF_AttributeList& Other) ;
    void operator=(const TDF_AttributeList& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~TDF_AttributeList()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Handle(TDF_Attribute)& I) ;
  
  Standard_EXPORT     void Prepend(const Handle(TDF_Attribute)& I,TDF_ListIteratorOfAttributeList& theIt) ;
  
  Standard_EXPORT     void Prepend(TDF_AttributeList& Other) ;
  
  Standard_EXPORT     void Append(const Handle(TDF_Attribute)& I) ;
  
  Standard_EXPORT     void Append(const Handle(TDF_Attribute)& I,TDF_ListIteratorOfAttributeList& theIt) ;
  
  Standard_EXPORT     void Append(TDF_AttributeList& Other) ;
  
  Standard_EXPORT     Handle_TDF_Attribute& First() const;
  
  Standard_EXPORT     Handle_TDF_Attribute& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(TDF_ListIteratorOfAttributeList& It) ;
  
  Standard_EXPORT     void InsertBefore(const Handle(TDF_Attribute)& I,TDF_ListIteratorOfAttributeList& It) ;
  
  Standard_EXPORT     void InsertBefore(TDF_AttributeList& Other,TDF_ListIteratorOfAttributeList& It) ;
  
  Standard_EXPORT     void InsertAfter(const Handle(TDF_Attribute)& I,TDF_ListIteratorOfAttributeList& It) ;
  
  Standard_EXPORT     void InsertAfter(TDF_AttributeList& Other,TDF_ListIteratorOfAttributeList& It) ;


friend class TDF_ListIteratorOfAttributeList;



protected:





private:

  
  Standard_EXPORT   TDF_AttributeList(const TDF_AttributeList& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Handle_TDF_Attribute
#define Item_hxx <TDF_Attribute.hxx>
#define TCollection_ListNode TDF_ListNodeOfAttributeList
#define TCollection_ListNode_hxx <TDF_ListNodeOfAttributeList.hxx>
#define TCollection_ListIterator TDF_ListIteratorOfAttributeList
#define TCollection_ListIterator_hxx <TDF_ListIteratorOfAttributeList.hxx>
#define Handle_TCollection_ListNode Handle_TDF_ListNodeOfAttributeList
#define TCollection_ListNode_Type_() TDF_ListNodeOfAttributeList_Type_()
#define TCollection_List TDF_AttributeList
#define TCollection_List_hxx <TDF_AttributeList.hxx>

#include <TCollection_List.lxx>

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
