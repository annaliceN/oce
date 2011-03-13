// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_ExternalRefFileName_HeaderFile
#define _IGESBasic_ExternalRefFileName_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESBasic_ExternalRefFileName_HeaderFile
#include <Handle_IGESBasic_ExternalRefFileName.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TCollection_HAsciiString;


//! defines ExternalRefFileName, Type <416> Form <0-2> <br>
//!          in package IGESBasic <br>
//!          Used when single definition from the reference file is <br>
//!          required or for external logical references where an <br>
//!          entity in one file relates to an entity in another file <br>
class IGESBasic_ExternalRefFileName : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESBasic_ExternalRefFileName();
  //! This method is used to set the fields of the class <br>
//!           ExternalRefFileName <br>
//!       - aFileIdent : External Reference File Identifier <br>
//!       - anExtName  : External Reference Entity Symbolic Name <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aFileIdent,const Handle(TCollection_HAsciiString)& anExtName) ;
  //! Changes FormNumber to be 2 if <mode> is True (For Entity) <br>
//!           or 0 if <mode> is False (For Definition) <br>
  Standard_EXPORT     void SetForEntity(const Standard_Boolean mode) ;
  //! returns External Reference File Identifier <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString FileId() const;
  //! returns External Reference Entity Symbolic Name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString ReferenceName() const;




  DEFINE_STANDARD_RTTI(IGESBasic_ExternalRefFileName)

protected:




private: 


Handle_TCollection_HAsciiString theExtRefFileIdentifier;
Handle_TCollection_HAsciiString theExtRefEntitySymbName;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
