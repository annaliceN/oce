// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Intf_SequenceNodeOfSeqOfTangentZone_HeaderFile
#define _Intf_SequenceNodeOfSeqOfTangentZone_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Intf_SequenceNodeOfSeqOfTangentZone.hxx>

#include <Intf_TangentZone.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class Intf_TangentZone;
class Intf_SeqOfTangentZone;



class Intf_SequenceNodeOfSeqOfTangentZone : public TCollection_SeqNode
{

public:

  
    Intf_SequenceNodeOfSeqOfTangentZone(const Intf_TangentZone& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Intf_TangentZone& Value()  const;




  DEFINE_STANDARD_RTTI(Intf_SequenceNodeOfSeqOfTangentZone)

protected:




private: 


  Intf_TangentZone myValue;


};

#define SeqItem Intf_TangentZone
#define SeqItem_hxx <Intf_TangentZone.hxx>
#define TCollection_SequenceNode Intf_SequenceNodeOfSeqOfTangentZone
#define TCollection_SequenceNode_hxx <Intf_SequenceNodeOfSeqOfTangentZone.hxx>
#define Handle_TCollection_SequenceNode Handle_Intf_SequenceNodeOfSeqOfTangentZone
#define TCollection_SequenceNode_Type_() Intf_SequenceNodeOfSeqOfTangentZone_Type_()
#define TCollection_Sequence Intf_SeqOfTangentZone
#define TCollection_Sequence_hxx <Intf_SeqOfTangentZone.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Intf_SequenceNodeOfSeqOfTangentZone_HeaderFile
