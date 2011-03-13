// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_Color_HeaderFile
#define _IGESGraph_Color_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESGraph_Color_HeaderFile
#include <Handle_IGESGraph_Color.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _IGESData_ColorEntity_HeaderFile
#include <IGESData_ColorEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TCollection_HAsciiString;


//! defines IGESColor, Type <314> Form <0> <br>
//!           in package IGESGraph <br>
class IGESGraph_Color : public IGESData_ColorEntity {

public:

  
  Standard_EXPORT   IGESGraph_Color();
  //! This method is used to set the fields of the class Color <br>
//!       - red        : Red   color intensity (range 0.0 to 100.0) <br>
//!       - green      : Green color intensity (range 0.0 to 100.0) <br>
//!       - blue       : Blue  color intensity (range 0.0 to 100.0) <br>
//!       - aColorName : Name of the color (optional) <br>
  Standard_EXPORT     void Init(const Standard_Real red,const Standard_Real green,const Standard_Real blue,const Handle(TCollection_HAsciiString)& aColorName) ;
  
  Standard_EXPORT     void RGBIntensity(Standard_Real& Red,Standard_Real& Green,Standard_Real& Blue) const;
  
  Standard_EXPORT     void CMYIntensity(Standard_Real& Cyan,Standard_Real& Magenta,Standard_Real& Yellow) const;
  
  Standard_EXPORT     void HLSPercentage(Standard_Real& Hue,Standard_Real& Lightness,Standard_Real& Saturation) const;
  //! returns True if optional character string is assigned, <br>
//!         False otherwise. <br>
  Standard_EXPORT     Standard_Boolean HasColorName() const;
  //! if HasColorName() is True  returns the Verbal description of <br>
//! the Color. <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString ColorName() const;




  DEFINE_STANDARD_RTTI(IGESGraph_Color)

protected:




private: 


Standard_Real theRed;
Standard_Real theGreen;
Standard_Real theBlue;
Handle_TCollection_HAsciiString theColorName;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
