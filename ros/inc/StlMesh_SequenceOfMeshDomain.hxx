// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlMesh_SequenceOfMeshDomain_HeaderFile
#define _StlMesh_SequenceOfMeshDomain_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_StlMesh_MeshDomain_HeaderFile
#include <Handle_StlMesh_MeshDomain.hxx>
#endif
#ifndef _Handle_StlMesh_SequenceNodeOfSequenceOfMeshDomain_HeaderFile
#include <Handle_StlMesh_SequenceNodeOfSequenceOfMeshDomain.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StlMesh_MeshDomain;
class StlMesh_SequenceNodeOfSequenceOfMeshDomain;



class StlMesh_SequenceOfMeshDomain  : public TCollection_BaseSequence {
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

  
      StlMesh_SequenceOfMeshDomain();
  
  Standard_EXPORT     void Clear() ;
~StlMesh_SequenceOfMeshDomain()
{
  Clear();
}
  
  Standard_EXPORT    const StlMesh_SequenceOfMeshDomain& Assign(const StlMesh_SequenceOfMeshDomain& Other) ;
   const StlMesh_SequenceOfMeshDomain& operator =(const StlMesh_SequenceOfMeshDomain& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(StlMesh_MeshDomain)& T) ;
  
        void Append(StlMesh_SequenceOfMeshDomain& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(StlMesh_MeshDomain)& T) ;
  
        void Prepend(StlMesh_SequenceOfMeshDomain& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(StlMesh_MeshDomain)& T) ;
  
        void InsertBefore(const Standard_Integer Index,StlMesh_SequenceOfMeshDomain& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(StlMesh_MeshDomain)& T) ;
  
        void InsertAfter(const Standard_Integer Index,StlMesh_SequenceOfMeshDomain& S) ;
  
  Standard_EXPORT    const Handle_StlMesh_MeshDomain& First() const;
  
  Standard_EXPORT    const Handle_StlMesh_MeshDomain& Last() const;
  
        void Split(const Standard_Integer Index,StlMesh_SequenceOfMeshDomain& Sub) ;
  
  Standard_EXPORT    const Handle_StlMesh_MeshDomain& Value(const Standard_Integer Index) const;
   const Handle_StlMesh_MeshDomain& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(StlMesh_MeshDomain)& I) ;
  
  Standard_EXPORT     Handle_StlMesh_MeshDomain& ChangeValue(const Standard_Integer Index) ;
    Handle_StlMesh_MeshDomain& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   StlMesh_SequenceOfMeshDomain(const StlMesh_SequenceOfMeshDomain& Other);




};

#define SeqItem Handle_StlMesh_MeshDomain
#define SeqItem_hxx <StlMesh_MeshDomain.hxx>
#define TCollection_SequenceNode StlMesh_SequenceNodeOfSequenceOfMeshDomain
#define TCollection_SequenceNode_hxx <StlMesh_SequenceNodeOfSequenceOfMeshDomain.hxx>
#define Handle_TCollection_SequenceNode Handle_StlMesh_SequenceNodeOfSequenceOfMeshDomain
#define TCollection_SequenceNode_Type_() StlMesh_SequenceNodeOfSequenceOfMeshDomain_Type_()
#define TCollection_Sequence StlMesh_SequenceOfMeshDomain
#define TCollection_Sequence_hxx <StlMesh_SequenceOfMeshDomain.hxx>

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
