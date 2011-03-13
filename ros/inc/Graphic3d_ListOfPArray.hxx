// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_ListOfPArray_HeaderFile
#define _Graphic3d_ListOfPArray_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_Graphic3d_ArrayOfPrimitives_HeaderFile
#include <Handle_Graphic3d_ArrayOfPrimitives.hxx>
#endif
#ifndef _Handle_Graphic3d_ListNodeOfListOfPArray_HeaderFile
#include <Handle_Graphic3d_ListNodeOfListOfPArray.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class Graphic3d_ListIteratorOfListOfPArray;
class Graphic3d_ArrayOfPrimitives;
class Graphic3d_ListNodeOfListOfPArray;



class Graphic3d_ListOfPArray  {
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

  
  Standard_EXPORT   Graphic3d_ListOfPArray();
  
  Standard_EXPORT     void Assign(const Graphic3d_ListOfPArray& Other) ;
    void operator=(const Graphic3d_ListOfPArray& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~Graphic3d_ListOfPArray()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Handle(Graphic3d_ArrayOfPrimitives)& I) ;
  
  Standard_EXPORT     void Prepend(const Handle(Graphic3d_ArrayOfPrimitives)& I,Graphic3d_ListIteratorOfListOfPArray& theIt) ;
  
  Standard_EXPORT     void Prepend(Graphic3d_ListOfPArray& Other) ;
  
  Standard_EXPORT     void Append(const Handle(Graphic3d_ArrayOfPrimitives)& I) ;
  
  Standard_EXPORT     void Append(const Handle(Graphic3d_ArrayOfPrimitives)& I,Graphic3d_ListIteratorOfListOfPArray& theIt) ;
  
  Standard_EXPORT     void Append(Graphic3d_ListOfPArray& Other) ;
  
  Standard_EXPORT     Handle_Graphic3d_ArrayOfPrimitives& First() const;
  
  Standard_EXPORT     Handle_Graphic3d_ArrayOfPrimitives& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(Graphic3d_ListIteratorOfListOfPArray& It) ;
  
  Standard_EXPORT     void InsertBefore(const Handle(Graphic3d_ArrayOfPrimitives)& I,Graphic3d_ListIteratorOfListOfPArray& It) ;
  
  Standard_EXPORT     void InsertBefore(Graphic3d_ListOfPArray& Other,Graphic3d_ListIteratorOfListOfPArray& It) ;
  
  Standard_EXPORT     void InsertAfter(const Handle(Graphic3d_ArrayOfPrimitives)& I,Graphic3d_ListIteratorOfListOfPArray& It) ;
  
  Standard_EXPORT     void InsertAfter(Graphic3d_ListOfPArray& Other,Graphic3d_ListIteratorOfListOfPArray& It) ;


friend class Graphic3d_ListIteratorOfListOfPArray;



protected:





private:

  
  Standard_EXPORT   Graphic3d_ListOfPArray(const Graphic3d_ListOfPArray& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Handle_Graphic3d_ArrayOfPrimitives
#define Item_hxx <Graphic3d_ArrayOfPrimitives.hxx>
#define TCollection_ListNode Graphic3d_ListNodeOfListOfPArray
#define TCollection_ListNode_hxx <Graphic3d_ListNodeOfListOfPArray.hxx>
#define TCollection_ListIterator Graphic3d_ListIteratorOfListOfPArray
#define TCollection_ListIterator_hxx <Graphic3d_ListIteratorOfListOfPArray.hxx>
#define Handle_TCollection_ListNode Handle_Graphic3d_ListNodeOfListOfPArray
#define TCollection_ListNode_Type_() Graphic3d_ListNodeOfListOfPArray_Type_()
#define TCollection_List Graphic3d_ListOfPArray
#define TCollection_List_hxx <Graphic3d_ListOfPArray.hxx>

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
