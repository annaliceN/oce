// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapIteratorOfDataMapOfShapeReal_HeaderFile
#define _TopTools_DataMapIteratorOfDataMapOfShapeReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TopTools_DataMapNodeOfDataMapOfShapeReal_HeaderFile
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeReal.hxx>
#endif
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_DataMapOfShapeReal;
class TopTools_DataMapNodeOfDataMapOfShapeReal;



class TopTools_DataMapIteratorOfDataMapOfShapeReal  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   TopTools_DataMapIteratorOfDataMapOfShapeReal();
  
  Standard_EXPORT   TopTools_DataMapIteratorOfDataMapOfShapeReal(const TopTools_DataMapOfShapeReal& aMap);
  
  Standard_EXPORT     void Initialize(const TopTools_DataMapOfShapeReal& aMap) ;
  
  Standard_EXPORT    const TopoDS_Shape& Key() const;
  
  Standard_EXPORT    const Standard_Real& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
