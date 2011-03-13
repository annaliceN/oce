// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_HeaderFile
#define _TopOpeBRepTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _TopOpeBRepTool_OutCurveType_HeaderFile
#include <TopOpeBRepTool_OutCurveType.hxx>
#endif
class TopoDS_Face;
class TopTools_DataMapOfShapeInteger;
class TopTools_IndexedMapOfOrientedShape;
class TopTools_ListOfShape;
class TopTools_DataMapOfShapeListOfShape;
class TopoDS_Solid;
class TopOpeBRepTool_GeomTool;
class TopOpeBRepTool_AncestorsTool;
class TopOpeBRepTool_C2DF;
class TopOpeBRepTool_ListOfC2DF;
class TopOpeBRepTool_DataMapOfOrientedShapeC2DF;
class TopOpeBRepTool_DataMapOfShapeListOfC2DF;
class TopOpeBRepTool_IndexedDataMapOfSolidClassifier;
class TopOpeBRepTool_SolidClassifier;
class TopOpeBRepTool_CurveTool;
class TopOpeBRepTool_IndexedDataMapOfShapeBox2d;
class TopOpeBRepTool_IndexedDataMapOfShapeBox;
class TopOpeBRepTool_HBoxTool;
class TopOpeBRepTool_BoxSort;
class TopOpeBRepTool_ShapeExplorer;
class TopOpeBRepTool_ShapeTool;
class TopOpeBRepTool_ShapeClassifier;
class TopOpeBRepTool_connexity;
class TopOpeBRepTool_IndexedDataMapOfShapeconnexity;
class TopOpeBRepTool_face;
class TopOpeBRepTool_DataMapOfShapeface;
class TopOpeBRepTool_CLASSI;
class TopOpeBRepTool_TOOL;
class TopOpeBRepTool_CORRISO;
class TopOpeBRepTool_REGUW;
class TopOpeBRepTool_REGUS;
class TopOpeBRepTool_makeTransition;
class TopOpeBRepTool_mkTondgE;
class TopOpeBRepTool_PurgeInternalEdges;
class TopOpeBRepTool_FuseEdges;
class TopOpeBRepTool_ListNodeOfListOfC2DF;
class TopOpeBRepTool_ListIteratorOfListOfC2DF;
class TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF;
class TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF;
class TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF;
class TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF;
class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier;
class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox2d;
class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox;
class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity;
class TopOpeBRepTool_DataMapNodeOfDataMapOfShapeface;
class TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeface;


//! This package provides services used by the TopOpeBRep <br>
//!          package performing topological operations on the BRep <br>
//!          data structure. <br>
//! <br>
class TopOpeBRepTool  {
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

  //! In case face <FF> is built on UV-non-connexed  wires <br>
//!          (with the two closing edges  FORWARD and REVERSED, in <br>
//!          spite of one only), we find out the faulty edge, add <br>
//!          the faulty shapes (edge,wire,face) to <MshNOK>. <br>
//!          <FF> is a face descendant of <F>. <br>
//!          <MWisOld>(wire) = 1 if wire is wire of <F> <br>
//!                            0    wire results from <F>'s wire splitted. <br>
//!          returns false if purge fails <br>
  Standard_EXPORT   static  Standard_Boolean PurgeClosingEdges(const TopoDS_Face& F,const TopoDS_Face& FF,const TopTools_DataMapOfShapeInteger& MWisOld,TopTools_IndexedMapOfOrientedShape& MshNOK) ;
  
  Standard_EXPORT   static  Standard_Boolean PurgeClosingEdges(const TopoDS_Face& F,const TopTools_ListOfShape& LOF,const TopTools_DataMapOfShapeInteger& MWisOld,TopTools_IndexedMapOfOrientedShape& MshNOK) ;
  
