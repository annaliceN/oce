// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_LineTool_HeaderFile
#define _GeomInt_LineTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IntPatch_Line_HeaderFile
#include <Handle_IntPatch_Line.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class IntPatch_Line;
class IntPatch_Point;



class GeomInt_LineTool  {
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

  
  Standard_EXPORT   static  Standard_Integer NbVertex(const Handle(IntPatch_Line)& L) ;
  
  Standard_EXPORT   static const IntPatch_Point& Vertex(const Handle(IntPatch_Line)& L,const Standard_Integer I) ;
  
  Standard_EXPORT   static  Standard_Real FirstParameter(const Handle(IntPatch_Line)& L) ;
  
  Standard_EXPORT   static  Standard_Real LastParameter(const Handle(IntPatch_Line)& L) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
