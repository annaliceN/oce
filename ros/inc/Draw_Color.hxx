// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_Color_HeaderFile
#define _Draw_Color_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Draw_ColorKind_HeaderFile
#include <Draw_ColorKind.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(Draw_Color);


class Draw_Color  {

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

  
  Standard_EXPORT   Draw_Color();
  
  Standard_EXPORT   Draw_Color(const Draw_ColorKind c);
  
  Standard_EXPORT     Draw_ColorKind ID() const;
    Draw_ColorKind _CSFDB_GetDraw_ColormyKind() const { return myKind; }
    void _CSFDB_SetDraw_ColormyKind(const Draw_ColorKind p) { myKind = p; }



protected:




private: 


Draw_ColorKind myKind;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
