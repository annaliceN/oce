// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_TopolTool_HeaderFile
#define _IntTools_TopolTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntTools_TopolTool_HeaderFile
#include <Handle_IntTools_TopolTool.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Adaptor3d_TopolTool_HeaderFile
#include <Adaptor3d_TopolTool.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
class Standard_DomainError;
class Adaptor3d_HSurface;
class gp_Pnt2d;
class gp_Pnt;


//! Class redefine methods of TopolTool from Adaptor3d <br>
//!         concerning sample points <br>
class IntTools_TopolTool : public Adaptor3d_TopolTool {

public:

  
//! Empty constructor <br>
  Standard_EXPORT   IntTools_TopolTool();
  
//! Initializes me by surface <br>
  Standard_EXPORT   IntTools_TopolTool(const Handle(Adaptor3d_HSurface)& theSurface);
  
//! Redefined empty initializer <br>
  Standard_EXPORT   virtual  void Initialize() ;
  
//! Initializes me by surface <br>
  Standard_EXPORT   virtual  void Initialize(const Handle(Adaptor3d_HSurface)& theSurface) ;
  
//! <br>
  Standard_EXPORT   virtual  void ComputeSamplePoints() ;
  
//! Computes the sample-points for the intersections algorithms <br>
  Standard_EXPORT   virtual  Standard_Integer NbSamplesU() ;
  
//! Computes the sample-points for the intersections algorithms <br>
  Standard_EXPORT   virtual  Standard_Integer NbSamplesV() ;
  
//! Computes the sample-points for the intersections algorithms <br>
  Standard_EXPORT   virtual  Standard_Integer NbSamples() ;
  
//! Returns a 2d point from surface myS <br>
//! and a corresponded 3d point <br>
//! for given index. <br>
//! The index should be from 1 to NbSamples() <br>
  Standard_EXPORT   virtual  void SamplePoint(const Standard_Integer Index,gp_Pnt2d& P2d,gp_Pnt& P3d) ;
  //! compute the sample-points for the intersections algorithms <br>
//! by adaptive algorithm for BSpline surfaces. For other surfaces algorithm <br>
//! is the same as in method ComputeSamplePoints(), but only fill arrays of U <br>
//! and V sample parameters; <br>
//! theDefl is a requred deflection <br>
//! theNUmin, theNVmin are minimal nb points for U and V. <br>
  Standard_EXPORT   virtual  void SamplePnts(const Standard_Real theDefl,const Standard_Integer theNUmin,const Standard_Integer theNVmin) ;




  DEFINE_STANDARD_RTTI(IntTools_TopolTool)

protected:




private: 


Standard_Integer myNbSmplU;
Standard_Integer myNbSmplV;
Standard_Real myU0;
Standard_Real myV0;
Standard_Real myDU;
Standard_Real myDV;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
