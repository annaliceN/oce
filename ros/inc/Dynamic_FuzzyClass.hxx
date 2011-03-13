// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_FuzzyClass_HeaderFile
#define _Dynamic_FuzzyClass_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dynamic_FuzzyClass_HeaderFile
#include <Handle_Dynamic_FuzzyClass.hxx>
#endif

#ifndef _Handle_Dynamic_ParameterNode_HeaderFile
#include <Handle_Dynamic_ParameterNode.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Dynamic_Parameter_HeaderFile
#include <Handle_Dynamic_Parameter.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Dynamic_ParameterNode;
class TCollection_AsciiString;
class Dynamic_Parameter;
class Standard_Transient;


//! This class is the root class to dynamically define <br>
//!          objects    of  a   given type    but  with various <br>
//!          definitions. This root class contains a  parameter <br>
//!          list which describes in the definition context all <br>
//!          the useful information and in the instance context <br>
//!          only the redefined  values. This class is deferred <br>
//!          because no instance has to be created. <br>
class Dynamic_FuzzyClass : public MMgt_TShared {

public:

  //! This  deferred method must   returns  the type of  the <br>
//!          object. If the instance is of the type FuzzyDefinition <br>
//!          the method simply  returns the field <thetype>. If the <br>
//!          instance is of the type FuzzyInstance the method calls <br>
//!          the Type method on the true definition. <br>
  Standard_EXPORT   virtual  TCollection_AsciiString Type() const = 0;
  //! Returns the  head of the  list of parameters.  For the <br>
//!          FuzzyDefinition class  this method returns the head of <br>
//!          the exaustive list  of parameters defining the  object <br>
//!          and for the FuzzyInstance it  just returns the head of <br>
//!          the overloaded values. <br>
  Standard_EXPORT     Handle_Dynamic_ParameterNode FirstParameter() const;
  //! Returns true if there is a parameter with <aparameter> <br>
//!          as name, false otherwise. <br>
  Standard_EXPORT     Standard_Boolean Parameter(const Standard_CString aparameter) const;
  //! Adds  another parameter <aparameter> to the sequence of <br>
//!          parameters. <br>
  Standard_EXPORT     void Parameter(const Handle(Dynamic_Parameter)& aparameter) ;
  //! Adds  to the instance <me>  the parameter <aparameter> <br>
//!          with the boolean value <avalue>. <br>
  Standard_EXPORT   virtual  void Parameter(const Standard_CString aparameter,const Standard_Boolean avalue) ;
  //! Adds  to the instance <me>  the parameter <aparameter> <br>
//!          with the integer value <avalue>. <br>
  Standard_EXPORT   virtual  void Parameter(const Standard_CString aparameter,const Standard_Integer avalue) ;
  //! Adds  to the  instance  <me>  the parameter <aparameter> <br>
//!          with the real value <avalue>. <br>
  Standard_EXPORT   virtual  void Parameter(const Standard_CString aparameter,const Standard_Real avalue) ;
  //! Adds  to the  instance  <me>  the parameter <aparameter> <br>
//!          with the string <astring>. <br>
  Standard_EXPORT   virtual  void Parameter(const Standard_CString aparameter,const Standard_CString astring) ;
  //! Adds  to the  instance  <me>  the parameter <aparameter> <br>
//!          with the object value <anobject>. <br>
  Standard_EXPORT   virtual  void Parameter(const Standard_CString aparameter,const Handle(Standard_Transient)& anobject) ;
  //! Returns   True, if there   is a parameter <aparameter> <br>
//!          previously stored  in the instance   <me> and there is <br>
//!          the corresponding boolean value in the output argument <br>
//!          <avalue>, False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Value(const Standard_CString aparameter,Standard_Boolean& avalue) const;
  //! Returns True,   if  there is  a   parameter <aparameter> <br>
//!          previously stored in  the  instance  <me> and there is <br>
//!          the corresponding integer value in the output argument <br>
//!          <avalue>, False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Value(const Standard_CString aparameter,Standard_Integer& avalue) const;
  //! Returns True,   if  there  is a   parameter <aparameter> <br>
//!          previously stored in the  instance <me>  and  there is <br>
//!          the corresponding  real value   in the output argument <br>
//!          <avalue>, False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Value(const Standard_CString aparameter,Standard_Real& avalue) const;
  //! Returns True, if  there   is  a parameter   <aparameter> <br>
//!          previously stored  in the  instance <me> and  there is <br>
//!          the  corresponding  string  in  the  output   argument <br>
//!          <avalue>, False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Value(const Standard_CString aparameter,TCollection_AsciiString& avalue) const;
  //! Returns  True,  if  there is  a   parameter <aparameter> <br>
//!          previously stored  in the instance <me> and   there is <br>
//!          the corresponding object value  in  the output argument <br>
//!          <avalue>, False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Value(const Standard_CString aparameter,Handle(Standard_Transient)& avalue) const;
  //! Useful for debugging. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& astream) const;




  DEFINE_STANDARD_RTTI(Dynamic_FuzzyClass)

protected:

  //! Creates a FuzzyClass. <br>
  Standard_EXPORT   Dynamic_FuzzyClass();



private: 


Handle_Dynamic_ParameterNode thefirstparameternode;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
