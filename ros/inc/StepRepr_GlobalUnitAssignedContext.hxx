// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_GlobalUnitAssignedContext_HeaderFile
#define _StepRepr_GlobalUnitAssignedContext_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepRepr_GlobalUnitAssignedContext_HeaderFile
#include <Handle_StepRepr_GlobalUnitAssignedContext.hxx>
#endif

#ifndef _Handle_StepBasic_HArray1OfNamedUnit_HeaderFile
#include <Handle_StepBasic_HArray1OfNamedUnit.hxx>
#endif
#ifndef _StepRepr_RepresentationContext_HeaderFile
#include <StepRepr_RepresentationContext.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepBasic_NamedUnit_HeaderFile
#include <Handle_StepBasic_NamedUnit.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepBasic_HArray1OfNamedUnit;
class TCollection_HAsciiString;
class StepBasic_NamedUnit;



class StepRepr_GlobalUnitAssignedContext : public StepRepr_RepresentationContext {

public:

  //! Returns a GlobalUnitAssignedContext <br>
  Standard_EXPORT   StepRepr_GlobalUnitAssignedContext();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aContextIdentifier,const Handle(TCollection_HAsciiString)& aContextType) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aContextIdentifier,const Handle(TCollection_HAsciiString)& aContextType,const Handle(StepBasic_HArray1OfNamedUnit)& aUnits) ;
  
  Standard_EXPORT     void SetUnits(const Handle(StepBasic_HArray1OfNamedUnit)& aUnits) ;
  
  Standard_EXPORT     Handle_StepBasic_HArray1OfNamedUnit Units() const;
  
  Standard_EXPORT     Handle_StepBasic_NamedUnit UnitsValue(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbUnits() const;




  DEFINE_STANDARD_RTTI(StepRepr_GlobalUnitAssignedContext)

protected:




private: 


Handle_StepBasic_HArray1OfNamedUnit units;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
