// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_VArrayTNodeOfFieldOfHArray1OfReal_HeaderFile
#define _PColStd_VArrayTNodeOfFieldOfHArray1OfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_PColStd_VArrayNodeOfFieldOfHArray1OfReal_HeaderFile
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray1OfReal.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class PColStd_FieldOfHArray1OfReal;
class PColStd_VArrayNodeOfFieldOfHArray1OfReal;



class PColStd_VArrayTNodeOfFieldOfHArray1OfReal  {
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

  
      PColStd_VArrayTNodeOfFieldOfHArray1OfReal();
  
      PColStd_VArrayTNodeOfFieldOfHArray1OfReal(const Standard_Real& aValue);
  
        void SetValue(const Standard_Real& aValue) ;
  
        Standard_Address Value() const;





protected:





private:



Standard_Real myValue;


};

#define Item Standard_Real
#define Item_hxx <Standard_Real.hxx>
#define DBC_VArrayNode PColStd_VArrayNodeOfFieldOfHArray1OfReal
#define DBC_VArrayNode_hxx <PColStd_VArrayNodeOfFieldOfHArray1OfReal.hxx>
#define DBC_VArrayTNode PColStd_VArrayTNodeOfFieldOfHArray1OfReal
#define DBC_VArrayTNode_hxx <PColStd_VArrayTNodeOfFieldOfHArray1OfReal.hxx>
#define Handle_DBC_VArrayNode Handle_PColStd_VArrayNodeOfFieldOfHArray1OfReal
#define DBC_VArrayNode_Type_() PColStd_VArrayNodeOfFieldOfHArray1OfReal_Type_()
#define DBC_VArray PColStd_FieldOfHArray1OfReal
#define DBC_VArray_hxx <PColStd_FieldOfHArray1OfReal.hxx>

#include <DBC_VArrayTNode.lxx>

#undef Item
#undef Item_hxx
#undef DBC_VArrayNode
#undef DBC_VArrayNode_hxx
#undef DBC_VArrayTNode
#undef DBC_VArrayTNode_hxx
#undef Handle_DBC_VArrayNode
#undef DBC_VArrayNode_Type_
#undef DBC_VArray
#undef DBC_VArray_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
