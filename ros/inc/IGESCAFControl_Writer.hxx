// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESCAFControl_Writer_HeaderFile
#define _IGESCAFControl_Writer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _IGESControl_Writer_HeaderFile
#include <IGESControl_Writer.hxx>
#endif
#ifndef _Handle_XSControl_WorkSession_HeaderFile
#include <Handle_XSControl_WorkSession.hxx>
#endif
#ifndef _Handle_TDocStd_Document_HeaderFile
#include <Handle_TDocStd_Document.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class XSControl_WorkSession;
class TDocStd_Document;
class TCollection_AsciiString;
class TopoDS_Shape;
class XCAFPrs_DataMapOfShapeStyle;
class XCAFPrs_DataMapOfStyleTransient;
class TopTools_MapOfShape;
class XCAFPrs_Style;


//! Provides a tool to write DECAF document to the <br>
//! IGES file. Besides transfer of shapes (including <br>
//! assemblies) provided by IGESControl, supports also <br>
//! colors and part names <br>
//! IGESCAFControl_Writer writer(); <br>
//!   Methods for writing IGES file: <br>
//! writer.Transfer (Document); <br>
//! writer.Write("filename") or writer.Write(OStream)  or <br>
//! writer.Perform(Document,"filename"); <br>
//!   Methods for managing the writing of attributes. <br>
//!   Colors <br>
//! writer.SetColorMode(colormode); <br>
//! Standard_Boolean colormode = writer.GetColorMode(); <br>
//!   Layers <br>
//! writer.SetLayerMode(layermode); <br>
//! Standard_Boolean layermode = writer.GetLayerMode(); <br>
//! Names <br>
//! writer.SetNameMode(namemode); <br>
//! Standard_Boolean namemode = writer.GetNameMode(); <br>
class IGESCAFControl_Writer  : public IGESControl_Writer {
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

  //! Creates a writer with an empty <br>
//! IGES model and sets ColorMode, LayerMode and NameMode to Standard_True. <br>
  Standard_EXPORT   IGESCAFControl_Writer();
  //! Creates a reader tool and attaches it to an already existing Session <br>
//!          Clears the session if it was not yet set for IGES <br>
  Standard_EXPORT   IGESCAFControl_Writer(const Handle(XSControl_WorkSession)& WS,const Standard_Boolean scratch = Standard_True);
  //! Transfers a document to a IGES model <br>
//!          Returns True if translation is OK <br>
  Standard_EXPORT     Standard_Boolean Transfer(const Handle(TDocStd_Document)& doc) ;
  
  Standard_EXPORT     Standard_Boolean Perform(const Handle(TDocStd_Document)& doc,const TCollection_AsciiString& filename) ;
  //! Transfers a document and writes it to a IGES file <br>
//!           Returns True if translation is OK <br>
  Standard_EXPORT     Standard_Boolean Perform(const Handle(TDocStd_Document)& doc,const Standard_CString filename) ;
  //! Set ColorMode for indicate write Colors or not. <br>
  Standard_EXPORT     void SetColorMode(const Standard_Boolean colormode) ;
  
  Standard_EXPORT     Standard_Boolean GetColorMode() const;
  //! Set NameMode for indicate write Name or not. <br>
  Standard_EXPORT     void SetNameMode(const Standard_Boolean namemode) ;
  
  Standard_EXPORT     Standard_Boolean GetNameMode() const;
  //! Set LayerMode for indicate write Layers or not. <br>
  Standard_EXPORT     void SetLayerMode(const Standard_Boolean layermode) ;
  
  Standard_EXPORT     Standard_Boolean GetLayerMode() const;





protected:

  //! Reads colors from DECAF document and assigns them <br>
//!          to corresponding IGES entities <br>
  Standard_EXPORT     Standard_Boolean WriteAttributes(const Handle(TDocStd_Document)& doc) ;
  //! Reads layers from DECAF document and assigns them <br>
//!          to corresponding IGES entities <br>
  Standard_EXPORT     Standard_Boolean WriteLayers(const Handle(TDocStd_Document)& doc) ;
  //! Recursivile iterates on subshapes and assign names <br>
//!          to IGES entity <br>
  Standard_EXPORT     Standard_Boolean WriteNames(const Handle(TDocStd_Document)& doc) ;




private:

  //! Recursively iterates on subshapes and assigns colors <br>
//!          to faces and edges (if set) <br>
  Standard_EXPORT     void MakeColors(const TopoDS_Shape& S,const XCAFPrs_DataMapOfShapeStyle& settings,XCAFPrs_DataMapOfStyleTransient& colors,TopTools_MapOfShape& Map,const XCAFPrs_Style& inherit) ;


Standard_Boolean myColorMode;
Standard_Boolean myNameMode;
Standard_Boolean myLayerMode;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
