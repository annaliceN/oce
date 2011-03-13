// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_FontStyle_HeaderFile
#define _Aspect_FontStyle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Aspect_TypeOfFont_HeaderFile
#include <Aspect_TypeOfFont.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Aspect_FontStyleDefinitionError;
class TCollection_AsciiString;


//! This class defines a Font Style. <br>
//!	    The Style can be Predefined or defined by the user <br>
class Aspect_FontStyle  {
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

  //! Creates a font style with the default values of <br>
//!	    FontStyle type : DEFAULT <br>
  Standard_EXPORT   Aspect_FontStyle();
  //! Creates the font style <Type> depending of <br>
//!	    Size given in the basic LENGTH unit and Slant in <br>
//!	    the basic PLANE ANGLE unit. <br>
//!	    When CapsHeight is TRUE the size defines the <br>
//!	    ascent height of the font;if FALSE,the size <br>
//!	    defines the ascent+descent part of the font. <br>
  Standard_EXPORT   Aspect_FontStyle(const Aspect_TypeOfFont Type,const Quantity_Length Size,const Quantity_PlaneAngle Slant = 0.0,const Standard_Boolean CapsHeight = Standard_False);
  //! Creates a font style from Adobe font style descriptor <br>
//!	   depending of Size given in MM and Slant in RADIAN. <br>
//!	    When CapsHeight is TRUE the size defines the <br>
//!	    ascent height of the font;if FALSE,the size <br>
//!	    defines the ascent+descent part of the font. <br>
//!	    Font Style Descriptor must be : <br>
//!	       Simple form is "family"      	Ex: "helvetica" <br>
//!	       More complex form is "family-weight" Ex: "helvetica-bold" <br>
//!	       Full form is : <br>
//!		"-foundry-family-weight-slant-swdth-adstyl-pixelsize" <br>
//!		"-pointsize-resx-resy-spacing-avgWidth-registry-encoding" <br>
//!		where each field must be replaced by an "*" <br>
//!  Warning: create the smalest font size if the foundry height <br>
  Standard_EXPORT   Aspect_FontStyle(const Standard_CString Style,const Quantity_Length Size,const Quantity_PlaneAngle Slant = 0.0,const Standard_Boolean CapsHeight = Standard_False);
  //! Creates a transformable font with the full font name <Style> <br>
//!  given in the XLFD descriptor : <br>
//! "-foundry-family-weight-slant-swidth-adstyl-pixelsize-pointsize- <br>
//!  resx-resy-spacing-avdWidth-registry-encoding". <br>
//! The fields pixelsize ,pointsize,resx,resy are sets to 0 <br>
//! and all unknown fields sets to '*'. <br>
//!  Example: "adobe-helvetica-bold-*-*-*-0-0-0-0-*-*-iso8859-*" <br>
//!  Warning: the height and slant of the font is supposed to be NULL <br>
//! and computed dynamically at the drawing text time. <br>
  Standard_EXPORT   Aspect_FontStyle(const Standard_CString Style);
  //! Updates the font style <me> from the definition of the <br>
//!	    font style <Other>. <br>
  Standard_EXPORT     Aspect_FontStyle& Assign(const Aspect_FontStyle& Other) ;
    Aspect_FontStyle& operator =(const Aspect_FontStyle& Other) 
{
  return Assign(Other);
}
  //! Updates the font style <me> from the definition of the <br>
//!	    font style <Type>. <br>
  Standard_EXPORT     void SetValues(const Aspect_TypeOfFont Type,const Quantity_Length Size,const Quantity_PlaneAngle Slant = 0.0,const Standard_Boolean CapsHeight = Standard_False) ;
  //! Updates a font style with the new Abode font descriptor <br>
//!  Warning: create the smalest font size if the foundry height <br>
  Standard_EXPORT     void SetValues(const Standard_CString Style,const Quantity_Length Size,const Quantity_PlaneAngle Slant = 0.0,const Standard_Boolean CapsHeight = Standard_False) ;
  //! Updates a font style with the new XLFD font descriptor <br>
  Standard_EXPORT     void SetValues(const Standard_CString Style) ;
  //! Sets the family of the font. <br>
  Standard_EXPORT     void SetFamily(const Standard_CString aName) ;
  //! Sets the weight of the font. <br>
  Standard_EXPORT     void SetWeight(const Standard_CString aName) ;
  //! Sets the registry of the font. <br>
  Standard_EXPORT     void SetRegistry(const Standard_CString aName) ;
  //! Sets the encoding of the font. <br>
  Standard_EXPORT     void SetEncoding(const Standard_CString aName) ;
  //! Returns the type of the font style <me> <br>
  Standard_EXPORT     Aspect_TypeOfFont Style() const;
  //! Returns the string components length of the <br>
//! font style descriptor <br>
  Standard_EXPORT     Standard_Integer Length() const;
  //! Returns the String component of a font style <br>
  Standard_EXPORT     Standard_CString Value() const;
  //! Returns the Size component of a font style <br>
  Standard_EXPORT     Quantity_Length Size() const;
  //! Returns the Slant component of a font style <br>
  Standard_EXPORT     Quantity_PlaneAngle Slant() const;
  //! Returns the CapsHeight component of a font style <br>
  Standard_EXPORT     Standard_Boolean CapsHeight() const;
  //! Returns a shorter font name which identify the <br>
//!          main characteristics of the fonts. <br>
  Standard_EXPORT     Standard_CString AliasName() const;
  //! Returns the full normalized font name <br>
  Standard_EXPORT     Standard_CString FullName() const;
  //! Returns the foundry of the font. <br>
  Standard_EXPORT     Standard_CString Foundry() const;
  //! Returns the family of the font. <br>
  Standard_EXPORT     Standard_CString Family() const;
  //! Returns the weight of the font. <br>
  Standard_EXPORT     Standard_CString Weight() const;
  //! Returns the char set registry of the font. <br>
  Standard_EXPORT     Standard_CString Registry() const;
  //! Returns the char set encoding of the font. <br>
  Standard_EXPORT     Standard_CString Encoding() const;
  //! Returns the slant of the font. <br>
  Standard_EXPORT     Standard_CString SSlant() const;
  //! Returns the width name of the font. <br>
  Standard_EXPORT     Standard_CString SWidth() const;
  //! Returns the style name of the font. <br>
  Standard_EXPORT     Standard_CString SStyle() const;
  //! Returns the pixel size of the font. <br>
  Standard_EXPORT     Standard_CString SPixelSize() const;
  //! Returns the point size of the font. <br>
  Standard_EXPORT     Standard_CString SPointSize() const;
  //! Returns the resolution X of the font. <br>
  Standard_EXPORT     Standard_CString SResolutionX() const;
  //! Returns the resolution Y of the font. <br>
  Standard_EXPORT     Standard_CString SResolutionY() const;
  //! Returns the spacing of the font. <br>
  Standard_EXPORT     Standard_CString SSpacing() const;
  //! Returns the average width of the font. <br>
  Standard_EXPORT     Standard_CString SAverageWidth() const;
  //! Dumps the font attributes. <br>
  Standard_EXPORT     void Dump() const;
  
