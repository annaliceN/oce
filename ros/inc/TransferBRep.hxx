// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TransferBRep_HeaderFile
#define _TransferBRep_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Transfer_Binder_HeaderFile
#include <Handle_Transfer_Binder.hxx>
#endif
#ifndef _Handle_Transfer_TransientProcess_HeaderFile
#include <Handle_Transfer_TransientProcess.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_TopTools_HSequenceOfShape_HeaderFile
#include <Handle_TopTools_HSequenceOfShape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfTransient_HeaderFile
#include <Handle_TColStd_HSequenceOfTransient.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Handle_Transfer_FinderProcess_HeaderFile
#include <Handle_Transfer_FinderProcess.hxx>
#endif
#ifndef _Handle_TransferBRep_ShapeMapper_HeaderFile
#include <Handle_TransferBRep_ShapeMapper.hxx>
#endif
#ifndef _Handle_TransferBRep_HSequenceOfTransferResultInfo_HeaderFile
#include <Handle_TransferBRep_HSequenceOfTransferResultInfo.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfInteger_HeaderFile
#include <Handle_TColStd_HSequenceOfInteger.hxx>
#endif
#ifndef _Handle_Message_Printer_HeaderFile
#include <Handle_Message_Printer.hxx>
#endif
#ifndef _Handle_TransferBRep_TransferResultInfo_HeaderFile
#include <Handle_TransferBRep_TransferResultInfo.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
class TopoDS_Shape;
class Transfer_Binder;
class Transfer_TransientProcess;
class Standard_Transient;
class TopTools_HSequenceOfShape;
class TColStd_HSequenceOfTransient;
class Transfer_FinderProcess;
class TransferBRep_ShapeMapper;
class TransferBRep_HSequenceOfTransferResultInfo;
class TColStd_HSequenceOfInteger;
class Message_Printer;
class Message_Msg;
class TransferBRep_TransferResultInfo;
class Interface_CheckIterator;
class Interface_InterfaceModel;
class TransferBRep_Reader;
class TransferBRep_ShapeInfo;
class TransferBRep_BinderOfShape;
class TransferBRep_ShapeBinder;
class TransferBRep_ShapeListBinder;
class TransferBRep_ShapeMapper;
class TransferBRep_OrientedShapeMapper;
class TransferBRep_TransferResultInfo;
class TransferBRep_SequenceOfTransferResultInfo;
class TransferBRep_HSequenceOfTransferResultInfo;
class TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo;


//! This package gathers services to simply read files and convert <br>
//!           them to Shapes from CasCade. IE. it can be used in conjunction <br>
//!           with purely CasCade software <br>
class TransferBRep  {
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

