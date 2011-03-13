// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_SetOfSegments_HeaderFile
#define _Graphic2d_SetOfSegments_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_SetOfSegments_HeaderFile
#include <Handle_Graphic2d_SetOfSegments.hxx>
#endif

#ifndef _TShort_SequenceOfShortReal_HeaderFile
#include <TShort_SequenceOfShortReal.hxx>
#endif
#ifndef _Graphic2d_Line_HeaderFile
#include <Graphic2d_Line.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class Graphic2d_SegmentDefinitionError;
class Standard_OutOfRange;
class Graphic2d_GraphicObject;
class Graphic2d_Drawer;


//! The primitive SetOfSegments <br>
//!  Warning: This primitive must be use as possible for performance <br>
//!         improvment but is drawn with a global line attributes <br>
//!         for all the set. <br>
//!	    But when the set contains a lot of contigous segments <br>
//!	   with a line attrib different to the default,it's <br>
//!	   more preferable to use a SetOfPolylines for to insure <br>
//!	   a better quality. <br>
//!         NOTE: than the method PickedIndex() permits to known <br>
//!              the last picked segment in the set. <br>
class Graphic2d_SetOfSegments : public Graphic2d_Line {

public:

  //! Creates an empty set of segments in the graphic <br>
//!         object <aGraphicObject>. <br>
  Standard_EXPORT   Graphic2d_SetOfSegments(const Handle(Graphic2d_GraphicObject)& aGraphicObject);
  //! Add a segment in the set <br>
//!	    The first point is <X1>, <Y1>. <br>
//!	    The second point is <X2>, <Y2>. <br>
//!  Trigger: Raises SegmentDefinitionError if the <br>
//!          first point and the second point are identical. <br>
  Standard_EXPORT     void Add(const Quantity_Length X1,const Quantity_Length Y1,const Quantity_Length X2,const Quantity_Length Y2) ;
  //! Returns the number of segments in the set. <br>
  Standard_EXPORT     Standard_Integer Length() const;
  //! Returns the segment of rank <aRank> from the set. <br>
//!  Trigger: Raises OutOfRange if <aRank> is <1 or >Length() <br>
  Standard_EXPORT     void Values(const Standard_Integer aRank,Quantity_Length& X1,Quantity_Length& Y1,Quantity_Length& X2,Quantity_Length& Y2) const;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;




  DEFINE_STANDARD_RTTI(Graphic2d_SetOfSegments)

protected:

  //! Draws the set of segments <me>. <br>
  Standard_EXPORT     void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Draws element <anIndex> of the set <me>. <br>
  Standard_EXPORT   virtual  void DrawElement(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Draws vertex <anIndex> of the set <me>. <br>
  Standard_EXPORT   virtual  void DrawVertex(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Returns Standard_True if one segment of the set <me> <br>
//!	    is picked, Standard_False if not. <br>
//!  Warning: The PickIndex() method returns the rank of the picked <br>
//!	    segment if any. <br>
  Standard_EXPORT     Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;



private: 


TShort_SequenceOfShortReal myX1;
TShort_SequenceOfShortReal myY1;
TShort_SequenceOfShortReal myX2;
TShort_SequenceOfShortReal myY2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
