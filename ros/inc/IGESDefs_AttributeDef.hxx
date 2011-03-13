// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDefs_AttributeDef_HeaderFile
#define _IGESDefs_AttributeDef_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDefs_AttributeDef_HeaderFile
#include <Handle_IGESDefs_AttributeDef.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfTransient_HeaderFile
#include <Handle_TColStd_HArray1OfTransient.hxx>
#endif
#ifndef _Handle_IGESDefs_HArray1OfHArray1OfTextDisplayTemplate_HeaderFile
#include <Handle_IGESDefs_HArray1OfHArray1OfTextDisplayTemplate.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESGraph_TextDisplayTemplate_HeaderFile
#include <Handle_IGESGraph_TextDisplayTemplate.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
class TCollection_HAsciiString;
class TColStd_HArray1OfInteger;
class TColStd_HArray1OfTransient;
class IGESDefs_HArray1OfHArray1OfTextDisplayTemplate;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_NullObject;
class IGESGraph_TextDisplayTemplate;
class Standard_Transient;
class IGESData_IGESEntity;


//! defines IGES Attribute Table Definition Entity, <br>
//!          Type <322> Form [0, 1, 2] in package IGESDefs. <br>
//!          This is class is used to support the concept of well <br>
//!          defined collection of attributes, whether it is a table <br>
//!          or a single row of attributes. <br>
class IGESDefs_AttributeDef : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDefs_AttributeDef();
  
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aName,const Standard_Integer aListType,const Handle(TColStd_HArray1OfInteger)& attrTypes,const Handle(TColStd_HArray1OfInteger)& attrValueDataTypes,const Handle(TColStd_HArray1OfInteger)& attrValueCounts,const Handle(TColStd_HArray1OfTransient)& attrValues,const Handle(IGESDefs_HArray1OfHArray1OfTextDisplayTemplate)& attrValuePointers) ;
  //! Returns True if a Table Name is defined <br>
  Standard_EXPORT     Standard_Boolean HasTableName() const;
  //! returns the Attribute Table name, or comment <br>
//! (default = null, no name : seeHasTableName) <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString TableName() const;
  //! returns the Attribute List Type <br>
  Standard_EXPORT     Standard_Integer ListType() const;
  //! returns the Number of Attributes <br>
  Standard_EXPORT     Standard_Integer NbAttributes() const;
  //! returns the num'th Attribute Type <br>
//! raises exception if num <= 0 or num > NbAttributes() <br>
  Standard_EXPORT     Standard_Integer AttributeType(const Standard_Integer num) const;
  //! returns the num'th Attribute value data type <br>
//! raises exception if num <= 0 or num > NbAttributes() <br>
  Standard_EXPORT     Standard_Integer AttributeValueDataType(const Standard_Integer num) const;
  //! returns the num'th Attribute value count <br>
//! raises exception if num <= 0 or num > NbAttributes() <br>
  Standard_EXPORT     Standard_Integer AttributeValueCount(const Standard_Integer num) const;
  //! returns false if Values are defined (i.e. for Form = 1 or 2) <br>
  Standard_EXPORT     Standard_Boolean HasValues() const;
  //! returns false if TextDisplays are defined (i.e. for Form = 2) <br>
  Standard_EXPORT     Standard_Boolean HasTextDisplay() const;
  
  Standard_EXPORT     Handle_IGESGraph_TextDisplayTemplate AttributeTextDisplay(const Standard_Integer AttrNum,const Standard_Integer PointerNum) const;
  //! Returns the List of Attributes <AttrNum>, as a Transient. <br>//!           Its effective Type depends of the Type of Attribute : <br>
//!           HArray1OfInteger for Integer, Logical(0-1), <br>
//!           HArray1OfReal for Real, HArray1OfHSaciiString for String, <br>
//!           HArray1OfIGESEntity for Entity (Pointer) <br>
//!           See methods AttributeAs... for an accurate access <br>
  Standard_EXPORT     Handle_Standard_Transient AttributeList(const Standard_Integer AttrNum) const;
  //! Returns Attribute Value <AttrNum, rank ValueNum> as an Integer <br>//!   Error if Indices out of Range, or no Value defined, or not an Integer <br>
  Standard_EXPORT     Standard_Integer AttributeAsInteger(const Standard_Integer AttrNum,const Standard_Integer ValueNum) const;
  //! Returns Attribute Value <AttrNum, rank ValueNum> as a Real <br>//!   Error if Indices out of Range, or no Value defined, or not a Real <br>
  Standard_EXPORT     Standard_Real AttributeAsReal(const Standard_Integer AttrNum,const Standard_Integer ValueNum) const;
  //! Returns Attribute Value <AttrNum, rank ValueNum> as an Integer <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString AttributeAsString(const Standard_Integer AttrNum,const Standard_Integer ValueNum) const;
  //! Returns Attribute Value <AttrNum, rank ValueNum> as an Entity <br>//!   Error if Indices out of Range, or no Value defined, or not a Entity <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity AttributeAsEntity(const Standard_Integer AttrNum,const Standard_Integer ValueNum) const;
  //! Returns Attribute Value <AttrNum, rank ValueNum> as a Boolean <br>//!   Error if Indices out of Range, or no Value defined, or not a Logical <br>
  Standard_EXPORT     Standard_Boolean AttributeAsLogical(const Standard_Integer AttrNum,const Standard_Integer ValueNum) const;




  DEFINE_STANDARD_RTTI(IGESDefs_AttributeDef)

protected:




private: 


Handle_TCollection_HAsciiString theName;
Standard_Integer theListType;
Handle_TColStd_HArray1OfInteger theAttrTypes;
Handle_TColStd_HArray1OfInteger theAttrValueDataTypes;
Handle_TColStd_HArray1OfInteger theAttrValueCounts;
Handle_TColStd_HArray1OfTransient theAttrValues;
Handle_IGESDefs_HArray1OfHArray1OfTextDisplayTemplate theAttrValuePointers;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
