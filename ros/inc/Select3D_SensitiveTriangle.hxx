// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_SensitiveTriangle_HeaderFile
#define _Select3D_SensitiveTriangle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Select3D_SensitiveTriangle_HeaderFile
#include <Handle_Select3D_SensitiveTriangle.hxx>
#endif

#ifndef _Select3D_TypeOfSensitivity_HeaderFile
#include <Select3D_TypeOfSensitivity.hxx>
#endif
#ifndef _Select3D_SensitivePoly_HeaderFile
#include <Select3D_SensitivePoly.hxx>
#endif
#ifndef _Handle_SelectBasics_EntityOwner_HeaderFile
#include <Handle_SelectBasics_EntityOwner.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class SelectBasics_EntityOwner;
class gp_Pnt;
class TColgp_Array1OfPnt2d;
class Bnd_Box2d;
class gp_Lin;
class gp_XY;


//! A framework to define selection of triangles in a view. <br>
//! This comes into play in the detection of meshing and triangulation in surfaces. <br>
class Select3D_SensitiveTriangle : public Select3D_SensitivePoly {

public:

  //! Constructs a sensitive triangle object defined by the <br>
//! owner OwnerId, the points P1, P2, P3, and the type of sensitivity Sensitivity. <br>
  Standard_EXPORT   Select3D_SensitiveTriangle(const Handle(SelectBasics_EntityOwner)& OwnerId,const gp_Pnt& P1,const gp_Pnt& P2,const gp_Pnt& P3,const Select3D_TypeOfSensitivity Sensitivity = Select3D_TOS_INTERIOR);
  
  Standard_EXPORT   virtual  Standard_Boolean Matches(const Standard_Real X,const Standard_Real Y,const Standard_Real aTol,Standard_Real& DMin) ;
  
  Standard_EXPORT   virtual  Standard_Boolean Matches(const Standard_Real XMin,const Standard_Real YMin,const Standard_Real XMax,const Standard_Real YMax,const Standard_Real aTol) ;
  
  Standard_EXPORT   virtual  Standard_Boolean Matches(const TColgp_Array1OfPnt2d& Polyline,const Bnd_Box2d& aBox,const Standard_Real aTol) ;
  
  Standard_EXPORT     Standard_Real ComputeDepth(const gp_Lin& EyeLine) const;
  //! Returns the 3D points P1, P2, P3 used at the time of construction. <br>
  Standard_EXPORT     void Points3D(gp_Pnt& P1,gp_Pnt& P2,gp_Pnt& P3) const;
  //! Returns the center point of the sensitive triangle created at construction time. <br>
  Standard_EXPORT     gp_Pnt Center3D() const;
  //! WARNING : the returned Values are the original values <br>
//!          without the stored  location (if there's one). <br>
//!          To get the genuine value, One must apply this location <br>
//!          (Method Location() ) <br>
  Standard_EXPORT     gp_XY Center2D() const;
  
  Standard_EXPORT     Standard_Integer Status(const Standard_Real X,const Standard_Real Y,const Standard_Real aTol,Standard_Real& Dmin) const;
  //! Dmin gives the distance between the cdg and aPoint return <br>
  Standard_EXPORT   static  Standard_Integer Status(const gp_XY& p0,const gp_XY& p1,const gp_XY& p2,const gp_XY& aPoint,const Standard_Real aTol,Standard_Real& Dmin) ;
  
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S,const Standard_Boolean FullDump = Standard_True) const;




  DEFINE_STANDARD_RTTI(Select3D_SensitiveTriangle)

protected:




private: 


Select3D_TypeOfSensitivity mytype;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
