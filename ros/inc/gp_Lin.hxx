// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Lin_HeaderFile
#define _gp_Lin_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Ax1_HeaderFile
#include <gp_Ax1.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class gp_Ax1;
class gp_Pnt;
class gp_Dir;
class gp_Ax2;
class gp_Trsf;
class gp_Vec;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_Lin);


//! Describes a line in 3D space. <br>
//! A line is positioned in space with an axis (a gp_Ax1 <br>
//! object) which gives it an origin and a unit vector. <br>
//! A line and an axis are similar objects, thus, we can <br>
//! convert one into the other. A line provides direct access <br>
//! to the majority of the edit and query functions available <br>
//! on its positioning axis. In addition, however, a line has <br>
//! specific functions for computing distances and positions. <br>
//! See Also <br>
//! gce_MakeLin which provides functions for more complex <br>
//! line constructions <br>
//! Geom_Line which provides additional functions for <br>
//! constructing lines and works, in particular, with the <br>
//! parametric equations of lines <br>
class gp_Lin  {

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

  //! Creates a Line corresponding to Z axis of the <br>
//!            reference coordinate system. <br>
      gp_Lin();
  //! Creates a line defined by axis A1. <br>
      gp_Lin(const gp_Ax1& A1);
  //! Creates a line passing through point P and parallel to <br>
//!  vector V (P and V are, respectively, the origin and <br>
//! the unit vector of the positioning axis of the line). <br>
  Standard_EXPORT   gp_Lin(const gp_Pnt& P,const gp_Dir& V);
  
        void Reverse() ;
  //! Reverses the direction of the line. <br>
//! Note: <br>
//! -   Reverse assigns the result to this line, while <br>
//! -   Reversed creates a new one. <br>
        gp_Lin Reversed() const;
  //!  Changes the direction of the line. <br>
        void SetDirection(const gp_Dir& V) ;
  //! Changes the location point (origin) of the line. <br>
        void SetLocation(const gp_Pnt& P) ;
  
//!  Complete redefinition of the line. <br>
//!  The "Location" point of <A1> is the origin of the line. <br>
//!  The "Direction" of <A1> is  the direction of the line. <br>
        void SetPosition(const gp_Ax1& A1) ;
  //! Returns the direction of the line. <br>
       const gp_Dir& Direction() const;
  
//!  Returns the location point (origin) of the line. <br>
       const gp_Pnt& Location() const;
  
//!  Returns the axis placement one axis whith the same <br>
//!  location and direction as <me>. <br>
       const gp_Ax1& Position() const;
  //! Computes the angle between two lines in radians. <br>
        Standard_Real Angle(const gp_Lin& Other) const;
  //! Returns true if this line contains the point P, that is, if the <br>
//! distance between point P and this line is less than or <br>
//! equal to LinearTolerance.. <br>
        Standard_Boolean Contains(const gp_Pnt& P,const Standard_Real LinearTolerance) const;
  //! Computes the distance between <me> and the point P. <br>
        Standard_Real Distance(const gp_Pnt& P) const;
  //! Computes the distance between two lines. <br>
  Standard_EXPORT     Standard_Real Distance(const gp_Lin& Other) const;
  
//!  Computes the square distance between <me> and the point P. <br>
        Standard_Real SquareDistance(const gp_Pnt& P) const;
  //! Computes the square distance between two lines. <br>
        Standard_Real SquareDistance(const gp_Lin& Other) const;
  
//!  Computes the line normal to the direction of <me>, passing <br>
//!  through the point P.  Raises ConstructionError <br>
//!  if the distance between <me> and the point P is lower <br>
//!  or equal to Resolution from gp because there is an infinity of <br>
//!  solutions in 3D space. <br>
        gp_Lin Normal(const gp_Pnt& P) const;
  
  Standard_EXPORT     void Mirror(const gp_Pnt& P) ;
  
//!  Performs the symmetrical transformation of a line <br>
//!  with respect to the point P which is the center of <br>
//!  the symmetry. <br>
  Standard_EXPORT     gp_Lin Mirrored(const gp_Pnt& P) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax1& A1) ;
  
//!  Performs the symmetrical transformation of a line <br>
//!  with respect to an axis placement which is the axis <br>
//!  of the symmetry. <br>
  Standard_EXPORT     gp_Lin Mirrored(const gp_Ax1& A1) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax2& A2) ;
  
//!  Performs the symmetrical transformation of a line <br>
//!  with respect to a plane. The axis placement  <A2> <br>
//!  locates the plane of the symmetry : <br>
//!  (Location, XDirection, YDirection). <br>
  Standard_EXPORT     gp_Lin Mirrored(const gp_Ax2& A2) const;
  
        void Rotate(const gp_Ax1& A1,const Standard_Real Ang) ;
  
//!  Rotates a line. A1 is the axis of the rotation. <br>
//!  Ang is the angular value of the rotation in radians. <br>
        gp_Lin Rotated(const gp_Ax1& A1,const Standard_Real Ang) const;
  
        void Scale(const gp_Pnt& P,const Standard_Real S) ;
  
//!  Scales a line. S is the scaling value. <br>
//!  The "Location" point (origin) of the line is modified. <br>
//!  The "Direction" is reversed if the scale is negative. <br>
        gp_Lin Scaled(const gp_Pnt& P,const Standard_Real S) const;
  
        void Transform(const gp_Trsf& T) ;
  
//!  Transforms a line with the transformation T from class Trsf. <br>
        gp_Lin Transformed(const gp_Trsf& T) const;
  
        void Translate(const gp_Vec& V) ;
  
//!  Translates a line in the direction of the vector V. <br>
//!  The magnitude of the translation is the vector's magnitude. <br>
        gp_Lin Translated(const gp_Vec& V) const;
  
        void Translate(const gp_Pnt& P1,const gp_Pnt& P2) ;
  
//!  Translates a line from the point P1 to the point P2. <br>
        gp_Lin Translated(const gp_Pnt& P1,const gp_Pnt& P2) const;
    const gp_Ax1& _CSFDB_Getgp_Linpos() const { return pos; }



protected:




private: 


gp_Ax1 pos;


};


#include <gp_Lin.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
