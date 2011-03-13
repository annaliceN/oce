// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_AspectLine_HeaderFile
#define _Aspect_AspectLine_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Aspect_AspectLine_HeaderFile
#include <Handle_Aspect_AspectLine.hxx>
#endif

#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _Aspect_TypeOfLine_HeaderFile
#include <Aspect_TypeOfLine.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class Aspect_AspectLineDefinitionError;
class Quantity_Color;


//! This class allows the definition of a group <br>
//!	    of attributes for the LINE primitive <br>
//!	    The attributes are: <br>
//!		* Colour <br>
//!		* Type <br>
//!		* Thickness <br>
//!	    When any value of the group is modified <br>
//!	    all graphic objects using the group are modified. <br>
class Aspect_AspectLine : public MMgt_TShared {

public:

  //! Modifies the colour of <me>. <br>
  Standard_EXPORT     void SetColor(const Quantity_Color& AColor) ;
  //! Modifies the type of <me>. <br>
  Standard_EXPORT     void SetType(const Aspect_TypeOfLine AType) ;
  //! Modifies the thickness of <me>. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises AspectLineDefinitionError if the <br>
//!	    width is a negative value. <br>
  Standard_EXPORT     void SetWidth(const Standard_Real AWidth) ;
  //! Returns the current values of the group <me>. <br>
  Standard_EXPORT     void Values(Quantity_Color& AColor,Aspect_TypeOfLine& AType,Standard_Real& AWidth) const;




  DEFINE_STANDARD_RTTI(Aspect_AspectLine)

protected:

  //! Initialise the constructor for Graphic3d_AspectLine3d. <br>
  Standard_EXPORT   Aspect_AspectLine();
  //! Initialise the values for the <br>
//!	    constructor of Graphic3d_AspectLine3d. <br>
  Standard_EXPORT   Aspect_AspectLine(const Quantity_Color& AColor,const Aspect_TypeOfLine AType,const Standard_Real AWidth);



private: 


Quantity_Color MyColor;
Aspect_TypeOfLine MyType;
Standard_Real MyWidth;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
