// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_AspectMarker_HeaderFile
#define _Aspect_AspectMarker_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Aspect_AspectMarker_HeaderFile
#include <Handle_Aspect_AspectMarker.hxx>
#endif

#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _Aspect_TypeOfMarker_HeaderFile
#include <Aspect_TypeOfMarker.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class Aspect_AspectMarkerDefinitionError;
class Quantity_Color;


//! This class allows the definition of a group <br>
//!	    of attributes for the primitive MARKER. <br>
//!	    the attributes are: <br>
//!		* Colour <br>
//!		* Type <br>
//!		* Scale factor <br>
//!	    When any value of the group is modified <br>
//!	    all graphic objects using the group are modified <br>
class Aspect_AspectMarker : public MMgt_TShared {

public:

  //! Modifies the colour of <me>. <br>
  Standard_EXPORT     void SetColor(const Quantity_Color& AColor) ;
  //! Modifies the scale factor of <me>. <br>
//!	    Marker type Aspect_TOM_POINT is not affected <br>
//!	    by the marker size scale factor. It is always <br>
//!	    the smallest displayable dot. <br>
//!  Warning: Raises AspectMarkerDefinitionError if the <br>
//!	    scale is a negative value. <br>
  Standard_EXPORT     void SetScale(const Standard_Real AScale) ;
  //! Modifies the type of marker <me>. <br>
  Standard_EXPORT     void SetType(const Aspect_TypeOfMarker AType) ;
  //! Returns the current values of the group <me>. <br>
  Standard_EXPORT     void Values(Quantity_Color& AColor,Aspect_TypeOfMarker& AType,Standard_Real& AScale) const;




  DEFINE_STANDARD_RTTI(Aspect_AspectMarker)

protected:

  //! Initialise the constructor for Graphic3d_AspectMarker3d. <br>
  Standard_EXPORT   Aspect_AspectMarker();
  //! Initialise the values for the <br>
//!	    constructor of Graphic3d_AspectMarker3d. <br>
//!  Warning: Raises AspectMarkerDefinitionError if the <br>
//!	    scale is a negative value. <br>
  Standard_EXPORT   Aspect_AspectMarker(const Quantity_Color& AColor,const Aspect_TypeOfMarker AType,const Standard_Real AScale);



private: 


Quantity_Color MyColor;
Aspect_TypeOfMarker MyType;
Standard_Real MyScale;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
