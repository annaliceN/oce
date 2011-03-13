// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDSToStep_HeaderFile
#define _TopoDSToStep_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _TopoDSToStep_BuilderError_HeaderFile
#include <TopoDSToStep_BuilderError.hxx>
#endif
#ifndef _TopoDSToStep_MakeFaceError_HeaderFile
#include <TopoDSToStep_MakeFaceError.hxx>
#endif
#ifndef _TopoDSToStep_MakeWireError_HeaderFile
#include <TopoDSToStep_MakeWireError.hxx>
#endif
#ifndef _TopoDSToStep_MakeEdgeError_HeaderFile
#include <TopoDSToStep_MakeEdgeError.hxx>
#endif
#ifndef _TopoDSToStep_MakeVertexError_HeaderFile
#include <TopoDSToStep_MakeVertexError.hxx>
#endif
#ifndef _Handle_Transfer_FinderProcess_HeaderFile
#include <Handle_Transfer_FinderProcess.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class TCollection_HAsciiString;
class Transfer_FinderProcess;
class TopoDS_Shape;
class Standard_Transient;
class TopoDSToStep_Tool;
class TopoDSToStep_Root;
class TopoDSToStep_MakeManifoldSolidBrep;
class TopoDSToStep_MakeBrepWithVoids;
class TopoDSToStep_MakeFacetedBrep;
class TopoDSToStep_MakeFacetedBrepAndBrepWithVoids;
class TopoDSToStep_MakeShellBasedSurfaceModel;
class TopoDSToStep_MakeGeometricCurveSet;
class TopoDSToStep_Builder;
class TopoDSToStep_WireframeBuilder;
class TopoDSToStep_Tool;
class TopoDSToStep_FacetedTool;
class TopoDSToStep_MakeStepFace;
class TopoDSToStep_MakeStepWire;
class TopoDSToStep_MakeStepEdge;
class TopoDSToStep_MakeStepVertex;


//! This package implements the mapping between CAS.CAD <br>
//!  Shape representation and AP214 Shape Representation. <br>
//!  The target schema is pms_c4 (a subset of AP214) <br>
//! <br>
//!  How to use this Package : <br>
//! <br>
//!  Entry point are context dependent. It can be : <br>
//!     MakeManifoldSolidBrep <br>
//!     MakeBrepWithVoids <br>
//!     MakeFacetedBrep <br>
//!     MakeFacetedBrepAndBrepWithVoids <br>
//!     MakeShellBasedSurfaceModel <br>
//!  Each of these classes call the Builder <br>
//!  The class tool centralizes some common informations. <br>
class TopoDSToStep  {
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

  
  Standard_EXPORT   static  Handle_TCollection_HAsciiString DecodeBuilderError(const TopoDSToStep_BuilderError E) ;
  
  Standard_EXPORT   static  Handle_TCollection_HAsciiString DecodeFaceError(const TopoDSToStep_MakeFaceError E) ;
  
  Standard_EXPORT   static  Handle_TCollection_HAsciiString DecodeWireError(const TopoDSToStep_MakeWireError E) ;
  
  Standard_EXPORT   static  Handle_TCollection_HAsciiString DecodeEdgeError(const TopoDSToStep_MakeEdgeError E) ;
  //! Returns a new shape without undirect surfaces. <br>
  Standard_EXPORT   static  Handle_TCollection_HAsciiString DecodeVertexError(const TopoDSToStep_MakeVertexError E) ;
  //! Adds an entity into the list of results (binders) for <br>
//!          shape stored in FinderProcess <br>
  Standard_EXPORT   static  void AddResult(const Handle(Transfer_FinderProcess)& FP,const TopoDS_Shape& Shape,const Handle(Standard_Transient)& entity) ;
  //! Adds all entities recorded in Tool into the map of results <br>
//!          (binders) stored in FinderProcess <br>
  Standard_EXPORT   static  void AddResult(const Handle(Transfer_FinderProcess)& FP,const TopoDSToStep_Tool& Tool) ;





protected:





private:




friend class TopoDSToStep_Root;
friend class TopoDSToStep_MakeManifoldSolidBrep;
friend class TopoDSToStep_MakeBrepWithVoids;
friend class TopoDSToStep_MakeFacetedBrep;
friend class TopoDSToStep_MakeFacetedBrepAndBrepWithVoids;
friend class TopoDSToStep_MakeShellBasedSurfaceModel;
friend class TopoDSToStep_MakeGeometricCurveSet;
friend class TopoDSToStep_Builder;
friend class TopoDSToStep_WireframeBuilder;
friend class TopoDSToStep_Tool;
friend class TopoDSToStep_FacetedTool;
friend class TopoDSToStep_MakeStepFace;
friend class TopoDSToStep_MakeStepWire;
friend class TopoDSToStep_MakeStepEdge;
friend class TopoDSToStep_MakeStepVertex;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
