// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFDoc_Color_HeaderFile
#define _XCAFDoc_Color_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XCAFDoc_Color_HeaderFile
#include <Handle_XCAFDoc_Color.hxx>
#endif

#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
class Standard_GUID;
class TDF_Label;
class Quantity_Color;
class TDF_Attribute;
class TDF_RelocationTable;



class XCAFDoc_Color : public TDF_Attribute {

public:

  
  Standard_EXPORT   XCAFDoc_Color();
  
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  
  Standard_EXPORT   static  Handle_XCAFDoc_Color Set(const TDF_Label& label,const Quantity_Color& C) ;
  
  Standard_EXPORT   static  Handle_XCAFDoc_Color Set(const TDF_Label& label,const Quantity_NameOfColor C) ;
  //! Find, or create, a Color attribute and set it's value <br>
//!          the Color attribute is returned. <br>
  Standard_EXPORT   static  Handle_XCAFDoc_Color Set(const TDF_Label& label,const Standard_Real R,const Standard_Real G,const Standard_Real B) ;
  
  Standard_EXPORT     void Set(const Quantity_Color& C) ;
  
  Standard_EXPORT     void Set(const Quantity_NameOfColor C) ;
  
  Standard_EXPORT     void Set(const Standard_Real R,const Standard_Real G,const Standard_Real B) ;
  
  Standard_EXPORT     Quantity_Color GetColor() const;
  
  Standard_EXPORT     Quantity_NameOfColor GetNOC() const;
  //! Returns True if there is a reference on the same label <br>
  Standard_EXPORT     void GetRGB(Standard_Real& R,Standard_Real& G,Standard_Real& B) const;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& Into,const Handle(TDF_RelocationTable)& RT) const;




  DEFINE_STANDARD_RTTI(XCAFDoc_Color)

protected:




private: 


Quantity_Color myColor;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
