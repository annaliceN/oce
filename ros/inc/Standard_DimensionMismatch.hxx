// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Standard_DimensionMismatch_HeaderFile
#define _Standard_DimensionMismatch_HeaderFile

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

#ifndef _Standard_DimensionError_HeaderFile
#include <Standard_DimensionError.hxx>
#endif
#ifndef _Handle_Standard_DimensionMismatch_HeaderFile
#include <Handle_Standard_DimensionMismatch.hxx>
#endif

#if !defined No_Exception && !defined No_Standard_DimensionMismatch
#define Standard_DimensionMismatch_Raise_if(CONDITION,MESSAGE) \
  if (CONDITION) Standard_DimensionMismatch::Raise(MESSAGE);
#else
#define Standard_DimensionMismatch_Raise_if(CONDITION,MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Standard_DimensionMismatch,Standard_DimensionError)

#endif
