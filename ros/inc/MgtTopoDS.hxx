// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MgtTopoDS_HeaderFile
#define _MgtTopoDS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_PTopoDS_HShape_HeaderFile
#include <Handle_PTopoDS_HShape.hxx>
#endif
#ifndef _Handle_MgtTopoDS_TranslateTool_HeaderFile
#include <Handle_MgtTopoDS_TranslateTool.hxx>
#endif
#ifndef _Handle_MgtTopoDS_TranslateTool1_HeaderFile
#include <Handle_MgtTopoDS_TranslateTool1.hxx>
#endif
class PTopoDS_HShape;
class TopoDS_Shape;
class MgtTopoDS_TranslateTool;
class PTColStd_TransientPersistentMap;
class PTColStd_PersistentTransientMap;
class MgtTopoDS_TranslateTool1;
class PTopoDS_Shape1;
class MgtTopoDS_TranslateTool;
class MgtTopoDS_TranslateTool1;


//! The  package  MgtTopoDS  provides methods to store <br>
//!          and  retrieve Topological  Data  Structure objects <br>
//!          from the Database. <br>
//! <br>
//!          The  objects are  translated  between  a transient <br>
//!          topology and a persitent topology. <br>
//! <br>
//!          *   The TopoDS  package   describes  the transient <br>
//!          topology. <br>
//! <br>
//!          *  The  PTopoDS  package describes  the persistent <br>
//!          topology. <br>
//! <br>
//!          As the topological data structure may be completed <br>
//!          by  inheritance  the  MgtTopoDS package provides a <br>
//!          mechanism to support  the translation of inherited <br>
//!          data structure. This mechanism is supported by the <br>
//!          TranslateTool class. <br>
//! <br>
//!          An error is  raised if  the TranslateTool does not <br>
//!          match with  the DataStructure  to  translate. This <br>
//!          check is done with the type of the Model. <br>
//! <br>
//!          This   package   does   not  provides  methods  to <br>
//!          translate directly Shapes from TopoDS  and PTopoDS <br>
//!          because the   data structures  are  deferred.   It <br>
//!          provides methods to support  the implementation of <br>
//!          Translate methods in the inherited DataStructures. <br>
//! <br>
//!          In  an   inherited data  structure  the  Translate <br>
//!          method must : <br>
//! <br>
//!          * Create a TranslateTool of the correct type. <br>
//! <br>
//!          * Call the Translate method of MgtTopoDS with this <br>
//!          Tool. <br>
class MgtTopoDS  {
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

  //! Translates a Transient Shape onto a Persistent Shape <br>
  Standard_EXPORT   static  Handle_PTopoDS_HShape Translate(const TopoDS_Shape& S,const Handle(MgtTopoDS_TranslateTool)& T,PTColStd_TransientPersistentMap& M) ;
  //! Translates a Persistent Shape onto a Transient Shape <br>
  Standard_EXPORT   static  void Translate(const Handle(PTopoDS_HShape)& S,const Handle(MgtTopoDS_TranslateTool)& T,PTColStd_PersistentTransientMap& M,TopoDS_Shape& Sh) ;
  //! Translates a Transient Shape onto a Persistent Shape <br>
  Standard_EXPORT   static  void Translate1(const TopoDS_Shape& aShape,const Handle(MgtTopoDS_TranslateTool1)& T,PTColStd_TransientPersistentMap& M,PTopoDS_Shape1& aPShape) ;
  //! Translates a Persistent Shape onto a Transient Shape <br>
  Standard_EXPORT   static  void Translate1(const PTopoDS_Shape1& aPShape,const Handle(MgtTopoDS_TranslateTool1)& T,PTColStd_PersistentTransientMap& M,TopoDS_Shape& aShape) ;





protected:





private:




friend class MgtTopoDS_TranslateTool;
friend class MgtTopoDS_TranslateTool1;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
