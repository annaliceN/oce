// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dico_StackItemOfDictionaryOfTransient_HeaderFile
#define _Dico_StackItemOfDictionaryOfTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dico_StackItemOfDictionaryOfTransient_HeaderFile
#include <Handle_Dico_StackItemOfDictionaryOfTransient.hxx>
#endif

#ifndef _Handle_Dico_DictionaryOfTransient_HeaderFile
#include <Handle_Dico_DictionaryOfTransient.hxx>
#endif
#ifndef _Handle_Dico_StackItemOfDictionaryOfTransient_HeaderFile
#include <Handle_Dico_StackItemOfDictionaryOfTransient.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class Dico_DictionaryOfTransient;
class Standard_Transient;
class Dico_IteratorOfDictionaryOfTransient;



class Dico_StackItemOfDictionaryOfTransient : public MMgt_TShared {

public:

  
  Standard_EXPORT   Dico_StackItemOfDictionaryOfTransient();
  
  Standard_EXPORT   Dico_StackItemOfDictionaryOfTransient(const Handle(Dico_StackItemOfDictionaryOfTransient)& previous);
  
  Standard_EXPORT     Handle_Dico_StackItemOfDictionaryOfTransient Previous() const;
  
  Standard_EXPORT     Handle_Dico_DictionaryOfTransient Value() const;
  
  Standard_EXPORT     void SetValue(const Handle(Dico_DictionaryOfTransient)& cval) ;




  DEFINE_STANDARD_RTTI(Dico_StackItemOfDictionaryOfTransient)

protected:




private: 


Handle_Dico_DictionaryOfTransient thevalue;
Handle_Dico_StackItemOfDictionaryOfTransient theprev;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
