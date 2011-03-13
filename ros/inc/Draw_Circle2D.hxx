// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_Circle2D_HeaderFile
#define _Draw_Circle2D_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Draw_Circle2D_HeaderFile
#include <Handle_Draw_Circle2D.hxx>
#endif

#ifndef _gp_Circ2d_HeaderFile
#include <gp_Circ2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Draw_Color_HeaderFile
#include <Draw_Color.hxx>
#endif
#ifndef _Draw_Drawable2D_HeaderFile
#include <Draw_Drawable2D.hxx>
#endif
class gp_Circ2d;
class Draw_Color;
class Draw_Display;



class Draw_Circle2D : public Draw_Drawable2D {

public:

  
  Standard_EXPORT   Draw_Circle2D(const gp_Circ2d& C,const Standard_Real A1,const Standard_Real A2,const Draw_Color& col);
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;




  DEFINE_STANDARD_RTTI(Draw_Circle2D)

protected:




private: 


gp_Circ2d myCirc;
Standard_Real myA1;
Standard_Real myA2;
Draw_Color myColor;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
