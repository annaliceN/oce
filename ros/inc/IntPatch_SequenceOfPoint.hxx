// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_SequenceOfPoint_HeaderFile
#define _IntPatch_SequenceOfPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_IntPatch_SequenceNodeOfSequenceOfPoint_HeaderFile
#include <Handle_IntPatch_SequenceNodeOfSequenceOfPoint.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IntPatch_Point;
class IntPatch_SequenceNodeOfSequenceOfPoint;



class IntPatch_SequenceOfPoint  : public TCollection_BaseSequence {
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

  
      IntPatch_SequenceOfPoint();
  
  Standard_EXPORT     void Clear() ;
~IntPatch_SequenceOfPoint()
{
  Clear();
}
  
  Standard_EXPORT    const IntPatch_SequenceOfPoint& Assign(const IntPatch_SequenceOfPoint& Other) ;
   const IntPatch_SequenceOfPoint& operator =(const IntPatch_SequenceOfPoint& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const IntPatch_Point& T) ;
  
        void Append(IntPatch_SequenceOfPoint& S) ;
  
  Standard_EXPORT     void Prepend(const IntPatch_Point& T) ;
  
        void Prepend(IntPatch_SequenceOfPoint& S) ;
  
        void InsertBefore(const Standard_Integer Index,const IntPatch_Point& T) ;
  
        void InsertBefore(const Standard_Integer Index,IntPatch_SequenceOfPoint& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const IntPatch_Point& T) ;
  
        void InsertAfter(const Standard_Integer Index,IntPatch_SequenceOfPoint& S) ;
  
  Standard_EXPORT    const IntPatch_Point& First() const;
  
  Standard_EXPORT    const IntPatch_Point& Last() const;
  
        void Split(const Standard_Integer Index,IntPatch_SequenceOfPoint& Sub) ;
  
  Standard_EXPORT    const IntPatch_Point& Value(const Standard_Integer Index) const;
   const IntPatch_Point& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const IntPatch_Point& I) ;
  
  Standard_EXPORT     IntPatch_Point& ChangeValue(const Standard_Integer Index) ;
    IntPatch_Point& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   IntPatch_SequenceOfPoint(const IntPatch_SequenceOfPoint& Other);




};

#define SeqItem IntPatch_Point
#define SeqItem_hxx <IntPatch_Point.hxx>
#define TCollection_SequenceNode IntPatch_SequenceNodeOfSequenceOfPoint
#define TCollection_SequenceNode_hxx <IntPatch_SequenceNodeOfSequenceOfPoint.hxx>
#define Handle_TCollection_SequenceNode Handle_IntPatch_SequenceNodeOfSequenceOfPoint
#define TCollection_SequenceNode_Type_() IntPatch_SequenceNodeOfSequenceOfPoint_Type_()
#define TCollection_Sequence IntPatch_SequenceOfPoint
#define TCollection_Sequence_hxx <IntPatch_SequenceOfPoint.hxx>

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
