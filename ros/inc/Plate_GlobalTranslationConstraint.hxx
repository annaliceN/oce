// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plate_GlobalTranslationConstraint_HeaderFile
#define _Plate_GlobalTranslationConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Plate_LinearXYZConstraint_HeaderFile
#include <Plate_LinearXYZConstraint.hxx>
#endif
class TColgp_SequenceOfXY;
class Plate_LinearXYZConstraint;


//! force a set of UV points to translate without deformation <br>
//! <br>
//! <br>
class Plate_GlobalTranslationConstraint  {
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

  
  Standard_EXPORT   Plate_GlobalTranslationConstraint(const TColgp_SequenceOfXY& SOfXY);
  
       const Plate_LinearXYZConstraint& LXYZC() const;





protected:





private:



Plate_LinearXYZConstraint myLXYZC;


};


#include <Plate_GlobalTranslationConstraint.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
