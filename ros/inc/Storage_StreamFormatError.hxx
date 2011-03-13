// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_StreamFormatError_HeaderFile
#define _Storage_StreamFormatError_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_DefineException_HeaderFile
#include <Standard_DefineException.hxx>
#endif
#ifndef _Standard_SStream_HeaderFile
#include <Standard_SStream.hxx>
#endif

#ifndef _Standard_Failure_HeaderFile
#include <Standard_Failure.hxx>
#endif
#ifndef _Handle_Storage_StreamFormatError_HeaderFile
#include <Handle_Storage_StreamFormatError.hxx>
#endif

#if !defined No_Exception && !defined No_Storage_StreamFormatError
#define Storage_StreamFormatError_Raise_if(CONDITION,MESSAGE) \
  if (CONDITION) Storage_StreamFormatError::Raise(MESSAGE);
#else
#define Storage_StreamFormatError_Raise_if(CONDITION,MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Storage_StreamFormatError,Standard_Failure)

#endif
