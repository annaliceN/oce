// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_BadAccess_HeaderFile
#define _Aspect_BadAccess_HeaderFile

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

#ifndef _Standard_DomainError_HeaderFile
#include <Standard_DomainError.hxx>
#endif
#ifndef _Handle_Aspect_BadAccess_HeaderFile
#include <Handle_Aspect_BadAccess.hxx>
#endif

#if !defined No_Exception && !defined No_Aspect_BadAccess
#define Aspect_BadAccess_Raise_if(CONDITION,MESSAGE) \
  if (CONDITION) Aspect_BadAccess::Raise(MESSAGE);
#else
#define Aspect_BadAccess_Raise_if(CONDITION,MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Aspect_BadAccess,Standard_DomainError)

#endif
