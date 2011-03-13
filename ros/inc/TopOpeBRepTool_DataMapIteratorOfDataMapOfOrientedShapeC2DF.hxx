// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF_HeaderFile
#define _TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF_HeaderFile
#include <Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF.hxx>
#endif
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopOpeBRepTool_C2DF;
class TopTools_OrientedShapeMapHasher;
class TopOpeBRepTool_DataMapOfOrientedShapeC2DF;
class TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF;



class TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF();
  
  Standard_EXPORT   TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF(const TopOpeBRepTool_DataMapOfOrientedShapeC2DF& aMap);
  
  Standard_EXPORT     void Initialize(const TopOpeBRepTool_DataMapOfOrientedShapeC2DF& aMap) ;
  
  Standard_EXPORT    const TopoDS_Shape& Key() const;
  
  Standard_EXPORT    const TopOpeBRepTool_C2DF& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
