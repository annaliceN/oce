// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_SequenceOfBSplineSurface_HeaderFile
#define _Geom_SequenceOfBSplineSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Geom_BSplineSurface_HeaderFile
#include <Handle_Geom_BSplineSurface.hxx>
#endif
#ifndef _Handle_Geom_SequenceNodeOfSequenceOfBSplineSurface_HeaderFile
#include <Handle_Geom_SequenceNodeOfSequenceOfBSplineSurface.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Geom_BSplineSurface;
class Geom_SequenceNodeOfSequenceOfBSplineSurface;



class Geom_SequenceOfBSplineSurface  : public TCollection_BaseSequence {
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

  
      Geom_SequenceOfBSplineSurface();
  
  Standard_EXPORT     void Clear() ;
~Geom_SequenceOfBSplineSurface()
{
  Clear();
}
  
  Standard_EXPORT    const Geom_SequenceOfBSplineSurface& Assign(const Geom_SequenceOfBSplineSurface& Other) ;
   const Geom_SequenceOfBSplineSurface& operator =(const Geom_SequenceOfBSplineSurface& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Geom_BSplineSurface)& T) ;
  
        void Append(Geom_SequenceOfBSplineSurface& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Geom_BSplineSurface)& T) ;
  
        void Prepend(Geom_SequenceOfBSplineSurface& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Geom_BSplineSurface)& T) ;
  
        void InsertBefore(const Standard_Integer Index,Geom_SequenceOfBSplineSurface& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Geom_BSplineSurface)& T) ;
  
        void InsertAfter(const Standard_Integer Index,Geom_SequenceOfBSplineSurface& S) ;
  
  Standard_EXPORT    const Handle_Geom_BSplineSurface& First() const;
  
  Standard_EXPORT    const Handle_Geom_BSplineSurface& Last() const;
  
        void Split(const Standard_Integer Index,Geom_SequenceOfBSplineSurface& Sub) ;
  
  Standard_EXPORT    const Handle_Geom_BSplineSurface& Value(const Standard_Integer Index) const;
   const Handle_Geom_BSplineSurface& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Geom_BSplineSurface)& I) ;
  
  Standard_EXPORT     Handle_Geom_BSplineSurface& ChangeValue(const Standard_Integer Index) ;
    Handle_Geom_BSplineSurface& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Geom_SequenceOfBSplineSurface(const Geom_SequenceOfBSplineSurface& Other);




};

#define SeqItem Handle_Geom_BSplineSurface
#define SeqItem_hxx <Geom_BSplineSurface.hxx>
#define TCollection_SequenceNode Geom_SequenceNodeOfSequenceOfBSplineSurface
#define TCollection_SequenceNode_hxx <Geom_SequenceNodeOfSequenceOfBSplineSurface.hxx>
#define Handle_TCollection_SequenceNode Handle_Geom_SequenceNodeOfSequenceOfBSplineSurface
#define TCollection_SequenceNode_Type_() Geom_SequenceNodeOfSequenceOfBSplineSurface_Type_()
#define TCollection_Sequence Geom_SequenceOfBSplineSurface
#define TCollection_Sequence_hxx <Geom_SequenceOfBSplineSurface.hxx>

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
