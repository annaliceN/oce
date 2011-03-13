// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_face_HeaderFile
#define _TopOpeBRepTool_face_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
class TopoDS_Wire;
class TopoDS_Face;



class TopOpeBRepTool_face  {
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

  
  Standard_EXPORT   TopOpeBRepTool_face();
  
  Standard_EXPORT     Standard_Boolean Init(const TopoDS_Wire& W,const TopoDS_Face& Fref) ;
  
  Standard_EXPORT    const TopoDS_Wire& W() const;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Standard_Boolean Finite() const;
  
  Standard_EXPORT    const TopoDS_Face& Ffinite() const;
  
  Standard_EXPORT     TopoDS_Face RealF() const;





protected:





private:



TopoDS_Wire myW;
Standard_Boolean myfinite;
TopoDS_Face myFfinite;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
