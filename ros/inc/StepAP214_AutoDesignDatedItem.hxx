// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignDatedItem_HeaderFile
#define _StepAP214_AutoDesignDatedItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepBasic_ApprovalPersonOrganization_HeaderFile
#include <Handle_StepBasic_ApprovalPersonOrganization.hxx>
#endif
#ifndef _Handle_StepAP214_AutoDesignDateAndPersonAssignment_HeaderFile
#include <Handle_StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinitionEffectivity_HeaderFile
#include <Handle_StepBasic_ProductDefinitionEffectivity.hxx>
#endif
class Standard_Transient;
class StepBasic_ApprovalPersonOrganization;
class StepAP214_AutoDesignDateAndPersonAssignment;
class StepBasic_ProductDefinitionEffectivity;



class StepAP214_AutoDesignDatedItem  : public StepData_SelectType {
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

  //! Returns a AutoDesignDatedItem SelectType <br>
  Standard_EXPORT   StepAP214_AutoDesignDatedItem();
  //! Recognizes a AutoDesignDatedItem Kind Entity that is : <br>
//!        1 -> ApprovalPersonOrganization <br>
//!        2 -> AutoDesignDateAndPersonAssignment <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a ApprovalPersonOrganization (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_ApprovalPersonOrganization ApprovalPersonOrganization() const;
  //! returns Value as a AutoDesignDateAndPersonAssignment (Null if another type) <br>
  Standard_EXPORT     Handle_StepAP214_AutoDesignDateAndPersonAssignment AutoDesignDateAndPersonAssignment() const;
  //! returns Value as a ProductDefinitionEffectivity <br>
  Standard_EXPORT     Handle_StepBasic_ProductDefinitionEffectivity ProductDefinitionEffectivity() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
