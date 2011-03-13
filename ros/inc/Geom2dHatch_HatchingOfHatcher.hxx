// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dHatch_HatchingOfHatcher_HeaderFile
#define _Geom2dHatch_HatchingOfHatcher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Geom2dAdaptor_Curve_HeaderFile
#include <Geom2dAdaptor_Curve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _HatchGen_PointsOnHatching_HeaderFile
#include <HatchGen_PointsOnHatching.hxx>
#endif
#ifndef _HatchGen_ErrorStatus_HeaderFile
#include <HatchGen_ErrorStatus.hxx>
#endif
#ifndef _HatchGen_Domains_HeaderFile
#include <HatchGen_Domains.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_OutOfRange;
class Geom2dAdaptor_Curve;
class HatchGen_PointOnHatching;
class HatchGen_Domain;
class gp_Pnt2d;



class Geom2dHatch_HatchingOfHatcher  {
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

  
  Standard_EXPORT   Geom2dHatch_HatchingOfHatcher();
  
  Standard_EXPORT   Geom2dHatch_HatchingOfHatcher(const Geom2dAdaptor_Curve& Curve);
  
  Standard_EXPORT    const Geom2dAdaptor_Curve& Curve() const;
  
  Standard_EXPORT     Geom2dAdaptor_Curve& ChangeCurve() ;
  
  Standard_EXPORT     void TrimDone(const Standard_Boolean Flag) ;
  
  Standard_EXPORT     Standard_Boolean TrimDone() const;
  
  Standard_EXPORT     void TrimFailed(const Standard_Boolean Flag) ;
  
  Standard_EXPORT     Standard_Boolean TrimFailed() const;
  
  Standard_EXPORT     void IsDone(const Standard_Boolean Flag) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     void Status(const HatchGen_ErrorStatus Status) ;
  
  Standard_EXPORT     HatchGen_ErrorStatus Status() const;
  
  Standard_EXPORT     void AddPoint(const HatchGen_PointOnHatching& Point,const Standard_Real Confusion) ;
  
  Standard_EXPORT     Standard_Integer NbPoints() const;
  
  Standard_EXPORT    const HatchGen_PointOnHatching& Point(const Standard_Integer Index) const;
  
  Standard_EXPORT     HatchGen_PointOnHatching& ChangePoint(const Standard_Integer Index) ;
  
  Standard_EXPORT     void RemPoint(const Standard_Integer Index) ;
  
  Standard_EXPORT     void ClrPoints() ;
  
  Standard_EXPORT     void AddDomain(const HatchGen_Domain& Domain) ;
  
  Standard_EXPORT     Standard_Integer NbDomains() const;
  
  Standard_EXPORT    const HatchGen_Domain& Domain(const Standard_Integer Index) const;
  
  Standard_EXPORT     void RemDomain(const Standard_Integer Index) ;
  
  Standard_EXPORT     void ClrDomains() ;
  
  Standard_EXPORT     gp_Pnt2d ClassificationPoint() const;





protected:





private:



Geom2dAdaptor_Curve myCurve;
Standard_Boolean myTrimDone;
Standard_Boolean myTrimFailed;
HatchGen_PointsOnHatching myPoints;
Standard_Boolean myIsDone;
HatchGen_ErrorStatus myStatus;
HatchGen_Domains myDomains;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
