// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_TransientElem_HeaderFile
#define _MoniTool_TransientElem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MoniTool_TransientElem_HeaderFile
#include <Handle_MoniTool_TransientElem.hxx>
#endif

#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _MoniTool_Element_HeaderFile
#include <MoniTool_Element.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_MoniTool_Element_HeaderFile
#include <Handle_MoniTool_Element.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class Standard_Transient;
class TColStd_MapTransientHasher;
class MoniTool_DataInfo;
class MoniTool_Element;
class Standard_Type;



class MoniTool_TransientElem : public MoniTool_Element {

public:

  
  Standard_EXPORT   MoniTool_TransientElem(const Handle(Standard_Transient)& akey);
  
  Standard_EXPORT    const Handle_Standard_Transient& Value() const;
  
  Standard_EXPORT     Standard_Boolean Equates(const Handle(MoniTool_Element)& other) const;
  
  Standard_EXPORT   virtual  Handle_Standard_Type ValueType() const;
  
  Standard_EXPORT   virtual  Standard_CString ValueTypeName() const;




  DEFINE_STANDARD_RTTI(MoniTool_TransientElem)

protected:




private: 


Handle_Standard_Transient theval;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
