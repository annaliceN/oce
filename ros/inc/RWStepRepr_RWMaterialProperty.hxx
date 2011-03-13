// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepRepr_RWMaterialProperty_HeaderFile
#define _RWStepRepr_RWMaterialProperty_HeaderFile

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
#ifndef _Handle_StepRepr_MaterialProperty_HeaderFile
#include <Handle_StepRepr_MaterialProperty.hxx>
#endif
class StepData_StepReaderData;
class Interface_Check;
class StepRepr_MaterialProperty;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for MaterialProperty <br>
class RWStepRepr_RWMaterialProperty  {
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
  Standard_EXPORT   RWStepRepr_RWMaterialProperty();
  //! Reads MaterialProperty <br>
  Standard_EXPORT     void ReadStep(const Handle(StepData_StepReaderData)& data,const Standard_Integer num,Handle(Interface_Check)& ach,const Handle(StepRepr_MaterialProperty)& ent) const;
  //! Writes MaterialProperty <br>
  Standard_EXPORT     void WriteStep(StepData_StepWriter& SW,const Handle(StepRepr_MaterialProperty)& ent) const;
  //! Fills data for graph (shared items) <br>
  Standard_EXPORT     void Share(const Handle(StepRepr_MaterialProperty)& ent,Interface_EntityIterator& iter) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
