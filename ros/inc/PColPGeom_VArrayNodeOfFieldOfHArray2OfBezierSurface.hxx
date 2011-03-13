// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColPGeom_VArrayNodeOfFieldOfHArray2OfBezierSurface_HeaderFile
#define _PColPGeom_VArrayNodeOfFieldOfHArray2OfBezierSurface_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColPGeom_VArrayNodeOfFieldOfHArray2OfBezierSurface_HeaderFile
#include <Handle_PColPGeom_VArrayNodeOfFieldOfHArray2OfBezierSurface.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_PGeom_BezierSurface_HeaderFile
#include <Handle_PGeom_BezierSurface.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class PGeom_BezierSurface;
class PColPGeom_FieldOfHArray2OfBezierSurface;
class PColPGeom_VArrayTNodeOfFieldOfHArray2OfBezierSurface;


class PColPGeom_VArrayNodeOfFieldOfHArray2OfBezierSurface : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PColPGeom_VArrayNodeOfFieldOfHArray2OfBezierSurface();
  
  Standard_EXPORT   PColPGeom_VArrayNodeOfFieldOfHArray2OfBezierSurface(const Handle(PGeom_BezierSurface)& aValue);
  
  Standard_EXPORT     void SetValue(const Handle(PGeom_BezierSurface)& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PColPGeom_VArrayNodeOfFieldOfHArray2OfBezierSurface(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Handle(PGeom_BezierSurface) _CSFDB_GetPColPGeom_VArrayNodeOfFieldOfHArray2OfBezierSurfacemyValue() const { return myValue; }
    void _CSFDB_SetPColPGeom_VArrayNodeOfFieldOfHArray2OfBezierSurfacemyValue(const Handle(PGeom_BezierSurface)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PColPGeom_VArrayNodeOfFieldOfHArray2OfBezierSurface)

protected:




private: 


Handle_PGeom_BezierSurface myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
