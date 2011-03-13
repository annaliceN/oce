// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToIGES_GeomSurface_HeaderFile
#define _GeomToIGES_GeomSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomToIGES_GeomEntity_HeaderFile
#include <GeomToIGES_GeomEntity.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Handle_Geom_BoundedSurface_HeaderFile
#include <Handle_Geom_BoundedSurface.hxx>
#endif
#ifndef _Handle_Geom_BSplineSurface_HeaderFile
#include <Handle_Geom_BSplineSurface.hxx>
#endif
#ifndef _Handle_Geom_BezierSurface_HeaderFile
#include <Handle_Geom_BezierSurface.hxx>
#endif
#ifndef _Handle_Geom_RectangularTrimmedSurface_HeaderFile
#include <Handle_Geom_RectangularTrimmedSurface.hxx>
#endif
#ifndef _Handle_Geom_ElementarySurface_HeaderFile
#include <Handle_Geom_ElementarySurface.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _Handle_Geom_CylindricalSurface_HeaderFile
#include <Handle_Geom_CylindricalSurface.hxx>
#endif
#ifndef _Handle_Geom_ConicalSurface_HeaderFile
#include <Handle_Geom_ConicalSurface.hxx>
#endif
#ifndef _Handle_Geom_SphericalSurface_HeaderFile
#include <Handle_Geom_SphericalSurface.hxx>
#endif
#ifndef _Handle_Geom_ToroidalSurface_HeaderFile
#include <Handle_Geom_ToroidalSurface.hxx>
#endif
#ifndef _Handle_Geom_SweptSurface_HeaderFile
#include <Handle_Geom_SweptSurface.hxx>
#endif
#ifndef _Handle_Geom_SurfaceOfLinearExtrusion_HeaderFile
#include <Handle_Geom_SurfaceOfLinearExtrusion.hxx>
#endif
#ifndef _Handle_Geom_SurfaceOfRevolution_HeaderFile
#include <Handle_Geom_SurfaceOfRevolution.hxx>
#endif
#ifndef _Handle_Geom_OffsetSurface_HeaderFile
#include <Handle_Geom_OffsetSurface.hxx>
#endif
class GeomToIGES_GeomEntity;
class IGESData_IGESEntity;
class Geom_Surface;
class Geom_BoundedSurface;
class Geom_BSplineSurface;
class Geom_BezierSurface;
class Geom_RectangularTrimmedSurface;
class Geom_ElementarySurface;
class Geom_Plane;
class Geom_CylindricalSurface;
class Geom_ConicalSurface;
class Geom_SphericalSurface;
class Geom_ToroidalSurface;
class Geom_SweptSurface;
class Geom_SurfaceOfLinearExtrusion;
class Geom_SurfaceOfRevolution;
class Geom_OffsetSurface;


//! This class implements the transfer of the Surface Entity from Geom <br>
//!          To IGES. These can be : <br>
//!          . BoundedSurface <br>
//!               * BSplineSurface <br>
//!               * BezierSurface <br>
//!               * RectangularTrimmedSurface <br>
//!          . ElementarySurface <br>
//!               * Plane <br>
//!               * CylindricalSurface <br>
//!               * ConicalSurface <br>
//!               * SphericalSurface <br>
//!               * ToroidalSurface <br>
//!          . SweptSurface <br>
//!               * SurfaceOfLinearExtrusion <br>
//!               * SurfaceOfRevolution <br>
//!          . OffsetSurface <br>
class GeomToIGES_GeomSurface  : public GeomToIGES_GeomEntity {
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

  
  Standard_EXPORT   GeomToIGES_GeomSurface();
  //! Creates a tool GeomSurface ready to run and sets its <br>
//!          fields as GE's. <br>
  Standard_EXPORT   GeomToIGES_GeomSurface(const GeomToIGES_GeomEntity& GE);
  //! Transfert  a  GeometryEntity which  answer True  to  the <br>
//!          member : BRepToIGES::IsGeomSurface(Geometry).  If this <br>
//!          Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_Surface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_BoundedSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_BSplineSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_BezierSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_RectangularTrimmedSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_ElementarySurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_Plane)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_CylindricalSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_ConicalSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_SphericalSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_ToroidalSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_SweptSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_SurfaceOfLinearExtrusion)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_SurfaceOfRevolution)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSurface(const Handle(Geom_OffsetSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferPlaneSurface(const Handle(Geom_Plane)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferCylindricalSurface(const Handle(Geom_CylindricalSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferConicalSurface(const Handle(Geom_ConicalSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferSphericalSurface(const Handle(Geom_SphericalSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferToroidalSurface(const Handle(Geom_ToroidalSurface)& start,const Standard_Real Udeb,const Standard_Real Ufin,const Standard_Real Vdeb,const Standard_Real Vfin) ;
  //! Returns the value of "TheLength" <br>
  Standard_EXPORT     Standard_Real Length() const;
  //! Returns Brep mode flag. <br>
  Standard_EXPORT     Standard_Boolean GetBRepMode() const;
  //! Sets BRep mode flag. <br>
  Standard_EXPORT     void SetBRepMode(const Standard_Boolean flag) ;
  //! Returns flag for writing elementary surfaces <br>
  Standard_EXPORT     Standard_Boolean GetAnalyticMode() const;
  //! Setst flag for writing elementary surfaces <br>
  Standard_EXPORT     void SetAnalyticMode(const Standard_Boolean flag) ;





protected:





private:



Standard_Real TheLength;
Standard_Boolean myBRepMode;
Standard_Boolean myAnalytic;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
