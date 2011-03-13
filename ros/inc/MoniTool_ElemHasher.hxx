// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_ElemHasher_HeaderFile
#define _MoniTool_ElemHasher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MoniTool_Element_HeaderFile
#include <Handle_MoniTool_Element.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class MoniTool_Element;


//! ElemHasher defines HashCode for Element, which is : ask a <br>
//!           Element its HashCode !  Because this is the Element itself <br>
//!           which brings the HashCode for its Key <br>
//! <br>
//!           This class complies to the template given in TCollection by <br>
//!           MapHasher itself <br>
class MoniTool_ElemHasher  {
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

  //! Returns a HashCode in the range <0,Upper> for a Element : <br>
//!           asks the Element its HashCode then transforms it to be in the <br>
//!           required range <br>
  Standard_EXPORT   static  Standard_Integer HashCode(const Handle(MoniTool_Element)& K,const Standard_Integer Upper) ;
  //! Returns True if two keys are the same. <br>
//!           The test does not work on the Elements themselves but by <br>
//!           calling their methods Equates <br>
  Standard_EXPORT   static  Standard_Boolean IsEqual(const Handle(MoniTool_Element)& K1,const Handle(MoniTool_Element)& K2) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
