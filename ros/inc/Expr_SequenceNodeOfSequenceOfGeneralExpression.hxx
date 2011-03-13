// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_SequenceNodeOfSequenceOfGeneralExpression_HeaderFile
#define _Expr_SequenceNodeOfSequenceOfGeneralExpression_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Expr_SequenceNodeOfSequenceOfGeneralExpression_HeaderFile
#include <Handle_Expr_SequenceNodeOfSequenceOfGeneralExpression.hxx>
#endif

#ifndef _Handle_Expr_GeneralExpression_HeaderFile
#include <Handle_Expr_GeneralExpression.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Expr_GeneralExpression;
class Expr_SequenceOfGeneralExpression;



class Expr_SequenceNodeOfSequenceOfGeneralExpression : public TCollection_SeqNode {

public:

  
      Expr_SequenceNodeOfSequenceOfGeneralExpression(const Handle(Expr_GeneralExpression)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_Expr_GeneralExpression& Value() const;




  DEFINE_STANDARD_RTTI(Expr_SequenceNodeOfSequenceOfGeneralExpression)

protected:




private: 


Handle_Expr_GeneralExpression myValue;


};

#define SeqItem Handle_Expr_GeneralExpression
#define SeqItem_hxx <Expr_GeneralExpression.hxx>
#define TCollection_SequenceNode Expr_SequenceNodeOfSequenceOfGeneralExpression
#define TCollection_SequenceNode_hxx <Expr_SequenceNodeOfSequenceOfGeneralExpression.hxx>
#define Handle_TCollection_SequenceNode Handle_Expr_SequenceNodeOfSequenceOfGeneralExpression
#define TCollection_SequenceNode_Type_() Expr_SequenceNodeOfSequenceOfGeneralExpression_Type_()
#define TCollection_Sequence Expr_SequenceOfGeneralExpression
#define TCollection_Sequence_hxx <Expr_SequenceOfGeneralExpression.hxx>

#include <TCollection_SequenceNode.lxx>

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
