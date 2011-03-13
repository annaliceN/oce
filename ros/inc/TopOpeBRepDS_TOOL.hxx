// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_TOOL_HeaderFile
#define _TopOpeBRepDS_TOOL_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_HDataStructure_HeaderFile
#include <Handle_TopOpeBRepDS_HDataStructure.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopOpeBRepDS_HDataStructure;
class TopoDS_Edge;
class TopTools_ListOfShape;
class TopoDS_Shape;
class TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State;



class TopOpeBRepDS_TOOL  {
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

  
  Standard_EXPORT   static  Standard_Integer EShareG(const Handle(TopOpeBRepDS_HDataStructure)& HDS,const TopoDS_Edge& E,TopTools_ListOfShape& lEsd) ;
  
  Standard_EXPORT   static  Standard_Boolean ShareG(const Handle(TopOpeBRepDS_HDataStructure)& HDS,const Standard_Integer is1,const Standard_Integer is2) ;
  
  Standard_EXPORT   static  Standard_Boolean GetEsd(const Handle(TopOpeBRepDS_HDataStructure)& HDS,const TopoDS_Shape& S,const Standard_Integer ie,Standard_Integer& iesd) ;
  
  Standard_EXPORT   static  Standard_Boolean ShareSplitON(const Handle(TopOpeBRepDS_HDataStructure)& HDS,const TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State& MspON,const Standard_Integer i1,const Standard_Integer i2,TopoDS_Shape& spON) ;
  
  Standard_EXPORT   static  Standard_Boolean GetConfig(const Handle(TopOpeBRepDS_HDataStructure)& HDS,const TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State& MEspON,const Standard_Integer ie,const Standard_Integer iesd,Standard_Integer& conf) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