  Standard_EXPORT   static  Standard_Boolean CorrectONUVISO(const TopoDS_Face& F,TopoDS_Face& Fsp) ;
  //! Builds up the correct list of faces <LOFF> from <LOF>, using <br>
//!          faulty shapes from map <MshNOK>. <br>
//!          <LOF> is the list of <F>'s descendant faces. <br>
//!          returns false if building fails <br>
  Standard_EXPORT   static  Standard_Boolean MakeFaces(const TopoDS_Face& F,const TopTools_ListOfShape& LOF,const TopTools_IndexedMapOfOrientedShape& MshNOK,TopTools_ListOfShape& LOFF) ;
  //! Returns <False>  if  the  face is  valid (the UV <br>
//!          representation  of  the  face is   a set   of  pcurves <br>
//!          connexed by points with   connexity 2). <br>
//!          Else,  splits <aFace> in order to return a list of valid <br>
//!          faces. <br>
  Standard_EXPORT   static  Standard_Boolean Regularize(const TopoDS_Face& aFace,TopTools_ListOfShape& aListOfFaces,TopTools_DataMapOfShapeListOfShape& ESplits) ;
  //! Returns <False>  if  the  face is  valid (the UV <br>
//!          representation  of  the  face is   a set   of  pcurves <br>
//!          connexed by points with   connexity 2). <br>
//!          Else,  splits wires of the face, these are boundaries of the <br>
//!          new faces to build up; <OldWiresNewWires> describes (wire, <br>
//!          splits of wire); <ESplits> describes (edge, edge's splits) <br>
  Standard_EXPORT   static  Standard_Boolean RegularizeWires(const TopoDS_Face& aFace,TopTools_DataMapOfShapeListOfShape& OldWiresNewWires,TopTools_DataMapOfShapeListOfShape& ESplits) ;
  //!  Classify wire's splits of map <OldWiresnewWires> in order to <br>
//!           compute <aListOfFaces>, the splits of <aFace>. <br>
  Standard_EXPORT   static  Standard_Boolean RegularizeFace(const TopoDS_Face& aFace,const TopTools_DataMapOfShapeListOfShape& OldWiresnewWires,TopTools_ListOfShape& aListOfFaces) ;
  //! Returns <False> if the shell is valid (the solid is a set <br>
//!          of faces connexed by edges with connexity 2). <br>
//!          Else, splits faces of the shell; <OldFacesnewFaces> describes <br>
//!          (face, splits of face). <br>
  Standard_EXPORT   static  Standard_Boolean RegularizeShells(const TopoDS_Solid& aSolid,TopTools_DataMapOfShapeListOfShape& OldSheNewShe,TopTools_DataMapOfShapeListOfShape& FSplits) ;
  //! Prints <OCT> as string on stream <S>; returns <S>. <br>
  Standard_EXPORT   static  Standard_OStream& Print(const TopOpeBRepTool_OutCurveType OCT,Standard_OStream& S) ;





protected:





private:




friend class TopOpeBRepTool_GeomTool;
friend class TopOpeBRepTool_AncestorsTool;
friend class TopOpeBRepTool_C2DF;
friend class TopOpeBRepTool_ListOfC2DF;
friend class TopOpeBRepTool_DataMapOfOrientedShapeC2DF;
friend class TopOpeBRepTool_DataMapOfShapeListOfC2DF;
friend class TopOpeBRepTool_IndexedDataMapOfSolidClassifier;
friend class TopOpeBRepTool_SolidClassifier;
friend class TopOpeBRepTool_CurveTool;
friend class TopOpeBRepTool_IndexedDataMapOfShapeBox2d;
friend class TopOpeBRepTool_IndexedDataMapOfShapeBox;
friend class TopOpeBRepTool_HBoxTool;
friend class TopOpeBRepTool_BoxSort;
friend class TopOpeBRepTool_ShapeExplorer;
friend class TopOpeBRepTool_ShapeTool;
friend class TopOpeBRepTool_ShapeClassifier;
friend class TopOpeBRepTool_connexity;
friend class TopOpeBRepTool_IndexedDataMapOfShapeconnexity;
friend class TopOpeBRepTool_face;
friend class TopOpeBRepTool_DataMapOfShapeface;
friend class TopOpeBRepTool_CLASSI;
friend class TopOpeBRepTool_TOOL;
friend class TopOpeBRepTool_CORRISO;
friend class TopOpeBRepTool_REGUW;
friend class TopOpeBRepTool_REGUS;
friend class TopOpeBRepTool_makeTransition;
friend class TopOpeBRepTool_mkTondgE;
friend class TopOpeBRepTool_PurgeInternalEdges;
friend class TopOpeBRepTool_FuseEdges;
friend class TopOpeBRepTool_ListNodeOfListOfC2DF;
friend class TopOpeBRepTool_ListIteratorOfListOfC2DF;
friend class TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF;
friend class TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF;
friend class TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF;
friend class TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF;
friend class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfSolidClassifier;
friend class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox2d;
friend class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox;
friend class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeconnexity;
friend class TopOpeBRepTool_DataMapNodeOfDataMapOfShapeface;
friend class TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeface;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
