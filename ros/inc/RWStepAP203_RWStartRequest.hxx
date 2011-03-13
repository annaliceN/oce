// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepAP203_RWStartRequest_HeaderFile
#define _RWStepAP203_RWStartRequest_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepData_StepReaderData_HeaderFile
#include <Handle_StepData_StepReaderData.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Handle_StepAP203_StartRequest_HeaderFile
#include <Handle_StepAP203_StartRequest.hxx>
#endif
class StepData_StepReaderData;
class Interface_Check;
class StepAP203_StartRequest;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for StartRequest <br>
class RWStepAP203_RWStartRequest  {
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

  //! Empty constructor <br>
  Standard_EXPORT   RWStepAP203_RWStartRequest();
  //! Reads StartRequest <br>
  Standard_EXPORT     void ReadStep(const Handle(StepData_StepReaderData)& data,const Standard_Integer num,Handle(Interface_Check)& ach,const Handle(StepAP203_StartRequest)& ent) const;
  //! Writes StartRequest <br>
  Standard_EXPORT     void WriteStep(StepData_StepWriter& SW,const Handle(StepAP203_StartRequest)& ent) const;
  //! Fills data for graph (shared items) <br>
  Standard_EXPORT     void Share(const Handle(StepAP203_StartRequest)& ent,Interface_EntityIterator& iter) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
