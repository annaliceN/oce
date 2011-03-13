// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_DoubleTabOfReal_HeaderFile
#define _math_DoubleTabOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif



class math_DoubleTabOfReal  {
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

  
  Standard_EXPORT   math_DoubleTabOfReal(const Standard_Integer LowerRow,const Standard_Integer UpperRow,const Standard_Integer LowerCol,const Standard_Integer UpperCol);
  
  Standard_EXPORT   math_DoubleTabOfReal(const Standard_Real& Tab,const Standard_Integer LowerRow,const Standard_Integer UpperRow,const Standard_Integer LowerCol,const Standard_Integer UpperCol);
  
  Standard_EXPORT     void Init(const Standard_Real& InitValue) ;
  
  Standard_EXPORT   math_DoubleTabOfReal(const math_DoubleTabOfReal& Other);
  
        void Copy(math_DoubleTabOfReal& Other) const;
  
  Standard_EXPORT     void SetLowerRow(const Standard_Integer LowerRow) ;
  
  Standard_EXPORT     void SetLowerCol(const Standard_Integer LowerCol) ;
  
        Standard_Real& Value(const Standard_Integer RowIndex,const Standard_Integer ColIndex) const;
      Standard_Real& operator()(const Standard_Integer RowIndex,const Standard_Integer ColIndex) const
{
  return Value(RowIndex,ColIndex);
}
  
  Standard_EXPORT     void Free() ;
~math_DoubleTabOfReal()
{
  Free();
}





protected:





private:

  
  Standard_EXPORT     void Allocate() ;


Standard_Address Addr;
Standard_Boolean isAllocated;
Standard_Integer LowR;
Standard_Integer UppR;
Standard_Integer LowC;
Standard_Integer UppC;


};

#define Item Standard_Real
#define Item_hxx <Standard_Real.hxx>
#define math_DoubleTab math_DoubleTabOfReal
#define math_DoubleTab_hxx <math_DoubleTabOfReal.hxx>

#include <math_DoubleTab.lxx>

#undef Item
#undef Item_hxx
#undef math_DoubleTab
#undef math_DoubleTab_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
