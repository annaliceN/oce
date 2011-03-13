// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PrsMgr_PresentationManager2d_HeaderFile
#define _PrsMgr_PresentationManager2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager2d_HeaderFile
#include <Handle_PrsMgr_PresentationManager2d.hxx>
#endif

#ifndef _Handle_Graphic2d_View_HeaderFile
#include <Handle_Graphic2d_View.hxx>
#endif
#ifndef _Handle_Graphic2d_DisplayList_HeaderFile
#include <Handle_Graphic2d_DisplayList.hxx>
#endif
#ifndef _Handle_Graphic2d_TransientManager_HeaderFile
#include <Handle_Graphic2d_TransientManager.hxx>
#endif
#ifndef _TColStd_ListOfTransient_HeaderFile
#include <TColStd_ListOfTransient.hxx>
#endif
#ifndef _PrsMgr_PresentationManager_HeaderFile
#include <PrsMgr_PresentationManager.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentableObject_HeaderFile
#include <Handle_PrsMgr_PresentableObject.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Handle_Viewer_View_HeaderFile
#include <Handle_Viewer_View.hxx>
#endif
#ifndef _Handle_Graphic2d_Buffer_HeaderFile
#include <Handle_Graphic2d_Buffer.hxx>
#endif
#ifndef _Handle_PrsMgr_Presentation2d_HeaderFile
#include <Handle_PrsMgr_Presentation2d.hxx>
#endif
#ifndef _Handle_PrsMgr_Presentation_HeaderFile
#include <Handle_PrsMgr_Presentation.hxx>
#endif
class Graphic2d_View;
class Graphic2d_DisplayList;
class Graphic2d_TransientManager;
class PrsMgr_PresentableObject;
class Graphic2d_GraphicObject;
class Viewer_View;
class Graphic2d_Buffer;
class PrsMgr_Presentation2d;
class PrsMgr_Presentation;


//! A framework to manage 2D displays, graphic entities <br>
//! and their updates. Plotters, Highlights, Minima <br>
//! maxima, immediate display (of transient graphic data???]. <br>
class PrsMgr_PresentationManager2d : public PrsMgr_PresentationManager {

public:

  //! Creates a framework to manage displays and graphic <br>
//! entities with the 2D view aStructureManager. <br>
  Standard_EXPORT   PrsMgr_PresentationManager2d(const Handle(Graphic2d_View)& aStructureManager);
  
  Standard_EXPORT     Standard_Boolean Is3D() const;
  //! Highlights the graphic object aPresentableObject in <br>
//! color by the color index anIndex. aPresentableObject <br>
//! has the display mode aMode. <br>
  Standard_EXPORT     void ColorHighlight(const Handle(PrsMgr_PresentableObject)& aPresentableObject,const Standard_Integer anIndex,const Standard_Integer aMode = 0) ;
  //! Allows the drawing on a plotter of the graphic object <br>
//! aPresentableObject with the display mode aMode. <br>
  Standard_EXPORT     void EnablePlot(const Handle(PrsMgr_PresentableObject)& aPresentableObject,const Standard_Integer aMode = 0) ;
  //! Forbids the drawing on a plotter of the graphic object <br>
//! aPresentableObject with the display mode aMode. <br>
  Standard_EXPORT     void DisablePlot(const Handle(PrsMgr_PresentableObject)& aPresentableObject,const Standard_Integer aMode = 0) ;
  //! Returns Standard_True if the graphic object <me> <br>
//!	    is plottable, Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean IsPlottable(const Handle(PrsMgr_PresentableObject)& aPresentableObject,const Standard_Integer aMode = 0) const;
  //! Specifies an Offset applied to the original color <br>
//!	    index of all primitives in the graphic object <me>. <br>
//!  Warning: To reset the real color of the primitives <br>
//!	    you have to call this method with <anOffset> = 0. <br>
  Standard_EXPORT     void SetOffset(const Handle(PrsMgr_PresentableObject)& aPresentableObject,const Standard_Integer anOffset,const Standard_Integer aMode = 0) ;
  //! Returns the Offset applied to the original color <br>
//!	    index of all primitives in the graphic object <me>. <br>
  Standard_EXPORT     Standard_Integer Offset(const Handle(PrsMgr_PresentableObject)& aPresentableObject,const Standard_Integer aMode = 0) const;
  //! Initializes a list of 2D objects for which minima and <br>
//! maxima will be calculated. <br>
  Standard_EXPORT     void InitMinMax() ;
  //! Appends the graphic object aPresentableObject with <br>
//! the display mode aMode to the list of objects for <br>
//! which minima and maxima will be calculated. <br>
  Standard_EXPORT     void AddMinMax(const Handle(PrsMgr_PresentableObject)& aPresentableObject,const Standard_Integer aMode = 0) ;
  //! Returns the minima and maxima for all the graphic <br>
//! objects listed by the AddMinMax function. <br>
  Standard_EXPORT     void MinMax(Standard_Real& MinX,Standard_Real& MaxX,Standard_Real& MinY,Standard_Real& MaxY) const;
  //! Sets the highlight color index anIndex. <br>
  Standard_EXPORT     void SetHighlightColor(const Standard_Integer anIndex) ;
  //! Returns the structure manager. <br>
  Standard_EXPORT     Handle_Graphic2d_View StructureManager() const;
  
  Standard_EXPORT     void BeginDraw() ;
  
  Standard_EXPORT     void AddToImmediateList(const Handle(Graphic2d_GraphicObject)& aGO) ;
  //! Allows rapid drawing of the view aView by avoiding <br>
//! an update of the whole background. If DoubleBuffer is true, the background is drawn. <br>
  Standard_EXPORT     void EndDraw(const Handle(Viewer_View)& aView,const Standard_Boolean DoubleBuffer = Standard_False) ;
  //! Dumps the Graphic Primitives of the PresentatbleObject in the buffer <br>
  Standard_EXPORT     void Dump(const Handle(Graphic2d_Buffer)& aBuffer,const Handle(PrsMgr_PresentableObject)& aPresentableObject,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     Handle_PrsMgr_Presentation2d CastPresentation(const Handle(PrsMgr_PresentableObject)& aPresentableObject,const Standard_Integer aMode = 0) const;
  //! Creates a new presentation in the presentation manager. <br>
  Standard_EXPORT     Handle_PrsMgr_Presentation newPresentation(const Handle(PrsMgr_PresentableObject)& aPresentableObject) ;




  DEFINE_STANDARD_RTTI(PrsMgr_PresentationManager2d)

protected:




private: 


Handle_Graphic2d_View myStructureManager;
Handle_Graphic2d_DisplayList MinMaxList;
Handle_Graphic2d_TransientManager myTM;
TColStd_ListOfTransient myGOList;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
