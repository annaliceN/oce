// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_BooleanOperation_HeaderFile
#define _BRepAlgo_BooleanOperation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TopOpeBRepBuild_HBuilder_HeaderFile
#include <Handle_TopOpeBRepBuild_HBuilder.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopTools_MapOfShape_HeaderFile
#include <TopTools_MapOfShape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeShape_HeaderFile
#include <TopTools_DataMapOfShapeShape.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
class TopOpeBRepBuild_HBuilder;
class TopoDS_Shape;
class TopTools_ListOfShape;


//!  The abstract class BooleanOperation is the root <br>
//! class of Boolean operations. <br>
//! A BooleanOperation object stores the two shapes in <br>
//! preparation for the Boolean operation specified in <br>
//! one of the classes inheriting from this one. These include: <br>
//! - Common <br>
//! - Cut <br>
//! - Fuse <br>
//! - Section. <br>
class BRepAlgo_BooleanOperation  : public BRepBuilderAPI_MakeShape {
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

  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~BRepAlgo_BooleanOperation() {Delete();}
  
  Standard_EXPORT     void PerformDS() ;
  
  Standard_EXPORT     void Perform(const TopAbs_State St1,const TopAbs_State St2) ;
  
  Standard_EXPORT     Handle_TopOpeBRepBuild_HBuilder Builder() const;
  //! Returns the first shape involved in this Boolean operation. <br>
  Standard_EXPORT    const TopoDS_Shape& Shape1() const;
  //! Returns the second shape involved in this Boolean operation. <br>
  Standard_EXPORT    const TopoDS_Shape& Shape2() const;
  //! Returns the list  of shapes modified from the shape <br>
//!          <S>. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Modified(const TopoDS_Shape& S) ;
  
  Standard_EXPORT   virtual  Standard_Boolean IsDeleted(const TopoDS_Shape& S) ;





protected:

  //! Prepares the operations for S1 and S2. <br>
  Standard_EXPORT   BRepAlgo_BooleanOperation(const TopoDS_Shape& S1,const TopoDS_Shape& S2);
  
  Standard_EXPORT     void BuilderCanWork(const Standard_Boolean B) ;
  
  Standard_EXPORT     Standard_Boolean BuilderCanWork() const;
  
  Standard_EXPORT   virtual  void InitParameters() ;


Handle_TopOpeBRepBuild_HBuilder myHBuilder;
TopoDS_Shape myS1;
TopoDS_Shape myS2;


private:



TopTools_MapOfShape myMap;
Standard_Boolean myBuilderCanWork;
TopTools_DataMapOfShapeShape topToSew;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
