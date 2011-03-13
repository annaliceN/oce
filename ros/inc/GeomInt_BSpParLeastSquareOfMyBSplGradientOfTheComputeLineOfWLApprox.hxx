// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox_HeaderFile
#define _GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _AppParCurves_Constraint_HeaderFile
#include <AppParCurves_Constraint.hxx>
#endif
#ifndef _AppParCurves_MultiBSpCurve_HeaderFile
#include <AppParCurves_MultiBSpCurve.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _math_Matrix_HeaderFile
#include <math_Matrix.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _math_IntegerVector_HeaderFile
#include <math_IntegerVector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TColStd_HArray1OfReal;
class TColStd_HArray1OfInteger;
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_DimensionError;
class Standard_NoSuchObject;
class GeomInt_TheMultiLineOfWLApprox;
class GeomInt_TheMultiLineToolOfWLApprox;
class math_Vector;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;
class AppParCurves_MultiCurve;
class AppParCurves_MultiBSpCurve;
class math_Matrix;
class math_IntegerVector;



class GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox  {
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

  
  Standard_EXPORT   GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox(const GeomInt_TheMultiLineOfWLApprox& SSP,const Standard_Integer FirstPoint,const Standard_Integer LastPoint,const AppParCurves_Constraint FirstCons,const AppParCurves_Constraint LastCons,const math_Vector& Parameters,const Standard_Integer NbPol);
  
  Standard_EXPORT   GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox(const GeomInt_TheMultiLineOfWLApprox& SSP,const Standard_Integer FirstPoint,const Standard_Integer LastPoint,const AppParCurves_Constraint FirstCons,const AppParCurves_Constraint LastCons,const Standard_Integer NbPol);
  
  Standard_EXPORT   GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox(const GeomInt_TheMultiLineOfWLApprox& SSP,const TColStd_Array1OfReal& Knots,const TColStd_Array1OfInteger& Mults,const Standard_Integer FirstPoint,const Standard_Integer LastPoint,const AppParCurves_Constraint FirstCons,const AppParCurves_Constraint LastCons,const math_Vector& Parameters,const Standard_Integer NbPol);
  
  Standard_EXPORT   GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox(const GeomInt_TheMultiLineOfWLApprox& SSP,const TColStd_Array1OfReal& Knots,const TColStd_Array1OfInteger& Mults,const Standard_Integer FirstPoint,const Standard_Integer LastPoint,const AppParCurves_Constraint FirstCons,const AppParCurves_Constraint LastCons,const Standard_Integer NbPol);
  
  Standard_EXPORT     void Perform(const math_Vector& Parameters) ;
  
  Standard_EXPORT     void Perform(const math_Vector& Parameters,const Standard_Real l1,const Standard_Real l2) ;
  
  Standard_EXPORT     void Perform(const math_Vector& Parameters,const math_Vector& V1t,const math_Vector& V2t,const Standard_Real l1,const Standard_Real l2) ;
  
  Standard_EXPORT     void Perform(const math_Vector& Parameters,const math_Vector& V1t,const math_Vector& V2t,const math_Vector& V1c,const math_Vector& V2c,const Standard_Real l1,const Standard_Real l2) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     AppParCurves_MultiCurve BezierValue() ;
  
  Standard_EXPORT    const AppParCurves_MultiBSpCurve& BSplineValue() ;
  
  Standard_EXPORT    const math_Matrix& FunctionMatrix() const;
  
  Standard_EXPORT    const math_Matrix& DerivativeFunctionMatrix() const;
  
  Standard_EXPORT     void ErrorGradient(math_Vector& Grad,Standard_Real& F,Standard_Real& MaxE3d,Standard_Real& MaxE2d) ;
  
  Standard_EXPORT    const math_Matrix& Distance() ;
  
  Standard_EXPORT     void Error(Standard_Real& F,Standard_Real& MaxE3d,Standard_Real& MaxE2d) ;
  
  Standard_EXPORT     Standard_Real FirstLambda() const;
  
  Standard_EXPORT     Standard_Real LastLambda() const;
  
  Standard_EXPORT    const math_Matrix& Points() const;
  
  Standard_EXPORT    const math_Matrix& Poles() const;
  
  Standard_EXPORT    const math_IntegerVector& KIndex() const;





protected:

  
  Standard_EXPORT     void Init(const GeomInt_TheMultiLineOfWLApprox& SSP,const Standard_Integer FirstPoint,const Standard_Integer LastPoint) ;
  
  Standard_EXPORT     Standard_Integer NbBColumns(const GeomInt_TheMultiLineOfWLApprox& SSP) const;
  
  Standard_EXPORT     Standard_Integer TheFirstPoint(const AppParCurves_Constraint FirstCons,const Standard_Integer FirstPoint) const;
  
  Standard_EXPORT     Standard_Integer TheLastPoint(const AppParCurves_Constraint LastCons,const Standard_Integer LastPoint) const;
  
  Standard_EXPORT     void Affect(const GeomInt_TheMultiLineOfWLApprox& SSP,const Standard_Integer Index,AppParCurves_Constraint& Cons,math_Vector& Vt,math_Vector& Vc) ;
  
  Standard_EXPORT     void ComputeFunction(const math_Vector& Parameters) ;
  
  Standard_EXPORT     void SearchIndex(math_IntegerVector& Index) ;
  
  Standard_EXPORT     void MakeTAA(math_Vector& TheA,math_Vector& TheB) ;
  
  Standard_EXPORT     void MakeTAA(math_Vector& TheA) ;
  
  Standard_EXPORT     void MakeTAA(math_Vector& TheA,math_Matrix& TheB) ;




private:



AppParCurves_Constraint FirstConstraint;
AppParCurves_Constraint LastConstraint;
AppParCurves_MultiBSpCurve SCU;
Handle_TColStd_HArray1OfReal myknots;
Handle_TColStd_HArray1OfInteger mymults;
math_Matrix mypoles;
math_Matrix A;
math_Matrix DA;
math_Matrix B2;
math_Matrix mypoints;
math_Vector Vflatknots;
math_Vector Vec1t;
math_Vector Vec1c;
math_Vector Vec2t;
math_Vector Vec2c;
math_Matrix theError;
math_IntegerVector myindex;
Standard_Real ERR3d;
Standard_Real ERR2d;
Standard_Real lambda1;
Standard_Real lambda2;
Standard_Integer FirstP;
Standard_Integer LastP;
Standard_Integer Nlignes;
Standard_Integer Ninc;
Standard_Integer NA;
Standard_Integer myfirstp;
Standard_Integer mylastp;
Standard_Integer resinit;
Standard_Integer resfin;
Standard_Integer nbP2d;
Standard_Integer nbP;
Standard_Integer nbpoles;
Standard_Integer deg;
Standard_Boolean done;
Standard_Boolean iscalculated;
Standard_Boolean isready;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
