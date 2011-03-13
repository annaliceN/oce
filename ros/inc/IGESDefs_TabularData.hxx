// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDefs_TabularData_HeaderFile
#define _IGESDefs_TabularData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDefs_TabularData_HeaderFile
#include <Handle_IGESDefs_TabularData.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_IGESBasic_HArray1OfHArray1OfReal_HeaderFile
#include <Handle_IGESBasic_HArray1OfHArray1OfReal.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
class TColStd_HArray1OfInteger;
class IGESBasic_HArray1OfHArray1OfReal;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class TColStd_HArray1OfReal;


//! Defines IGES Tabular Data, Type <406> Form <11>, <br>
//!          in package IGESDefs <br>
//!          This Class is used to provide a Structure to accomodate <br>
//!          point form data. <br>
class IGESDefs_TabularData : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDefs_TabularData();
  //! This method is used to set the fields of the class <br>
//!           TabularData <br>
//!       - nbProps     : Number of property values <br>
//!       - propType    : Property Type <br>
//!       - typesInd    : Type of independent variables <br>
//!       - nbValuesInd : Number of values of independent variables <br>
//!       - valuesInd   : Values of independent variables <br>
//!       - valuesDep   : Values of dependent variables <br>
//! raises exception if lengths of typeInd and nbValuesInd are not same <br>
  Standard_EXPORT     void Init(const Standard_Integer nbProps,const Standard_Integer propType,const Handle(TColStd_HArray1OfInteger)& typesInd,const Handle(TColStd_HArray1OfInteger)& nbValuesInd,const Handle(IGESBasic_HArray1OfHArray1OfReal)& valuesInd,const Handle(IGESBasic_HArray1OfHArray1OfReal)& valuesDep) ;
  //! returns the number of property values (recorded) <br>
  Standard_EXPORT     Standard_Integer NbPropertyValues() const;
  //! determines the number of property values required <br>
  Standard_EXPORT     Standard_Integer ComputedNbPropertyValues() const;
  //! checks, and correct as necessary, the number of property <br>
//!           values. Returns True if corrected, False if already OK <br>
  Standard_EXPORT     Standard_Boolean OwnCorrect() ;
  //! returns the property type <br>
  Standard_EXPORT     Standard_Integer PropertyType() const;
  //! returns the number of dependent variables <br>
  Standard_EXPORT     Standard_Integer NbDependents() const;
  //! returns the number of independent variables <br>
  Standard_EXPORT     Standard_Integer NbIndependents() const;
  //! returns the type of the num'th independent variable <br>
//! raises exception if num <= 0 or num > NbIndependents() <br>
  Standard_EXPORT     Standard_Integer TypeOfIndependents(const Standard_Integer num) const;
  //! returns the number of different values of the num'th indep. variable <br>
//! raises exception if num <= 0 or num > NbIndependents() <br>
  Standard_EXPORT     Standard_Integer NbValues(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Real IndependentValue(const Standard_Integer variablenum,const Standard_Integer valuenum) const;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfReal DependentValues(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Real DependentValue(const Standard_Integer variablenum,const Standard_Integer valuenum) const;




  DEFINE_STANDARD_RTTI(IGESDefs_TabularData)

protected:




private: 


Standard_Integer theNbPropertyValues;
Standard_Integer thePropertyType;
Handle_TColStd_HArray1OfInteger theTypeOfIndependentVariables;
Handle_TColStd_HArray1OfInteger theNbValues;
Handle_IGESBasic_HArray1OfHArray1OfReal theIndependentValues;
Handle_IGESBasic_HArray1OfHArray1OfReal theDependentValues;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
