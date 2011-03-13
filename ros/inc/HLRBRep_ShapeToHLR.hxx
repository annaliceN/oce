// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_ShapeToHLR_HeaderFile
#define _HLRBRep_ShapeToHLR_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_HLRBRep_Data_HeaderFile
#include <Handle_HLRBRep_Data.hxx>
#endif
#ifndef _Handle_HLRTopoBRep_OutLiner_HeaderFile
#include <Handle_HLRTopoBRep_OutLiner.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class HLRBRep_Data;
class HLRTopoBRep_OutLiner;
class HLRAlgo_Projector;
class BRepTopAdaptor_MapOfShapeTool;
class TopTools_IndexedMapOfShape;
class TopoDS_Face;


//! compute  the   OutLinedShape  of  a Shape with  an <br>
//!          OutLiner,    a  Projector  and   create  the  Data <br>
//!          Structure of a Shape. <br>
class HLRBRep_ShapeToHLR  {
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

  //! Creates  a DataStructure   containing the OutLiner <br>
//!          <S> depending on the projector <P> and nbIso. <br>
  Standard_EXPORT   static  Handle_HLRBRep_Data Load(const Handle(HLRTopoBRep_OutLiner)& S,const HLRAlgo_Projector& P,BRepTopAdaptor_MapOfShapeTool& MST,const Standard_Integer nbIso = 0) ;





protected:





private:

  
  Standard_EXPORT   static  void ExploreFace(const Handle(HLRTopoBRep_OutLiner)& S,const Handle(HLRBRep_Data)& DS,const TopTools_IndexedMapOfShape& FM,const TopTools_IndexedMapOfShape& EM,Standard_Integer& i,const TopoDS_Face& F,const Standard_Boolean closed) ;
  
  Standard_EXPORT   static  void ExploreShape(const Handle(HLRTopoBRep_OutLiner)& S,const Handle(HLRBRep_Data)& DS,const TopTools_IndexedMapOfShape& FM,const TopTools_IndexedMapOfShape& EM) ;




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
