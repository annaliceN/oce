// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_SequenceOfCommonPrts_HeaderFile
#define _IntTools_SequenceOfCommonPrts_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_IntTools_SequenceNodeOfSequenceOfCommonPrts_HeaderFile
#include <Handle_IntTools_SequenceNodeOfSequenceOfCommonPrts.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IntTools_CommonPrt;
class IntTools_SequenceNodeOfSequenceOfCommonPrts;



class IntTools_SequenceOfCommonPrts  : public TCollection_BaseSequence {
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

  
      IntTools_SequenceOfCommonPrts();
  
  Standard_EXPORT     void Clear() ;
~IntTools_SequenceOfCommonPrts()
{
  Clear();
}
  
  Standard_EXPORT    const IntTools_SequenceOfCommonPrts& Assign(const IntTools_SequenceOfCommonPrts& Other) ;
   const IntTools_SequenceOfCommonPrts& operator =(const IntTools_SequenceOfCommonPrts& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const IntTools_CommonPrt& T) ;
  
        void Append(IntTools_SequenceOfCommonPrts& S) ;
  
  Standard_EXPORT     void Prepend(const IntTools_CommonPrt& T) ;
  
        void Prepend(IntTools_SequenceOfCommonPrts& S) ;
  
        void InsertBefore(const Standard_Integer Index,const IntTools_CommonPrt& T) ;
  
        void InsertBefore(const Standard_Integer Index,IntTools_SequenceOfCommonPrts& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const IntTools_CommonPrt& T) ;
  
        void InsertAfter(const Standard_Integer Index,IntTools_SequenceOfCommonPrts& S) ;
  
  Standard_EXPORT    const IntTools_CommonPrt& First() const;
  
  Standard_EXPORT    const IntTools_CommonPrt& Last() const;
  
        void Split(const Standard_Integer Index,IntTools_SequenceOfCommonPrts& Sub) ;
  
  Standard_EXPORT    const IntTools_CommonPrt& Value(const Standard_Integer Index) const;
   const IntTools_CommonPrt& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const IntTools_CommonPrt& I) ;
  
  Standard_EXPORT     IntTools_CommonPrt& ChangeValue(const Standard_Integer Index) ;
    IntTools_CommonPrt& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   IntTools_SequenceOfCommonPrts(const IntTools_SequenceOfCommonPrts& Other);




};

#define SeqItem IntTools_CommonPrt
#define SeqItem_hxx <IntTools_CommonPrt.hxx>
#define TCollection_SequenceNode IntTools_SequenceNodeOfSequenceOfCommonPrts
#define TCollection_SequenceNode_hxx <IntTools_SequenceNodeOfSequenceOfCommonPrts.hxx>
#define Handle_TCollection_SequenceNode Handle_IntTools_SequenceNodeOfSequenceOfCommonPrts
#define TCollection_SequenceNode_Type_() IntTools_SequenceNodeOfSequenceOfCommonPrts_Type_()
#define TCollection_Sequence IntTools_SequenceOfCommonPrts
#define TCollection_Sequence_hxx <IntTools_SequenceOfCommonPrts.hxx>

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
