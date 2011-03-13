// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SWDRAW_ShapeFix_HeaderFile
#define _SWDRAW_ShapeFix_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

class Draw_Interpretor;


//! Contains commands to activate package ShapeFix <br>
//!          List of DRAW commands and corresponding functionalities: <br>
//!          edgesameparam - ShapeFix::SameParameter <br>
//!          settolerance  - ShapeFix_ShapeTolerance <br>
//!          stwire        - ShapeFix_Wire <br>
//!          reface        - ShapeFix_Face <br>
//!          repcurve      - ShapeFix_PCurves <br>
class SWDRAW_ShapeFix  {
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

  //! Loads commands defined in ShapeFix <br>
  Standard_EXPORT   static  void InitCommands(Draw_Interpretor& theCommands) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
