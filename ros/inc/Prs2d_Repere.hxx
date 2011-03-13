// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs2d_Repere_HeaderFile
#define _Prs2d_Repere_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs2d_Repere_HeaderFile
#include <Handle_Prs2d_Repere.hxx>
#endif

#ifndef _TShort_Array1OfShortReal_HeaderFile
#include <TShort_Array1OfShortReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Prs2d_Dimension_HeaderFile
#include <Prs2d_Dimension.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Prs2d_TypeOfArrow_HeaderFile
#include <Prs2d_TypeOfArrow.hxx>
#endif
#ifndef _Prs2d_ArrowSide_HeaderFile
#include <Prs2d_ArrowSide.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class Graphic2d_GraphicObject;
class gp_Pnt2d;
class TCollection_ExtendedString;
class Graphic2d_Drawer;


//! Constructs the repere <br>
class Prs2d_Repere : public Prs2d_Dimension {

public:

  //! Creates repere <br>
  Standard_EXPORT   Prs2d_Repere(const Handle(Graphic2d_GraphicObject)& aGO,const gp_Pnt2d& aPnt1,const gp_Pnt2d& aPnt2,const Standard_Real aLenBase,const TCollection_ExtendedString& aText,const Standard_Real aTxtScale = 1.0,const Standard_Boolean aDrawArrow = Standard_False,const Standard_Real anArrAngle = 10.0,const Standard_Real anArrLength = 10.0,const Prs2d_TypeOfArrow anArrType = Prs2d_TOA_OPENED,const Prs2d_ArrowSide anArrow = Prs2d_AS_BOTHAR,const Standard_Boolean IsRevArrow = Standard_False);
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;




  DEFINE_STANDARD_RTTI(Prs2d_Repere)

protected:

  //! Draws the repere <me>. <br>
  Standard_EXPORT     void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  
  Standard_EXPORT   virtual  void DrawElement(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  
  Standard_EXPORT   virtual  void DrawVertex(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Returns Standard_True if the repere <me> is picked, <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;
  
      virtual  void CalcTxtPos(const Standard_Boolean theFromAbs) ;



private: 


TShort_Array1OfShortReal myXVert;
TShort_Array1OfShortReal myYVert;
Standard_Boolean myObtuse;
Standard_Boolean myDrawArrow;


};


#include <Prs2d_Repere.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
