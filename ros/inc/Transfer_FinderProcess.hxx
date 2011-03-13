// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_FinderProcess_HeaderFile
#define _Transfer_FinderProcess_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Transfer_FinderProcess_HeaderFile
#include <Handle_Transfer_FinderProcess.hxx>
#endif

#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _Transfer_ProcessForFinder_HeaderFile
#include <Transfer_ProcessForFinder.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Transfer_TransientMapper_HeaderFile
#include <Handle_Transfer_TransientMapper.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Transfer_Finder_HeaderFile
#include <Handle_Transfer_Finder.hxx>
#endif
#ifndef _Handle_Message_Messenger_HeaderFile
#include <Handle_Message_Messenger.hxx>
#endif
class Interface_InterfaceModel;
class Transfer_TransientMapper;
class Standard_Transient;
class Transfer_Finder;
class Message_Messenger;


//! Adds specific features to the generic definition : <br>
//!           PrintTrace is adapted <br>
class Transfer_FinderProcess : public Transfer_ProcessForFinder {

public:

  //! Sets FinderProcess at initial state, with an initial size <br>
  Standard_EXPORT   Transfer_FinderProcess(const Standard_Integer nb = 10000);
  //! Sets an InterfaceModel, which can be used during transfer <br>
//!           for instance if a context must be managed, it is in the Model <br>
  Standard_EXPORT     void SetModel(const Handle(Interface_InterfaceModel)& model) ;
  //! Returns the Model which can be used for context <br>
  Standard_EXPORT     Handle_Interface_InterfaceModel Model() const;
  //! In the list of mapped items (between 1 and NbMapped), <br>
//!           searches for the first mapped item which follows <num0> <br>
//!           (not included) and which has an attribute named <name> <br>
//!           The considered Attributes are those brought by Finders,i.e. <br>
//!           by Input data. <br>
//!           While NextItemWithAttribute works on Result data (Binders) <br>
//! <br>
//!           Hence, allows such an iteration <br>
//! <br>
//!           for (num = FP->NextMappedWithAttribute(name,0); <br>
//!                num > 0; <br>
//!                num = FP->NextMappedWithAttribute(name,num) { <br>
//!                .. process mapped item <num> <br>
//!           } <br>
  Standard_EXPORT     Standard_Integer NextMappedWithAttribute(const Standard_CString name,const Standard_Integer num0) const;
  //! Returns a TransientMapper for a given Transient Object <br>
//!           Either <obj> is already mapped, then its Mapper is returned <br>
//!           Or it is not, then a new one is created then returned, BUT <br>
//!             it is not mapped here (use Bind or FindElseBind to do this) <br>
  Standard_EXPORT     Handle_Transfer_TransientMapper TransientMapper(const Handle(Standard_Transient)& obj) const;
  //! Specific printing to trace a Finder (by its method ValueType) <br>
  Standard_EXPORT   virtual  void PrintTrace(const Handle(Transfer_Finder)& start,const Handle(Message_Messenger)& S) const;
  //! Prints statistics on a given output, according mode <br>
  Standard_EXPORT     void PrintStats(const Standard_Integer mode,const Handle(Message_Messenger)& S) const;




  DEFINE_STANDARD_RTTI(Transfer_FinderProcess)

protected:




private: 


Handle_Interface_InterfaceModel themodel;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
