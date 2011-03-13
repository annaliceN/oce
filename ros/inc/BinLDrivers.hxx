// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinLDrivers_HeaderFile
#define _BinLDrivers_HeaderFile

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
class BinLDrivers_DocumentStorageDriver;
class BinLDrivers_DocumentRetrievalDriver;
class BinLDrivers_DocumentSection;



class BinLDrivers  {
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
  //! Creates a table of the supported drivers' types <br>
  Standard_EXPORT   static  Handle_BinMDF_ADriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& MsgDrv) ;
  //! returns last storage version <br>
  Standard_EXPORT   static  TCollection_AsciiString StorageVersion() ;





protected:





private:




friend class BinLDrivers_DocumentStorageDriver;
friend class BinLDrivers_DocumentRetrievalDriver;
friend class BinLDrivers_DocumentSection;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
