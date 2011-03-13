// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_Hyperbola_HeaderFile
#define _PGeom_Hyperbola_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom_Hyperbola_HeaderFile
#include <Handle_PGeom_Hyperbola.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _PGeom_Conic_HeaderFile
#include <PGeom_Conic.hxx>
#endif
class gp_Ax2;


class PGeom_Hyperbola : public PGeom_Conic {

public:

  //!Creates an Hyperbola with default values. <br>
  Standard_EXPORT   PGeom_Hyperbola();
  //!  Creates an   Hyperbola    with      <aPosition>, <br>
//!         <aMajorRadius> and  <aMinorRadius> as field values. <br>
//!         The major  radius of the hyperbola is  on the XAxis <br>
//!         and   the minor  radius is  on    the YAxis of  the <br>
//!         hyperbola. <br>
  Standard_EXPORT   PGeom_Hyperbola(const gp_Ax2& aPosition,const Standard_Real aMajorRadius,const Standard_Real aMinorRadius);
  //! Set the value of the field majorRadius with <aMajorRadius>. <br>
  Standard_EXPORT     void MajorRadius(const Standard_Real aMajorRadius) ;
  //! Returns the value of the field majorRadius. <br>
  Standard_EXPORT     Standard_Real MajorRadius() const;
  //! Set the value of the field minorRadius with <aMinorRadius>. <br>
  Standard_EXPORT     void MinorRadius(const Standard_Real aMinorRadius) ;
  //! Returns the value of the field minorRadius. <br>
  Standard_EXPORT     Standard_Real MinorRadius() const;

PGeom_Hyperbola(const Storage_stCONSTclCOM& a) : PGeom_Conic(a)
{
  
}
    Standard_Real _CSFDB_GetPGeom_HyperbolamajorRadius() const { return majorRadius; }
    void _CSFDB_SetPGeom_HyperbolamajorRadius(const Standard_Real p) { majorRadius = p; }
    Standard_Real _CSFDB_GetPGeom_HyperbolaminorRadius() const { return minorRadius; }
    void _CSFDB_SetPGeom_HyperbolaminorRadius(const Standard_Real p) { minorRadius = p; }



  DEFINE_STANDARD_RTTI(PGeom_Hyperbola)

protected:




private: 


Standard_Real majorRadius;
Standard_Real minorRadius;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
