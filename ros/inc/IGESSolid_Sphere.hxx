// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_Sphere_HeaderFile
#define _IGESSolid_Sphere_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSolid_Sphere_HeaderFile
#include <Handle_IGESSolid_Sphere.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
class gp_XYZ;
class gp_Pnt;


//! defines Sphere, Type <158> Form Number <0> <br>
//!          in package IGESSolid <br>
//!          This defines a sphere with a center and radius <br>
class IGESSolid_Sphere : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESSolid_Sphere();
  //! This method is used to set the fields of the class Sphere <br>
//!       - aRadius : the radius of the sphere <br>
//!       - aCenter : the center point coordinates (default (0,0,0)) <br>
  Standard_EXPORT     void Init(const Standard_Real aRadius,const gp_XYZ& aCenter) ;
  //! returns the radius of the sphere <br>
  Standard_EXPORT     Standard_Real Radius() const;
  //! returns the center of the sphere <br>
  Standard_EXPORT     gp_Pnt Center() const;
  //! returns the center of the sphere after applying <br>
//! TransformationMatrix <br>
  Standard_EXPORT     gp_Pnt TransformedCenter() const;




  DEFINE_STANDARD_RTTI(IGESSolid_Sphere)

protected:




private: 


Standard_Real theRadius;
gp_XYZ theCenter;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
