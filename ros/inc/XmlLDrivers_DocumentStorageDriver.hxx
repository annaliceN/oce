// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlLDrivers_DocumentStorageDriver_HeaderFile
#define _XmlLDrivers_DocumentStorageDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XmlLDrivers_DocumentStorageDriver_HeaderFile
#include <Handle_XmlLDrivers_DocumentStorageDriver.hxx>
#endif

#ifndef _Handle_XmlMDF_ADriverTable_HeaderFile
#include <Handle_XmlMDF_ADriverTable.hxx>
#endif
#ifndef _XmlLDrivers_SequenceOfNamespaceDef_HeaderFile
#include <XmlLDrivers_SequenceOfNamespaceDef.hxx>
#endif
#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _XmlObjMgt_SRelocationTable_HeaderFile
#include <XmlObjMgt_SRelocationTable.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _PCDM_StorageDriver_HeaderFile
#include <PCDM_StorageDriver.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _XmlObjMgt_Element_HeaderFile
#include <XmlObjMgt_Element.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
class XmlMDF_ADriverTable;
class TCollection_ExtendedString;
class CDM_Document;
class TCollection_AsciiString;
class CDM_MessageDriver;



class XmlLDrivers_DocumentStorageDriver : public PCDM_StorageDriver {

public:

  
  Standard_EXPORT   XmlLDrivers_DocumentStorageDriver(const TCollection_ExtendedString& theCopyright);
  
  Standard_EXPORT   virtual  TCollection_ExtendedString SchemaName() const;
  
  Standard_EXPORT   virtual  void Write(const Handle(CDM_Document)& theDocument,const TCollection_ExtendedString& theFileName) ;
  
  Standard_EXPORT     Standard_Boolean IsError() const;
  
  Standard_EXPORT   virtual  Handle_XmlMDF_ADriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& theMsgDriver) ;




  DEFINE_STANDARD_RTTI(XmlLDrivers_DocumentStorageDriver)

protected:

  
  Standard_EXPORT   virtual  Standard_Boolean WriteToDomDocument(const Handle(CDM_Document)& theDocument,XmlObjMgt_Element& thePDoc,const TCollection_ExtendedString& theFileName) ;
  
  Standard_EXPORT   virtual  Standard_Integer MakeDocument(const Handle(CDM_Document)& theDocument,XmlObjMgt_Element& thePDoc) ;
  
  Standard_EXPORT     void AddNamespace(const TCollection_AsciiString& thePrefix,const TCollection_AsciiString& theURI) ;
  
  Standard_EXPORT   virtual  Standard_Boolean WriteShapeSection(XmlObjMgt_Element& thePDoc) ;

Handle_XmlMDF_ADriverTable myDrivers;
XmlObjMgt_SRelocationTable myRelocTable;
Standard_Boolean myIsError;


private: 


XmlLDrivers_SequenceOfNamespaceDef mySeqOfNS;
TCollection_ExtendedString myCopyright;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