  //! Get the Shape recorded in a Binder <br>
//!           If the Binder brings a multiple result, search for the Shape <br>
  Standard_EXPORT   static  TopoDS_Shape ShapeResult(const Handle(Transfer_Binder)& binder) ;
  //! Get the Shape recorded in a TransientProcess as result of the <br>
//!           Transfer of an entity. I.E. in the binder bound to that Entity <br>
//!           If no result or result not a single Shape, returns a Null Shape <br>
  Standard_EXPORT   static  TopoDS_Shape ShapeResult(const Handle(Transfer_TransientProcess)& TP,const Handle(Standard_Transient)& ent) ;
  //! Sets a Shape as a result for a starting entity <ent> <br>
//!           (reverse of ShapeResult) <br>
//!           It simply creates a ShapeBinder then binds it to the entity <br>
  Standard_EXPORT   static  void SetShapeResult(const Handle(Transfer_TransientProcess)& TP,const Handle(Standard_Transient)& ent,const TopoDS_Shape& result) ;
  //! Gets the Shapes recorded in a TransientProcess as result of a <br>
//!           Transfer, considers roots only or all results according <br>
//!           <rootsonly>, returns them as a HSequence <br>
  Standard_EXPORT   static  Handle_TopTools_HSequenceOfShape Shapes(const Handle(Transfer_TransientProcess)& TP,const Standard_Boolean rootsonly = Standard_True) ;
  //! Gets the Shapes recorded in a TransientProcess as result of a <br>
//!           Transfer, for a given list of starting entities, returns <br>
//!           the shapes as a HSequence <br>
  Standard_EXPORT   static  Handle_TopTools_HSequenceOfShape Shapes(const Handle(Transfer_TransientProcess)& TP,const Handle(TColStd_HSequenceOfTransient)& list) ;
  //! Returns a Status regarding a Shape in a FinderProcess <br>
//!           - FORWARD means bound with SAME Orientation <br>
//!           - REVERSED means bound with REVERSE Orientation <br>
//!           - EXTERNAL means NOT BOUND <br>
//!           - INTERNAL is not used <br>
  Standard_EXPORT   static  TopAbs_Orientation ShapeState(const Handle(Transfer_FinderProcess)& FP,const TopoDS_Shape& shape) ;
  //! Returns the result (as a Binder) attached to a given Shape <br>
//!           Null if none <br>
  Standard_EXPORT   static  Handle_Transfer_Binder ResultFromShape(const Handle(Transfer_FinderProcess)& FP,const TopoDS_Shape& shape) ;
  //! Returns the result as pure Transient attached to a Shape <br>
//!           first one if multiple result <br>
  Standard_EXPORT   static  Handle_Standard_Transient TransientFromShape(const Handle(Transfer_FinderProcess)& FP,const TopoDS_Shape& shape) ;
  //! Binds a Transient Result to a Shape in a FinderProcess <br>
//!           (as first result if multiple : does not add it to existing one) <br>
  Standard_EXPORT   static  void SetTransientFromShape(const Handle(Transfer_FinderProcess)& FP,const TopoDS_Shape& shape,const Handle(Standard_Transient)& result) ;
  //! Returns a ShapeMapper for a given Shape (location included) <br>
//!           Either <shape> is already mapped, then its Mapper is returned <br>
//!           Or it is not, then a new one is created then returned, BUT <br>
//!             it is not mapped here (use Bind or FindElseBind to do this) <br>
  Standard_EXPORT   static  Handle_TransferBRep_ShapeMapper ShapeMapper(const Handle(Transfer_FinderProcess)& FP,const TopoDS_Shape& shape) ;
  //! Fills sequence of TransferResultInfo for each type of entity <br>
//!          given in the EntityTypes (entity are given as objects). <br>
//!          Method IsKind applied to the entities in TP is used to <br>
//!          compare with entities in EntityTypes. <br>
//!          TopAbs_ShapeEnum). <br>
  Standard_EXPORT   static  void TransferResultInfo(const Handle(Transfer_TransientProcess)& TP,const Handle(TColStd_HSequenceOfTransient)& EntityTypes,Handle(TransferBRep_HSequenceOfTransferResultInfo)& InfoSeq) ;
  //! Fills sequence of TransferResultInfo for each type of shape <br>
//!          given in the ShapeTypes (which are in fact considered as <br>
//!          TopAbs_ShapeEnum). <br>
//!          The Finders in the FP are considered as ShapeMappers. <br>
  Standard_EXPORT   static  void TransferResultInfo(const Handle(Transfer_FinderProcess)& FP,const Handle(TColStd_HSequenceOfInteger)& ShapeTypes,Handle(TransferBRep_HSequenceOfTransferResultInfo)& InfoSeq) ;
  //! Prints the results of transfer to given priner with given header. <br>
  Standard_EXPORT   static  void PrintResultInfo(const Handle(Message_Printer)& Printer,const Message_Msg& Header,const Handle(TransferBRep_TransferResultInfo)& ResultInfo,const Standard_Boolean printEmpty = Standard_True) ;
  //! Performs a heavy check by calling the Analyser from BRepCheck <br>
//!           This tool computes a lot of informations about integrity of a <br>
//!           Shape. This method uses it and converts its internal result <br>
//!           to a classic check-list. <br>
//!           <lev> allows to get more informations : <br>
//!            0 : BRepCheck only <br>
//!            1(D) + Curves/Surfaces not C0  ;  2 + SameParameter on Edges <br>
//!  Warning : entities to which checks are bound are the Shapes themselves, <br>
//!           embedded in ShapeMapper <br>
  Standard_EXPORT   static  Interface_CheckIterator BRepCheck(const TopoDS_Shape& shape,const Standard_Integer lev = 1) ;
  //! Takes a starting CheckIterator which brings checks bound with <br>
//!           starting objects (Shapes, Transient from an Imagine appli ...) <br>
//!           and converts it to a CheckIterator in which checks are bound <br>
//!           with results in an InterfaceModel <br>
//!           Mapping is recorded in the FinderProcess <br>
//!           Starting objects for which no individual result is recorded <br>
//!           remain in their state <br>
  Standard_EXPORT   static  Interface_CheckIterator ResultCheckList(const Interface_CheckIterator& chl,const Handle(Transfer_FinderProcess)& FP,const Handle(Interface_InterfaceModel)& model) ;
  //! Returns the list of objects to which a non-empty Check is <br>
//!           bound in a check-list. Objects are transients, they can then <br>
//!           be either Imagine objects entities for an Interface Norm. <br>
//!           <alsoshapes> commands Shapes to be returned too <br>
//!           (as ShapeMapper), see also CheckedShapes <br>
  Standard_EXPORT   static  Handle_TColStd_HSequenceOfTransient Checked(const Interface_CheckIterator& chl,const Standard_Boolean alsoshapes = Standard_False) ;
  //! Returns the list of shapes to which a non-empty Check is bound <br>
//!           in a check-list <br>
  Standard_EXPORT   static  Handle_TopTools_HSequenceOfShape CheckedShapes(const Interface_CheckIterator& chl) ;
  //! Returns the check-list bound to a given object, generally none <br>
//!           (if OK) or one check. <obj> can be, either a true Transient <br>
//!           object or entity, or a ShapeMapper, in that case the Shape is <br>
//!           considered <br>
  Standard_EXPORT   static  Interface_CheckIterator CheckObject(const Interface_CheckIterator& chl,const Handle(Standard_Transient)& obj) ;





protected:





private:




friend class TransferBRep_Reader;
friend class TransferBRep_ShapeInfo;
friend class TransferBRep_BinderOfShape;
friend class TransferBRep_ShapeBinder;
friend class TransferBRep_ShapeListBinder;
friend class TransferBRep_ShapeMapper;
friend class TransferBRep_OrientedShapeMapper;
friend class TransferBRep_TransferResultInfo;
friend class TransferBRep_SequenceOfTransferResultInfo;
friend class TransferBRep_HSequenceOfTransferResultInfo;
friend class TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
