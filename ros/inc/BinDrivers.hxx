// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinDrivers_HeaderFile
#define _BinDrivers_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_BinMDF_ADriverTable_HeaderFile
#include <Handle_BinMDF_ADriverTable.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
class Standard_Transient;
class Standard_GUID;
class BinMDF_ADriverTable;
class CDM_MessageDriver;
class TCollection_AsciiString;
class BinDrivers_DocumentStorageDriver;
class BinDrivers_DocumentRetrievalDriver;



class BinDrivers  {
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

  
  Standard_EXPORT   static  Handle_Standard_Transient Factory(const Standard_GUID& theGUID) ;
  //! Creates the table of drivers of types supported <br>
  Standard_EXPORT   static  Handle_BinMDF_ADriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& MsgDrv) ;
  //! returns "1" <br>
  Standard_EXPORT   static  TCollection_AsciiString StorageVersion() ;





protected:





private:




friend class BinDrivers_DocumentStorageDriver;
friend class BinDrivers_DocumentRetrievalDriver;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
