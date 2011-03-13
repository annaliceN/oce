// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectControl_HeaderFile
#define _IFSelect_SelectControl_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SelectControl_HeaderFile
#include <Handle_IFSelect_SelectControl.hxx>
#endif

#ifndef _Handle_IFSelect_Selection_HeaderFile
#include <Handle_IFSelect_Selection.hxx>
#endif
#ifndef _IFSelect_Selection_HeaderFile
#include <IFSelect_Selection.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IFSelect_Selection;
class IFSelect_SelectionIterator;


//! A SelectControl kind Selection works with two input Selections <br>
//!           in a dissymmetric way : the Main Input which gives an input <br>
//!           list of Entities, to be processed, and the Second Input which <br>
//!           gives another list, to be used to filter the main input. <br>
//! <br>
//!           e.g. : SelectDiff retains the items of the Main Input which <br>
//!             are not in the Control Input (which acts as Diff Input) <br>
//!           or a specific selection which retains Entities from the Main <br>
//!             Input if and only if they are concerned by an entity from <br>
//!             the Control Input (such as Views in IGES, etc...) <br>
//! <br>
//!           The way RootResult and Label are produced are at charge of <br>
//!           each sub-class <br>
class IFSelect_SelectControl : public IFSelect_Selection {

public:

  //! Returns the Main Input Selection <br>
  Standard_EXPORT     Handle_IFSelect_Selection MainInput() const;
  //! Returns True if a Control Input is defined <br>
//!           Thus, Result can be computed differently if there is a <br>
//!           Control Input or if there is none <br>
  Standard_EXPORT     Standard_Boolean HasSecondInput() const;
  //! Returns the Control Input Selection, or a Null Handle <br>
  Standard_EXPORT     Handle_IFSelect_Selection SecondInput() const;
  //! Sets a Selection to be the Main Input <br>
  Standard_EXPORT     void SetMainInput(const Handle(IFSelect_Selection)& sel) ;
  //! Sets a Selection to be the Control Input <br>
  Standard_EXPORT     void SetSecondInput(const Handle(IFSelect_Selection)& sel) ;
  //! Puts in an Iterator the Selections from which "me" depends <br>
//!           That is to say, the list of Input Selections <br>
  Standard_EXPORT     void FillIterator(IFSelect_SelectionIterator& iter) const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectControl)

protected:




private: 


Handle_IFSelect_Selection themain;
Handle_IFSelect_Selection thesecond;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
