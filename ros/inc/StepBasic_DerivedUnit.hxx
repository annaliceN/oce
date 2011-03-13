// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_DerivedUnit_HeaderFile
#define _StepBasic_DerivedUnit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_DerivedUnit_HeaderFile
#include <Handle_StepBasic_DerivedUnit.hxx>
#endif

#ifndef _Handle_StepBasic_HArray1OfDerivedUnitElement_HeaderFile
#include <Handle_StepBasic_HArray1OfDerivedUnitElement.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_StepBasic_DerivedUnitElement_HeaderFile
#include <Handle_StepBasic_DerivedUnitElement.hxx>
#endif
class StepBasic_HArray1OfDerivedUnitElement;
class StepBasic_DerivedUnitElement;


//! Added from StepBasic Rev2 to Rev4 <br>
class StepBasic_DerivedUnit : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepBasic_DerivedUnit();
  
  Standard_EXPORT     void Init(const Handle(StepBasic_HArray1OfDerivedUnitElement)& elements) ;
  
  Standard_EXPORT     void SetElements(const Handle(StepBasic_HArray1OfDerivedUnitElement)& elements) ;
  
  Standard_EXPORT     Handle_StepBasic_HArray1OfDerivedUnitElement Elements() const;
  
  Standard_EXPORT     Standard_Integer NbElements() const;
  
  Standard_EXPORT     Handle_StepBasic_DerivedUnitElement ElementsValue(const Standard_Integer num) const;




  DEFINE_STANDARD_RTTI(StepBasic_DerivedUnit)

protected:




private: 


Handle_StepBasic_HArray1OfDerivedUnitElement theElements;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
