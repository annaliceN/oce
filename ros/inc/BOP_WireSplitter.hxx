// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_WireSplitter_HeaderFile
#define _BOP_WireSplitter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BOPTColStd_ListOfListOfShape_HeaderFile
#include <BOPTColStd_ListOfListOfShape.hxx>
#endif
#ifndef _BOP_IndexedDataMapOfVertexListEdgeInfo_HeaderFile
#include <BOP_IndexedDataMapOfVertexListEdgeInfo.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
class TopoDS_Face;
class TopTools_ListOfShape;
class BOPTColStd_ListOfListOfShape;



//!  the algorithm to split multiconnexed <br>
//!  wires on a face onto biconnexed ones <br>
//!  . <br>
class BOP_WireSplitter  {
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

  
//! Empty constructor; <br>
      BOP_WireSplitter();
  
//! Modifier <br>
        void SetFace(const TopoDS_Face& aF) ;
  
//! Perform the algorithm using the  list of shapes <aLE> as data <br>
  Standard_EXPORT     void DoWithListOfEdges(const TopTools_ListOfShape& aLE) ;
  
//! Perform the algorithm using the face as data <br>
  Standard_EXPORT     void DoWithFace() ;
  
//! Returns TRUE if the source wire is biconnexed and <br>
//! there is nothing to correct <br>
        Standard_Boolean IsNothingToDo() const;
  
//! Returns TRUE if the algorithm was performed <br>
//! successfuly <br>
        Standard_Boolean IsDone() const;
  
//! Selector <br>
       const TopoDS_Face& Face() const;
  
//! Selector <br>
       const BOPTColStd_ListOfListOfShape& Shapes() const;





protected:





private:

  
//! Perform the algorithm <br>
  Standard_EXPORT     void Do() ;


TopoDS_Face myFace;
Standard_Boolean myIsDone;
Standard_Boolean myNothingToDo;
BOPTColStd_ListOfListOfShape myShapes;
BOP_IndexedDataMapOfVertexListEdgeInfo mySmartMap;
TopTools_ListOfShape myEdges;


};


#include <BOP_WireSplitter.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
