// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_NamedUnit_HeaderFile
#define _StepBasic_NamedUnit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_NamedUnit_HeaderFile
#include <Handle_StepBasic_NamedUnit.hxx>
#endif

#ifndef _Handle_StepBasic_DimensionalExponents_HeaderFile
#include <Handle_StepBasic_DimensionalExponents.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepBasic_DimensionalExponents;



class StepBasic_NamedUnit : public MMgt_TShared {

public:

  //! Returns a NamedUnit <br>
  Standard_EXPORT   StepBasic_NamedUnit();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT   virtual  void SetDimensions(const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT   virtual  Handle_StepBasic_DimensionalExponents Dimensions() const;




  DEFINE_STANDARD_RTTI(StepBasic_NamedUnit)

protected:




private: 


Handle_StepBasic_DimensionalExponents dimensions;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
