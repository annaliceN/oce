// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_HeaderFile
#define _StepData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepData_Protocol_HeaderFile
#include <Handle_StepData_Protocol.hxx>
#endif
class StepData_Protocol;
class StepData_StepModel;
class StepData_UndefinedEntity;
class StepData_SelectType;
class StepData_Field;
class StepData_SelectMember;
class StepData_SelectInt;
class StepData_SelectReal;
class StepData_SelectNamed;
class StepData_SelectArrReal;
class StepData_PDescr;
class StepData_FieldList;
class StepData_FieldList1;
class StepData_FieldListN;
class StepData_FieldListD;
class StepData_EDescr;
class StepData_ESDescr;
class StepData_ECDescr;
class StepData_Described;
class StepData_Simple;
class StepData_Plex;
class StepData_FreeFormEntity;
class StepData_Protocol;
class StepData_GeneralModule;
class StepData_FileRecognizer;
class StepData_FileProtocol;
class StepData_HeaderTool;
class StepData_EnumTool;
class StepData_DescrProtocol;
class StepData_DescrGeneral;
class StepData_DescrReadWrite;
class StepData_StepReaderData;
class StepData_StepReaderTool;
class StepData_ReadWriteModule;
class StepData_StepWriter;
class StepData_StepDumper;
class StepData_WriterLib;
class StepData_DefaultGeneral;
class StepData_Array1OfField;
class StepData_HArray1OfField;
class StepData_GlobalNodeOfWriterLib;
class StepData_NodeOfWriterLib;


//! Gives basic data definition for Step Interface. <br>
//!           Any class of a data model described in EXPRESS Language <br>
//!           is candidate to be managed by a Step Interface <br>
class StepData  {
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

  //! Returns the recorded HeaderProtocol, which can be : <br>
//!           - a Null Handle if no Header Protocol was yet defined <br>
//!           - a simple Protocol if only one was defined <br>
//!           - a FileProtocol if more than one Protocol was yet defined <br>
  Standard_EXPORT   static  Handle_StepData_Protocol HeaderProtocol() ;
  //! Adds a new Header Protocol to the Header Definition <br>
  Standard_EXPORT   static  void AddHeaderProtocol(const Handle(StepData_Protocol)& headerproto) ;
  //! Prepares General Data required to work with this package, <br>
//!           which are the Protocol and Modules to be loaded into Libraries <br>
  Standard_EXPORT   static  void Init() ;
  //! Returns a Protocol from StepData (avoids to create it) <br>
  Standard_EXPORT   static  Handle_StepData_Protocol Protocol() ;





protected:





private:




friend class StepData_StepModel;
friend class StepData_UndefinedEntity;
friend class StepData_SelectType;
friend class StepData_Field;
friend class StepData_SelectMember;
friend class StepData_SelectInt;
friend class StepData_SelectReal;
friend class StepData_SelectNamed;
friend class StepData_SelectArrReal;
friend class StepData_PDescr;
friend class StepData_FieldList;
friend class StepData_FieldList1;
friend class StepData_FieldListN;
friend class StepData_FieldListD;
friend class StepData_EDescr;
friend class StepData_ESDescr;
friend class StepData_ECDescr;
friend class StepData_Described;
friend class StepData_Simple;
friend class StepData_Plex;
friend class StepData_FreeFormEntity;
friend class StepData_Protocol;
friend class StepData_GeneralModule;
friend class StepData_FileRecognizer;
friend class StepData_FileProtocol;
friend class StepData_HeaderTool;
friend class StepData_EnumTool;
friend class StepData_DescrProtocol;
friend class StepData_DescrGeneral;
friend class StepData_DescrReadWrite;
friend class StepData_StepReaderData;
friend class StepData_StepReaderTool;
friend class StepData_ReadWriteModule;
friend class StepData_StepWriter;
friend class StepData_StepDumper;
friend class StepData_WriterLib;
friend class StepData_DefaultGeneral;
friend class StepData_Array1OfField;
friend class StepData_HArray1OfField;
friend class StepData_GlobalNodeOfWriterLib;
friend class StepData_NodeOfWriterLib;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
