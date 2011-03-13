// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_TrimmedCurve_HeaderFile
#define _PGeom2d_TrimmedCurve_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom2d_TrimmedCurve_HeaderFile
#include <Handle_PGeom2d_TrimmedCurve.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_PGeom2d_Curve_HeaderFile
#include <Handle_PGeom2d_Curve.hxx>
#endif
#ifndef _PGeom2d_BoundedCurve_HeaderFile
#include <PGeom2d_BoundedCurve.hxx>
#endif
class PGeom2d_Curve;


class PGeom2d_TrimmedCurve : public PGeom2d_BoundedCurve {

public:

  //! Creates a TrimmedCurve with default values. <br>
  Standard_EXPORT   PGeom2d_TrimmedCurve();
  //! Creates a TrimmedCurve with these field values. <br>
  Standard_EXPORT   PGeom2d_TrimmedCurve(const Handle(PGeom2d_Curve)& aBasisCurve,const Standard_Real aFirstU,const Standard_Real aLastU);
  //! Set the value of the field firstU with <aFirstU>. <br>
  Standard_EXPORT     void FirstU(const Standard_Real aFirstU) ;
  //! Returns the value of the field firstU. <br>
  Standard_EXPORT     Standard_Real FirstU() const;
  //! Set the value of the field lastU with <aLastU>. <br>
  Standard_EXPORT     void LastU(const Standard_Real aLastU) ;
  //! Returns the value of the field lastU. <br>
  Standard_EXPORT     Standard_Real LastU() const;
  //! Set the value of the field basisCurve with <aBasisCurve>. <br>
//!  This curve can be a trimmed curve. <br>
  Standard_EXPORT     void BasisCurve(const Handle(PGeom2d_Curve)& aBasisCurve) ;
  //! Returns the value of the field basisCurve. <br>
//!  This curve can be a trimmed curve. <br>
  Standard_EXPORT     Handle_PGeom2d_Curve BasisCurve() const;

PGeom2d_TrimmedCurve(const Storage_stCONSTclCOM& a) : PGeom2d_BoundedCurve(a)
{
  
}
    Handle(PGeom2d_Curve) _CSFDB_GetPGeom2d_TrimmedCurvebasisCurve() const { return basisCurve; }
    void _CSFDB_SetPGeom2d_TrimmedCurvebasisCurve(const Handle(PGeom2d_Curve)& p) { basisCurve = p; }
    Standard_Real _CSFDB_GetPGeom2d_TrimmedCurvefirstU() const { return firstU; }
    void _CSFDB_SetPGeom2d_TrimmedCurvefirstU(const Standard_Real p) { firstU = p; }
    Standard_Real _CSFDB_GetPGeom2d_TrimmedCurvelastU() const { return lastU; }
    void _CSFDB_SetPGeom2d_TrimmedCurvelastU(const Standard_Real p) { lastU = p; }



  DEFINE_STANDARD_RTTI(PGeom2d_TrimmedCurve)

protected:




private: 


Handle_PGeom2d_Curve basisCurve;
Standard_Real firstU;
Standard_Real lastU;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
