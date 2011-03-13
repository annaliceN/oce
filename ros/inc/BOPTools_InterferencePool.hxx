// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_InterferencePool_HeaderFile
#define _BOPTools_InterferencePool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BooleanOperations_PShapesDataStructure_HeaderFile
#include <BooleanOperations_PShapesDataStructure.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BOPTools_CArray1OfInterferenceLine_HeaderFile
#include <BOPTools_CArray1OfInterferenceLine.hxx>
#endif
#ifndef _BOPTools_CArray1OfSSInterference_HeaderFile
#include <BOPTools_CArray1OfSSInterference.hxx>
#endif
#ifndef _BOPTools_CArray1OfESInterference_HeaderFile
#include <BOPTools_CArray1OfESInterference.hxx>
#endif
#ifndef _BOPTools_CArray1OfVSInterference_HeaderFile
#include <BOPTools_CArray1OfVSInterference.hxx>
#endif
#ifndef _BOPTools_CArray1OfEEInterference_HeaderFile
#include <BOPTools_CArray1OfEEInterference.hxx>
#endif
#ifndef _BOPTools_CArray1OfVEInterference_HeaderFile
#include <BOPTools_CArray1OfVEInterference.hxx>
#endif
#ifndef _BOPTools_CArray1OfVVInterference_HeaderFile
#include <BOPTools_CArray1OfVVInterference.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BooleanOperations_KindOfInterference_HeaderFile
#include <BooleanOperations_KindOfInterference.hxx>
#endif
#ifndef _BOPTools_PShapeShapeInterference_HeaderFile
#include <BOPTools_PShapeShapeInterference.hxx>
#endif
class BooleanOperations_ShapesDataStructure;
class BOPTools_CArray1OfInterferenceLine;
class BOPTools_CArray1OfSSInterference;
class BOPTools_CArray1OfESInterference;
class BOPTools_CArray1OfVSInterference;
class BOPTools_CArray1OfEEInterference;
class BOPTools_CArray1OfVEInterference;
class BOPTools_CArray1OfVVInterference;



//!  Class for storing information about <br>
//! results of all interferences for all shapes <br>
class BOPTools_InterferencePool  {
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

  
//! Empty constructor <br>
  Standard_EXPORT   BOPTools_InterferencePool();
  
//! Constructor <br>
  Standard_EXPORT   BOPTools_InterferencePool(const BooleanOperations_ShapesDataStructure& aDS);
  
//! Modifier <br>
  Standard_EXPORT     void SetDS(const BooleanOperations_ShapesDataStructure& aDS) ;
  
//! Selector <br>
  Standard_EXPORT     BooleanOperations_PShapesDataStructure DS() const;
  
//! Returns  TRUE if the shape with DS_index  <anInd> <br>
//! has at least one  interference with non-empty result <br>
  Standard_EXPORT     Standard_Boolean HasInterference(const Standard_Integer anInd) const;
  
//! Returns  TRUE if the interference between shapes <br>
//! <anInd1> and <anInd2> has already been computed. <br>
  Standard_EXPORT     Standard_Boolean IsComputed(const Standard_Integer anInd1,const Standard_Integer anInd2) const;
  
//! Sorts types of shapes <anInd1> and <anInd2> in increasing order <br>
  Standard_EXPORT     void SortTypes(Standard_Integer& anInd1,Standard_Integer& anInd2) const;
  
//! Gets the type of interference in accordance with the types of <br>
//! shapes  <anInd1> and <anInd2> <br>
  Standard_EXPORT     BooleanOperations_KindOfInterference InterferenceType(const Standard_Integer anInd1,const Standard_Integer anInd2) const;
  
//! Adds the info about interference in InterferenceLine-s for <br>
//! shapes  <anInd1> and <anInd2> <br>
  Standard_EXPORT     void AddInterference(const Standard_Integer anInd1,const Standard_Integer anInd2,const BooleanOperations_KindOfInterference aType,const Standard_Integer anIndex) ;
  
//! Returns the reference to complete array of interference line-s <br>
  Standard_EXPORT    const BOPTools_CArray1OfInterferenceLine& InterferenceTable() const;
  
//! Returns the reference to array Of F/F interferences <br>
  Standard_EXPORT     BOPTools_CArray1OfSSInterference& SSInterferences() ;
  
//! Returns the reference to array Of E/F interferences <br>
  Standard_EXPORT     BOPTools_CArray1OfESInterference& ESInterferences() ;
  
//! Returns the reference to array Of V/F interferences <br>
  Standard_EXPORT     BOPTools_CArray1OfVSInterference& VSInterferences() ;
  
//! Returns the reference to arrray Of E/E interferences <br>
  Standard_EXPORT     BOPTools_CArray1OfEEInterference& EEInterferences() ;
  
//! Returns the reference to arrray Of  V/E interferences <br>
  Standard_EXPORT     BOPTools_CArray1OfVEInterference& VEInterferences() ;
  
//! Returns the reference to arrray Of  V/V interferences <br>
  Standard_EXPORT     BOPTools_CArray1OfVVInterference& VVInterferences() ;
  
  Standard_EXPORT    const BOPTools_CArray1OfSSInterference& SSInterfs() const;
  
  Standard_EXPORT    const BOPTools_CArray1OfESInterference& ESInterfs() const;
  
  Standard_EXPORT    const BOPTools_CArray1OfVSInterference& VSInterfs() const;
  
  Standard_EXPORT    const BOPTools_CArray1OfEEInterference& EEInterfs() const;
  
  Standard_EXPORT    const BOPTools_CArray1OfVEInterference& VEInterfs() const;
  
  Standard_EXPORT    const BOPTools_CArray1OfVVInterference& VVInterfs() const;
  
  Standard_EXPORT     BOPTools_PShapeShapeInterference GetInterference(const Standard_Integer anIndex,const BooleanOperations_KindOfInterference aType) const;





protected:





private:



BooleanOperations_PShapesDataStructure myDS;
Standard_Integer myNbSourceShapes;
BOPTools_CArray1OfInterferenceLine myInterferenceTable;
BOPTools_CArray1OfSSInterference mySSInterferences;
BOPTools_CArray1OfESInterference myESInterferences;
BOPTools_CArray1OfVSInterference myVSInterferences;
BOPTools_CArray1OfEEInterference myEEInterferences;
BOPTools_CArray1OfVEInterference myVEInterferences;
BOPTools_CArray1OfVVInterference myVVInterferences;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
