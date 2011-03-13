// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapIteratorOfDataMapOfBiIntInteger_HeaderFile
#define _MAT2d_DataMapIteratorOfDataMapOfBiIntInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MAT2d_DataMapNodeOfDataMapOfBiIntInteger_HeaderFile
#include <Handle_MAT2d_DataMapNodeOfDataMapOfBiIntInteger.hxx>
#endif
class Standard_NoSuchObject;
class MAT2d_BiInt;
class MAT2d_MapBiIntHasher;
class MAT2d_DataMapOfBiIntInteger;
class MAT2d_DataMapNodeOfDataMapOfBiIntInteger;



class MAT2d_DataMapIteratorOfDataMapOfBiIntInteger  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   MAT2d_DataMapIteratorOfDataMapOfBiIntInteger();
  
  Standard_EXPORT   MAT2d_DataMapIteratorOfDataMapOfBiIntInteger(const MAT2d_DataMapOfBiIntInteger& aMap);
  
  Standard_EXPORT     void Initialize(const MAT2d_DataMapOfBiIntInteger& aMap) ;
  
  Standard_EXPORT    const MAT2d_BiInt& Key() const;
  
  Standard_EXPORT    const Standard_Integer& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
