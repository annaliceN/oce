// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepDimTol_ShapeToleranceSelect_HeaderFile
#define _StepDimTol_ShapeToleranceSelect_HeaderFile

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
#ifndef _Handle_StepDimTol_GeometricTolerance_HeaderFile
#include <Handle_StepDimTol_GeometricTolerance.hxx>
#endif
#ifndef _Handle_StepShape_PlusMinusTolerance_HeaderFile
#include <Handle_StepShape_PlusMinusTolerance.hxx>
#endif
class Standard_Transient;
class StepDimTol_GeometricTolerance;
class StepShape_PlusMinusTolerance;


//! Representation of STEP SELECT type ShapeToleranceSelect <br>
class StepDimTol_ShapeToleranceSelect  : public StepData_SelectType {
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
  Standard_EXPORT   StepDimTol_ShapeToleranceSelect();
  //! Recognizes a kind of ShapeToleranceSelect select type <br>
//!          1 -> GeometricTolerance from StepDimTol <br>
//!          2 -> PlusMinusTolerance from StepShape <br>
//!          0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! Returns Value as GeometricTolerance (or Null if another type) <br>
  Standard_EXPORT     Handle_StepDimTol_GeometricTolerance GeometricTolerance() const;
  //! Returns Value as PlusMinusTolerance (or Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_PlusMinusTolerance PlusMinusTolerance() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