  Standard_EXPORT     Standard_Boolean IsEqual(const Aspect_FontStyle& Other) const;
    Standard_Boolean operator==(const Aspect_FontStyle& Other) const
{
  return IsEqual(Other);
}
  
  Standard_EXPORT     Standard_Boolean IsNotEqual(const Aspect_FontStyle& Other) const;
    Standard_Boolean operator!=(const Aspect_FontStyle& Other) const
{
  return IsNotEqual(Other);
}





protected:



Aspect_TypeOfFont MyFontType;
TCollection_AsciiString MyStyle;
TCollection_AsciiString MyFontName;
Standard_Real MyFontSize;
Standard_Real MyFontSlant;
Standard_Boolean MyCapsHeight;


private:

  //! Set MyFontString with the predefined style value <br>
//!	    and size according of type <br>
  Standard_EXPORT     void SetPredefinedStyle(const Aspect_TypeOfFont Type,const Quantity_Length Size,const Quantity_PlaneAngle Slant,const Standard_Boolean CapsHeight) ;
  //! Returns a normalized descriptor from the font name <br>
//!         <aFontName> <br>
  Standard_EXPORT   static  Standard_CString Normalize(const Standard_CString aFontName,Standard_Real& aSize) ;
  //! Returns the field at position <aRank> <br>
//!          from the font name <aFontName>. <br>
  Standard_EXPORT   static  Standard_CString Field(const TCollection_AsciiString& aFontName,const Standard_Integer aRank) ;
  //! Sets the field at position <aRank> <br>
//!	    of the fontname <aFontName> <br>
//!          from the field name <aField>. <br>
  Standard_EXPORT   static  Standard_CString SetField(const TCollection_AsciiString& aFontName,const Standard_CString aField,const Standard_Integer aRank) ;




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
