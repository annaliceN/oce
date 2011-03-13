// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dHatch_ElementOfHatcher_HeaderFile
#define _Geom2dHatch_ElementOfHatcher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Geom2dAdaptor_Curve_HeaderFile
#include <Geom2dAdaptor_Curve.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
class Geom2dAdaptor_Curve;



class Geom2dHatch_ElementOfHatcher  {
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

  
  Standard_EXPORT   Geom2dHatch_ElementOfHatcher();
  
  Standard_EXPORT   Geom2dHatch_ElementOfHatcher(const Geom2dHatch_ElementOfHatcher& Other);
  
  Standard_EXPORT   Geom2dHatch_ElementOfHatcher(const Geom2dAdaptor_Curve& Curve,const TopAbs_Orientation Orientation = TopAbs_FORWARD);
  
  Standard_EXPORT    const Geom2dAdaptor_Curve& Curve() const;
  
  Standard_EXPORT     Geom2dAdaptor_Curve& ChangeCurve() ;
  
  Standard_EXPORT     void Orientation(const TopAbs_Orientation Orientation) ;
  
  Standard_EXPORT     TopAbs_Orientation Orientation() const;





protected:





private:



Geom2dAdaptor_Curve myCurve;
TopAbs_Orientation myOrientation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
