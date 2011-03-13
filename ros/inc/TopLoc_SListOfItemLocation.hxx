// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopLoc_SListOfItemLocation_HeaderFile
#define _TopLoc_SListOfItemLocation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TopLoc_SListNodeOfSListOfItemLocation_HeaderFile
#include <Handle_TopLoc_SListNodeOfSListOfItemLocation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopLoc_SListNodeOfSListOfItemLocation;
class Standard_NoSuchObject;
class TopLoc_ItemLocation;



class TopLoc_SListOfItemLocation  {
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

  
  Standard_EXPORT   TopLoc_SListOfItemLocation();
  
  Standard_EXPORT   TopLoc_SListOfItemLocation(const TopLoc_ItemLocation& anItem,const TopLoc_SListOfItemLocation& aTail);
  
  Standard_EXPORT   TopLoc_SListOfItemLocation(const TopLoc_SListOfItemLocation& Other);
  
  Standard_EXPORT     TopLoc_SListOfItemLocation& Assign(const TopLoc_SListOfItemLocation& Other) ;
    TopLoc_SListOfItemLocation& operator =(const TopLoc_SListOfItemLocation& Other) 
{
  return Assign(Other);
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Clear() ;
~TopLoc_SListOfItemLocation()
{
  Clear();
}
  
  Standard_EXPORT    const TopLoc_ItemLocation& Value() const;
  
  Standard_EXPORT     TopLoc_ItemLocation& ChangeValue() ;
  
  Standard_EXPORT     void SetValue(const TopLoc_ItemLocation& anItem) ;
  
  Standard_EXPORT    const TopLoc_SListOfItemLocation& Tail() const;
  
  Standard_EXPORT     TopLoc_SListOfItemLocation& ChangeTail() ;
  
  Standard_EXPORT     void SetTail(const TopLoc_SListOfItemLocation& aList) ;
  
        void Construct(const TopLoc_ItemLocation& anItem) ;
  
        TopLoc_SListOfItemLocation Constructed(const TopLoc_ItemLocation& anItem) const;
  
        void ToTail() ;
  
        void Initialize(const TopLoc_SListOfItemLocation& aList) ;
  
        Standard_Boolean More() const;
  
        void Next() ;





protected:





private:



Handle_TopLoc_SListNodeOfSListOfItemLocation myNode;


};

#define Item TopLoc_ItemLocation
#define Item_hxx <TopLoc_ItemLocation.hxx>
#define TCollection_SListNode TopLoc_SListNodeOfSListOfItemLocation
#define TCollection_SListNode_hxx <TopLoc_SListNodeOfSListOfItemLocation.hxx>
#define Handle_TCollection_SListNode Handle_TopLoc_SListNodeOfSListOfItemLocation
#define TCollection_SListNode_Type_() TopLoc_SListNodeOfSListOfItemLocation_Type_()
#define TCollection_SList TopLoc_SListOfItemLocation
#define TCollection_SList_hxx <TopLoc_SListOfItemLocation.hxx>

#include <TCollection_SList.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_SListNode
#undef TCollection_SListNode_hxx
#undef Handle_TCollection_SListNode
#undef TCollection_SListNode_Type_
#undef TCollection_SList
#undef TCollection_SList_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
