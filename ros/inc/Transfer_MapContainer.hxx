// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_MapContainer_HeaderFile
#define _Transfer_MapContainer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Transfer_MapContainer_HeaderFile
#include <Handle_Transfer_MapContainer.hxx>
#endif

#ifndef _TColStd_DataMapOfTransientTransient_HeaderFile
#include <TColStd_DataMapOfTransientTransient.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TColStd_DataMapOfTransientTransient;



class Transfer_MapContainer : public MMgt_TShared {

public:

  
  Standard_EXPORT   Transfer_MapContainer();
  //!Set map already translated geometry objects. <br>
  Standard_EXPORT     void SetMapObjects(TColStd_DataMapOfTransientTransient& theMapObjects) ;
  //!Get map already translated geometry objects. <br>
  Standard_EXPORT     TColStd_DataMapOfTransientTransient& GetMapObjects() ;




  DEFINE_STANDARD_RTTI(Transfer_MapContainer)

protected:




private: 


TColStd_DataMapOfTransientTransient myMapObj;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
