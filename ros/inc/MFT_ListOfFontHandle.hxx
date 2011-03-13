// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MFT_ListOfFontHandle_HeaderFile
#define _MFT_ListOfFontHandle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _MFT_FileHandle_HeaderFile
#include <MFT_FileHandle.hxx>
#endif
#ifndef _Handle_MFT_SequenceNodeOfListOfFontHandle_HeaderFile
#include <Handle_MFT_SequenceNodeOfListOfFontHandle.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class MFT_SequenceNodeOfListOfFontHandle;



class MFT_ListOfFontHandle  : public TCollection_BaseSequence {
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

  
      MFT_ListOfFontHandle();
  
  Standard_EXPORT     void Clear() ;
~MFT_ListOfFontHandle()
{
  Clear();
}
  
  Standard_EXPORT    const MFT_ListOfFontHandle& Assign(const MFT_ListOfFontHandle& Other) ;
   const MFT_ListOfFontHandle& operator =(const MFT_ListOfFontHandle& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const MFT_FileHandle& T) ;
  
        void Append(MFT_ListOfFontHandle& S) ;
  
  Standard_EXPORT     void Prepend(const MFT_FileHandle& T) ;
  
        void Prepend(MFT_ListOfFontHandle& S) ;
  
        void InsertBefore(const Standard_Integer Index,const MFT_FileHandle& T) ;
  
        void InsertBefore(const Standard_Integer Index,MFT_ListOfFontHandle& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const MFT_FileHandle& T) ;
  
        void InsertAfter(const Standard_Integer Index,MFT_ListOfFontHandle& S) ;
  
  Standard_EXPORT    const MFT_FileHandle& First() const;
  
  Standard_EXPORT    const MFT_FileHandle& Last() const;
  
        void Split(const Standard_Integer Index,MFT_ListOfFontHandle& Sub) ;
  
  Standard_EXPORT    const MFT_FileHandle& Value(const Standard_Integer Index) const;
   const MFT_FileHandle& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const MFT_FileHandle& I) ;
  
  Standard_EXPORT     MFT_FileHandle& ChangeValue(const Standard_Integer Index) ;
    MFT_FileHandle& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   MFT_ListOfFontHandle(const MFT_ListOfFontHandle& Other);




};

#define SeqItem MFT_FileHandle
#define SeqItem_hxx <MFT_FileHandle.hxx>
#define TCollection_SequenceNode MFT_SequenceNodeOfListOfFontHandle
#define TCollection_SequenceNode_hxx <MFT_SequenceNodeOfListOfFontHandle.hxx>
#define Handle_TCollection_SequenceNode Handle_MFT_SequenceNodeOfListOfFontHandle
#define TCollection_SequenceNode_Type_() MFT_SequenceNodeOfListOfFontHandle_Type_()
#define TCollection_Sequence MFT_ListOfFontHandle
#define TCollection_Sequence_hxx <MFT_ListOfFontHandle.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
