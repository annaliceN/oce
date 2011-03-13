// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FEmTool_Curve_HeaderFile
#define _FEmTool_Curve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_FEmTool_Curve_HeaderFile
#include <Handle_FEmTool_Curve.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_PLib_Base_HeaderFile
#include <Handle_PLib_Base.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _TColStd_Array1OfInteger_HeaderFile
#include <TColStd_Array1OfInteger.hxx>
#endif
#ifndef _TColStd_Array1OfReal_HeaderFile
#include <TColStd_Array1OfReal.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class PLib_Base;
class TColStd_HArray1OfReal;
class Standard_DimensionError;
class TColStd_Array1OfReal;
class TColStd_Array2OfReal;


//!  Curve defined by Polynomial Elements. <br>
class FEmTool_Curve : public MMgt_TShared {

public:

  
  Standard_EXPORT   FEmTool_Curve(const Standard_Integer Dimension,const Standard_Integer NbElements,const Handle(PLib_Base)& TheBase,const Standard_Real Tolerance);
  
  Standard_EXPORT     TColStd_Array1OfReal& Knots() const;
  
  Standard_EXPORT     void SetElement(const Standard_Integer IndexOfElement,const TColStd_Array2OfReal& Coeffs) ;
  
  Standard_EXPORT     void D0(const Standard_Real U,TColStd_Array1OfReal& Pnt) ;
  
  Standard_EXPORT     void D1(const Standard_Real U,TColStd_Array1OfReal& Vec) ;
  
  Standard_EXPORT     void D2(const Standard_Real U,TColStd_Array1OfReal& Vec) ;
  
  Standard_EXPORT     void Length(const Standard_Real FirstU,const Standard_Real LastU,Standard_Real& Length) ;
  
  Standard_EXPORT     void GetElement(const Standard_Integer IndexOfElement,TColStd_Array2OfReal& Coeffs) ;
  //!  returns  coefficients  of  all  elements  in  canonical  base. <br>
  Standard_EXPORT     void GetPolynom(TColStd_Array1OfReal& Coeffs) ;
  
  Standard_EXPORT     Standard_Integer NbElements() const;
  
  Standard_EXPORT     Standard_Integer Dimension() const;
  
  Standard_EXPORT     Handle_PLib_Base Base() const;
  
  Standard_EXPORT     Standard_Integer Degree(const Standard_Integer IndexOfElement) const;
  
  Standard_EXPORT     void SetDegree(const Standard_Integer IndexOfElement,const Standard_Integer Degree) ;
  
  Standard_EXPORT     void ReduceDegree(const Standard_Integer IndexOfElement,const Standard_Real Tol,Standard_Integer& NewDegree,Standard_Real& MaxError) ;




  DEFINE_STANDARD_RTTI(FEmTool_Curve)

protected:




private: 

  
  Standard_EXPORT     void Update(const Standard_Integer Element,const Standard_Integer Order) ;

Standard_Integer myNbElements;
Standard_Integer myDimension;
Standard_Real myTolerance;
Handle_PLib_Base myBase;
Handle_TColStd_HArray1OfReal myKnots;
TColStd_Array1OfInteger myDegree;
TColStd_Array1OfReal myCoeff;
TColStd_Array1OfReal myPoly;
TColStd_Array1OfReal myDeri;
TColStd_Array1OfReal myDsecn;
TColStd_Array1OfInteger HasPoly;
TColStd_Array1OfInteger HasDeri;
TColStd_Array1OfInteger HasSecn;
TColStd_Array1OfReal myLength;
Standard_Real Uf;
Standard_Real Ul;
Standard_Real Denom;
Standard_Real USum;
Standard_Integer myIndex;
Standard_Integer myPtr;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
