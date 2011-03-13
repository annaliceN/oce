// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_Camera_HeaderFile
#define _V3d_Camera_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_V3d_Camera_HeaderFile
#include <Handle_V3d_Camera.hxx>
#endif

#ifndef _Graphic3d_Vertex_HeaderFile
#include <Graphic3d_Vertex.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Handle_Graphic3d_Structure_HeaderFile
#include <Handle_Graphic3d_Structure.hxx>
#endif
#ifndef _V3d_TypeOfRepresentation_HeaderFile
#include <V3d_TypeOfRepresentation.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_V3d_View_HeaderFile
#include <Handle_V3d_View.hxx>
#endif
#ifndef _V3d_Coordinate_HeaderFile
#include <V3d_Coordinate.hxx>
#endif
#ifndef _Quantity_Parameter_HeaderFile
#include <Quantity_Parameter.hxx>
#endif
#ifndef _V3d_TypeOfPickCamera_HeaderFile
#include <V3d_TypeOfPickCamera.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Graphic3d_Group_HeaderFile
#include <Handle_Graphic3d_Group.hxx>
#endif
class Graphic3d_Structure;
class Viewer_BadValue;
class V3d_View;
class Graphic3d_Group;
class Graphic3d_Vertex;


//! Creation and modification of a spot. <br>
class V3d_Camera : public MMgt_TShared {

public:

