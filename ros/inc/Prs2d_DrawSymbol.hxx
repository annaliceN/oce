// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs2d_DrawSymbol_HeaderFile
#define _Prs2d_DrawSymbol_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs2d_DrawSymbol_HeaderFile
#include <Handle_Prs2d_DrawSymbol.hxx>
#endif

#ifndef _Prs2d_TypeOfSymbol_HeaderFile
#include <Prs2d_TypeOfSymbol.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Graphic2d_Line_HeaderFile
#include <Graphic2d_Line.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class Prs2d_SymbolDefinitionError;
class Graphic2d_GraphicObject;
class Graphic2d_Drawer;


//! The primitive symbol for drawing <br>
class Prs2d_DrawSymbol : public Graphic2d_Line {

public:

  //! Creates the predefined marker index <anIndex> <br>
//!	    at position <aX>, <aY> and size <aWidth>,<aHeight>. <br>//!  Trigger  -   Raises SymbolDefinitionError if the <br>
//!	    symbol type isn't defined, <br>
//!      or the symbol size < aWidth, aHeight > is null. <br>
  Standard_EXPORT   Prs2d_DrawSymbol(const Handle(Graphic2d_GraphicObject)& aGO,const Prs2d_TypeOfSymbol aSymbType,const Standard_Real aX,const Standard_Real aY,const Standard_Real aWidth = 10.0,const Standard_Real aHeight = 10.0,const Standard_Real anAngle = 0.0);
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;




  DEFINE_STANDARD_RTTI(Prs2d_DrawSymbol)

protected:

  //! Draws the symbol <me>. <br>
  Standard_EXPORT     void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Returns Standard_True if the symbol <me> is picked, <br>
//!	    Standard_False if not. <br>
//!  Warning: Checks only if the point <X>, <Y> is in the <br>
//!	    boundary rectangle of <me> <br>
  Standard_EXPORT     Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;



private: 


Prs2d_TypeOfSymbol myTypeSymb;
Standard_ShortReal myX;
Standard_ShortReal myY;
Standard_ShortReal myWidth;
Standard_ShortReal myHeight;
Standard_ShortReal myAngle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
