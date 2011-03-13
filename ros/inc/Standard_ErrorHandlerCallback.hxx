// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Standard_ErrorHandlerCallback_HeaderFile
#define _Standard_ErrorHandlerCallback_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_ErrorHandler;


//! Defines a base class for callback objects that can be registered <br>
//!          in the OCC error handler (the class simulating C++ exceptions) <br>
//!          so as to be correctly destroyed when error handler is activated. <br>
class Standard_ErrorHandlerCallback  {
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

  //! Registers this callback object in the current error handler <br>
//!          (if found). <br>
        void RegisterCallback() ;
  //! Unregisters this callback object from the error handler. <br>
        void UnregisterCallback() ;
virtual Standard_EXPORT ~Standard_ErrorHandlerCallback ();
  //! The callback function to perform necessary callback action. <br>
//!          Called by the exception handler when it is being destroyed but <br>
//!          still has this callback registered. <br>
  Standard_EXPORT   virtual  void DestroyCallback()  = 0;


friend class Standard_ErrorHandler;



protected:

  //! Empty constructor <br>
      Standard_ErrorHandlerCallback();




private:



Standard_Address myHandler;
Standard_Address myPrev;
Standard_Address myNext;


};


#include <Standard_ErrorHandlerCallback.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