  //! Creates the camera which relatives of View <br>
  Standard_EXPORT   V3d_Camera(const Handle(V3d_View)& aView);
  //! Defines the position of the camera.     . <br>
  Standard_EXPORT     void SetPosition(const V3d_Coordinate X,const V3d_Coordinate Y,const V3d_Coordinate Z) ;
  //! Defines the angular position of camera. <br>//!  Warning! raises BadValue from Viewer if Abs(Angle) > 2*PI; <br>
//!	If the angle is <= 0 ou > PI . <br>
  Standard_EXPORT     void SetAngle(const Quantity_PlaneAngle Angle) ;
  //! Defines the Aperture. <br>//!  Warning! raises BadValue from Viewer if angle <= 0 or > PI <br>
  Standard_EXPORT     void SetAperture(const Quantity_PlaneAngle Angle) ;
  //! Defines the target of the camera. <br>
  Standard_EXPORT     void SetTarget(const V3d_Coordinate X,const V3d_Coordinate Y,const V3d_Coordinate Z) ;
  //! Define the radius. <br>//!  Warning! raises BadValue from Viewer if radius <= 0 . <br>
  Standard_EXPORT     void SetRadius(const Quantity_Parameter Radius) ;
  //! Calculate the position of the camera, on the hide face <br>
//!          of the picking sphere. <br>
  Standard_EXPORT     void OnHideFace(const Handle(V3d_View)& aView) ;
  //! Calculate the position of the camera, on the seen face <br>
//!          of the picking sphere. <br>
  Standard_EXPORT     void OnSeeFace(const Handle(V3d_View)& aView) ;
  //! Tracking the camera position, or the picking sphere, <br>
//!          or the radius of the picking sphere, that depends of <br>
//!          initial picking "WhatPick" (see the pick method). <br>
//!          If WhatPick is SPACECAMERA, then the parameters <br>
//!          Xpix, Ypix are the coordinates of a translation vector. <br>
  Standard_EXPORT     void Tracking(const Handle(V3d_View)& aView,const V3d_TypeOfPickCamera WathPick,const Standard_Integer Xpix,const Standard_Integer Ypix) ;
  //! Permits the driving of the camera in aerial mode. <br>
//!          The user believes fly in plane ... <br>
  Standard_EXPORT     void AerialPilot(const Handle(V3d_View)& aView,const Standard_Integer Xpix,const Standard_Integer Ypix) ;
  //! Permits the driving of the camera in earth mode. <br>
//!          The user believes drive a car ... <br>
  Standard_EXPORT     void EarthPilot(const Handle(V3d_View)& aView,const Standard_Integer Xpix,const Standard_Integer Ypix) ;
  //! The camera move or move back in the direction camera, <br>
//!          target of camera. <br>
  Standard_EXPORT     void Move(const Quantity_Parameter Dist) ;
  //! The camera go up or go down on the z axis, <br>
//!          the direction of camera is the same. <br>
  Standard_EXPORT     void GoUp(const Quantity_Parameter Haut) ;
  //! Display the graphic structure of camera <br>
//!          in the choosen view. We have two types of representation. <br>
//!          - SIMPLE : Only the camera position is displayed. <br>
//!          - COMPLETE : The position camera, the picking sphere and <br>
//!                       the radius of sphere are displayed. <br>
  Standard_EXPORT     void Display(const Handle(V3d_View)& aView,const V3d_TypeOfRepresentation Representation) ;
  //! Erase the graphic structure of camera. <br>
  Standard_EXPORT     void Erase() ;
  //! Returns the position of the camera. <br>
  Standard_EXPORT     void Position(V3d_Coordinate& X,V3d_Coordinate& Y,V3d_Coordinate& Z) const;
  //! Returns the position of the target of camera. <br>
  Standard_EXPORT     void Target(V3d_Coordinate& X,V3d_Coordinate& Y,V3d_Coordinate& Z) const;
  //! Returns the angle. <br>
  Standard_EXPORT     Quantity_PlaneAngle Angle() const;
  //! Returns the Aperture. <br>
  Standard_EXPORT     Quantity_PlaneAngle Aperture() const;
  //! Returns the radius of the picking sphere. <br>
  Standard_EXPORT     Quantity_Parameter Radius() const;
  //! Returns a Boolean on the status seen or hidden of the <br>
//!          camera. <br>
//!          If True the camera has seen. <br>
//!          If False the camera has hidden. <br>
  Standard_EXPORT     Standard_Boolean SeeOrHide(const Handle(V3d_View)& aView) const;
  //! Returns the type of pick element. <br>
//!          "POSITIONCAMERA"  : Representation of camera position. <br>
//!          "SPACECAMERA"     : Representation of picking sphere. <br>
//!          "ExtRADIUSCAMERA" : Representation of extern arrow. <br>
//!          "IntRADIUSCAMERA" : Representation of intern arrow. <br>
//!          "RADIUSTEXTCAMERA": Representation of radius value. <br>
//!          "NOTHINGCAMERA"   : Any component of camera. <br>
//!          Determinate which type of tracking apply. <br>
  Standard_EXPORT     V3d_TypeOfPickCamera Pick(const Handle(V3d_View)& aView,const Standard_Integer Xpix,const Standard_Integer Ypix) const;




  DEFINE_STANDARD_RTTI(V3d_Camera)

protected:




private: 

  //! Defined the representation of camera position. <br>
  Standard_EXPORT     void Symbol(const Handle(Graphic3d_Group)& gsymbol,const Handle(V3d_View)& aView) const;
  //! Returns the symetric point coordinates of "aPoint" <br>
//!          on the sphere of center "Center" and radius "Radius". <br>
//!          VX,VY,VZ is the project vector of view. <br>
  Standard_EXPORT   static  void SymetricPointOnSphere(const Handle(V3d_View)& aView,const Graphic3d_Vertex& Center,const Graphic3d_Vertex& aPoint,const Quantity_Parameter Radius,V3d_Coordinate& X,V3d_Coordinate& Y,V3d_Coordinate& Z,Quantity_Parameter& VX,Quantity_Parameter& VY,Quantity_Parameter& VZ) ;

Graphic3d_Vertex MyPosition;
Graphic3d_Vertex MyTarget;
Quantity_PlaneAngle MyAngle;
Quantity_PlaneAngle MyAperture;
Handle_Graphic3d_Structure MyGraphicStructure;
Handle_Graphic3d_Structure MyGraphicStructure1;
V3d_TypeOfRepresentation MyTypeOfRepresentation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
