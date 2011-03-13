// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_Filling_HeaderFile
#define _GeomFill_Filling_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColgp_HArray2OfPnt_HeaderFile
#include <Handle_TColgp_HArray2OfPnt.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfReal_HeaderFile
#include <Handle_TColStd_HArray2OfReal.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TColgp_HArray2OfPnt;
class TColStd_HArray2OfReal;
class Standard_NoSuchObject;
class TColgp_Array2OfPnt;
class TColStd_Array2OfReal;



class GeomFill_Filling  {
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

  
  Standard_EXPORT   GeomFill_Filling();
  
  Standard_EXPORT     Standard_Integer NbUPoles() const;
  
  Standard_EXPORT     Standard_Integer NbVPoles() const;
  
  Standard_EXPORT     void Poles(TColgp_Array2OfPnt& Poles) const;
  
  Standard_EXPORT     Standard_Boolean isRational() const;
  
  Standard_EXPORT     void Weights(TColStd_Array2OfReal& Weights) const;





protected:



Standard_Boolean IsRational;
Handle_TColgp_HArray2OfPnt myPoles;
Handle_TColStd_HArray2OfReal myWeights;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
