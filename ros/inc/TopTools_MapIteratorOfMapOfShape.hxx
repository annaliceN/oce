// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_MapIteratorOfMapOfShape_HeaderFile
#define _TopTools_MapIteratorOfMapOfShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_TopTools_StdMapNodeOfMapOfShape_HeaderFile
#include <Handle_TopTools_StdMapNodeOfMapOfShape.hxx>
#endif
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_MapOfShape;
class TopTools_StdMapNodeOfMapOfShape;



class TopTools_MapIteratorOfMapOfShape  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   TopTools_MapIteratorOfMapOfShape();
  
  Standard_EXPORT   TopTools_MapIteratorOfMapOfShape(const TopTools_MapOfShape& aMap);
  
  Standard_EXPORT     void Initialize(const TopTools_MapOfShape& aMap) ;
  
  Standard_EXPORT    const TopoDS_Shape& Key() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
