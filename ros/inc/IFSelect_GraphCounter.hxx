// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_GraphCounter_HeaderFile
#define _IFSelect_GraphCounter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_GraphCounter_HeaderFile
#include <Handle_IFSelect_GraphCounter.hxx>
#endif

#ifndef _Handle_IFSelect_SelectDeduct_HeaderFile
#include <Handle_IFSelect_SelectDeduct.hxx>
#endif
#ifndef _IFSelect_SignCounter_HeaderFile
#include <IFSelect_SignCounter.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfTransient_HeaderFile
#include <Handle_TColStd_HSequenceOfTransient.hxx>
#endif
class IFSelect_SelectDeduct;
class TColStd_HSequenceOfTransient;
class Interface_Graph;


//! A GraphCounter computes values to be sorted with the help of <br>
//!           a Graph. I.E. not from a Signature <br>
//! <br>
//!           The default GraphCounter works with an Applied Selection (a <br>
//!           SelectDeduct), the value is the count of selected entities <br>
//!           from each input entities) <br>
class IFSelect_GraphCounter : public IFSelect_SignCounter {

public:

  //! Creates a GraphCounter, without applied selection <br>
  Standard_EXPORT   IFSelect_GraphCounter(const Standard_Boolean withmap = Standard_True,const Standard_Boolean withlist = Standard_False);
  //! Returns the applied selection <br>
  Standard_EXPORT     Handle_IFSelect_SelectDeduct Applied() const;
  //! Sets a new applied selection <br>
  Standard_EXPORT     void SetApplied(const Handle(IFSelect_SelectDeduct)& sel) ;
  //! Adds a list of entities in the context given by the graph <br>
//!           Default takes the count of entities selected by the applied <br>
//!           selection, when it is given each entity of the list <br>
//!           Can be redefined <br>
  Standard_EXPORT   virtual  void AddWithGraph(const Handle(TColStd_HSequenceOfTransient)& list,const Interface_Graph& graph) ;




  DEFINE_STANDARD_RTTI(IFSelect_GraphCounter)

protected:




private: 


Handle_IFSelect_SelectDeduct theapplied;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
