// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_Display_HeaderFile
#define _Draw_Display_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Draw_MarkerShape_HeaderFile
#include <Draw_MarkerShape.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class Draw_Color;
class gp_Pnt;
class gp_Pnt2d;
class gp_Circ;
class gp_Circ2d;


//! Use to  draw in a 3d or a 2d view. <br>
//! <br>
//!          * The  3d methods draw in the 3d  system,  in a 2d <br>
//!          view the drawing is projected on X,Y. <br>
//! <br>
//!          * The 2d methods draw in the projection plane. <br>
//! <br>
//!          * To draw in screen coordinates the length must be <br>
//!          divided by the zoom. <br>
class Draw_Display  {
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

  
  Standard_EXPORT   Draw_Display();
  //! Following drawings will use this color. <br>
  Standard_EXPORT     void SetColor(const Draw_Color& col) const;
  //! Set the drawing mode, 3 = copy, 6 = xor <br>
  Standard_EXPORT     void SetMode(const Standard_Integer M) const;
  
  Standard_EXPORT     void Flush() const;
  
  Standard_EXPORT     void MoveTo(const gp_Pnt& pt) ;
  
  Standard_EXPORT     void DrawTo(const gp_Pnt& pt) ;
  
  Standard_EXPORT     void MoveTo(const gp_Pnt2d& pt) ;
  
  Standard_EXPORT     void DrawTo(const gp_Pnt2d& pt) ;
  
  Standard_EXPORT     void Draw(const gp_Pnt& p1,const gp_Pnt& p2) ;
  
  Standard_EXPORT     void Draw(const gp_Pnt2d& p1,const gp_Pnt2d& p2) ;
  //!  Draw  a  circle   <C> from  angle <A1>   to  <A2> <br>
//!           (Radians). if ModifyWithZoom  = 0,  then <br>
//!           rayon of circle is convert to Integer. <br>
  Standard_EXPORT     void Draw(const gp_Circ& C,const Standard_Real A1,const Standard_Real A2,const Standard_Boolean ModifyWithZoom = Standard_True) ;
  //!  Draw  a 2D circle  <C>  from angle   <A1> to <A2> <br>
//!           (Radians). if ModifyWithZoom  = 0,  then <br>
//!           rayon of circle is convert to Integer. <br>
  Standard_EXPORT     void Draw(const gp_Circ2d& C,const Standard_Real A1,const Standard_Real A2,const Standard_Boolean ModifyWithZoom = Standard_True) ;
  
  Standard_EXPORT     void DrawMarker(const gp_Pnt& pt,const Draw_MarkerShape S,const Standard_Integer Size = 5) ;
  
  Standard_EXPORT     void DrawMarker(const gp_Pnt2d& pt,const Draw_MarkerShape S,const Standard_Integer Size = 5) ;
  
  Standard_EXPORT     void DrawMarker(const gp_Pnt& pt,const Draw_MarkerShape S,const Standard_Real Size) ;
  
  Standard_EXPORT     void DrawMarker(const gp_Pnt2d& pt,const Draw_MarkerShape S,const Standard_Real Size) ;
  
  Standard_EXPORT     void DrawString(const gp_Pnt& pt,const Standard_CString S) ;
  
  Standard_EXPORT     void DrawString(const gp_Pnt2d& pt,const Standard_CString S) ;
  
  Standard_EXPORT     void DrawString(const gp_Pnt& pt,const Standard_CString S,const Standard_Real moveX,const Standard_Real moveY) ;
  
  Standard_EXPORT     void DrawString(const gp_Pnt2d& pt,const Standard_CString S,const Standard_Real moveX,const Standard_Real moveY) ;
  //! Returns the 2D projection of a 3D point. <br>
  Standard_EXPORT     gp_Pnt2d Project(const gp_Pnt& pt) const;
  //! Returns the 2D projection of a 3D point. <br>
  Standard_EXPORT     void Project(const gp_Pnt& pt,gp_Pnt2d& pt2d) const;
  //! Returns the current Zoom value. <br>
  Standard_EXPORT     Standard_Real Zoom() const;
  //! Returns the   identifier  of the  view   where the <br>
//!          display is drawing. <br>
  Standard_EXPORT     Standard_Integer ViewId() const;
  //! Returs  True  if  the  last   drawing   operations <br>
//!          generated  a pick hit.  When HasPicked is True the <br>
//!          Drawing should be resumed. <br>
//! <br>
//!          This function is used to shorten the  drawing when <br>
//!          picking and to save the picked sub-parts. <br>
  Standard_EXPORT     Standard_Boolean HasPicked() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
