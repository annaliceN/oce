// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Resource_NoSuchResource_HeaderFile
#define _Resource_NoSuchResource_HeaderFile

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

#ifndef _Standard_NoSuchObject_HeaderFile
#include <Standard_NoSuchObject.hxx>
#endif
#ifndef _Handle_Resource_NoSuchResource_HeaderFile
#include <Handle_Resource_NoSuchResource.hxx>
#endif

#if !defined No_Exception && !defined No_Resource_NoSuchResource
#define Resource_NoSuchResource_Raise_if(CONDITION,MESSAGE) \
  if (CONDITION) Resource_NoSuchResource::Raise(MESSAGE);
#else
#define Resource_NoSuchResource_Raise_if(CONDITION,MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Resource_NoSuchResource,Standard_NoSuchObject)

#endif
