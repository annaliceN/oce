// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawFairCurve_MinimalVariation_HeaderFile
#define _DrawFairCurve_MinimalVariation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DrawFairCurve_MinimalVariation_HeaderFile
#include <Handle_DrawFairCurve_MinimalVariation.hxx>
#endif

#ifndef _DrawFairCurve_Batten_HeaderFile
#include <DrawFairCurve_Batten.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif


//! Interactive Draw object of type "MVC" <br>
class DrawFairCurve_MinimalVariation : public DrawFairCurve_Batten {

public:

  
  Standard_EXPORT   DrawFairCurve_MinimalVariation(const Standard_Address TheMVC);
  
  Standard_EXPORT     void SetCurvature(const Standard_Integer Side,const Standard_Real Rho) ;
  
  Standard_EXPORT     void SetPhysicalRatio(const Standard_Real Ratio) ;
  
  Standard_EXPORT     Standard_Real GetCurvature(const Standard_Integer Side) const;
  
  Standard_EXPORT     Standard_Real GetPhysicalRatio() const;
  
  Standard_EXPORT     void FreeCurvature(const Standard_Integer Side) ;




  DEFINE_STANDARD_RTTI(DrawFairCurve_MinimalVariation)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
