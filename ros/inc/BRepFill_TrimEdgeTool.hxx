// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_TrimEdgeTool_HeaderFile
#define _BRepFill_TrimEdgeTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Bisector_Bisec_HeaderFile
#include <Bisector_Bisec.hxx>
#endif
#ifndef _Geom2dAdaptor_Curve_HeaderFile
#include <Geom2dAdaptor_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_Geometry_HeaderFile
#include <Handle_Geom2d_Geometry.hxx>
#endif
class Geom2d_Curve;
class Bisector_Bisec;
class Geom2d_Geometry;
class TopoDS_Edge;
class TColgp_SequenceOfPnt;
class gp_Pnt2d;



class BRepFill_TrimEdgeTool  {
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

  
  Standard_EXPORT   BRepFill_TrimEdgeTool();
  
  Standard_EXPORT   BRepFill_TrimEdgeTool(const Bisector_Bisec& Bisec,const Handle(Geom2d_Geometry)& S1,const Handle(Geom2d_Geometry)& S2,const Standard_Real Offset);
  
  Standard_EXPORT     void IntersectWith(const TopoDS_Edge& Edge1,const TopoDS_Edge& Edge2,TColgp_SequenceOfPnt& Params) ;
  
  Standard_EXPORT     void AddOrConfuse(const Standard_Boolean Start,const TopoDS_Edge& Edge1,const TopoDS_Edge& Edge2,TColgp_SequenceOfPnt& Params) const;
  
  Standard_EXPORT     Standard_Boolean IsInside(const gp_Pnt2d& P) const;





protected:





private:



Standard_Boolean isPoint1;
Standard_Boolean isPoint2;
gp_Pnt2d myP1;
gp_Pnt2d myP2;
Handle_Geom2d_Curve myC1;
Handle_Geom2d_Curve myC2;
Standard_Real myOffset;
Bisector_Bisec myBisec;
Geom2dAdaptor_Curve myBis;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
