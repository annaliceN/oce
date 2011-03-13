// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_ChildIDIterator_HeaderFile
#define _TDF_ChildIDIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_GUID_HeaderFile
#include <Standard_GUID.hxx>
#endif
#ifndef _TDF_ChildIterator_HeaderFile
#include <TDF_ChildIterator.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TDF_Attribute;
class TDF_Label;
class Standard_GUID;


//! Iterates on the children of a label, to find <br>
//!          attributes having ID as Attribute ID. <br>
//! <br>
//!          Level option works as TDF_ChildIterator. <br>
class TDF_ChildIDIterator  {
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

  //! Creates an empty iterator. <br>
  Standard_EXPORT   TDF_ChildIDIterator();
  //! Iterates on the children of the given label. If <br>
//!          <allLevels> option is set to true, it explores not <br>
//!          only the first, but all the sub label levels. <br>
  Standard_EXPORT   TDF_ChildIDIterator(const TDF_Label& aLabel,const Standard_GUID& anID,const Standard_Boolean allLevels = Standard_False);
  //! Initializes the iteration on the children of the <br>
//!          given label. If <allLevels> option is set to true, <br>
//!          it explores not only the first, but all the sub <br>
//!          label levels. <br>
  Standard_EXPORT     void Initialize(const TDF_Label& aLabel,const Standard_GUID& anID,const Standard_Boolean allLevels = Standard_False) ;
  //! Returns True if there is a current Item in the <br>
//!          iteration. <br>
//! <br>
        Standard_Boolean More() const;
  //! Move to the next Item <br>
  Standard_EXPORT     void Next() ;
  //! Move to the next Brother. If there is none, go up <br>
//!          etc. This method is interesting only with <br>
//!          "allLevels" behavior, because it avoids to explore <br>
//!          the current label children. <br>
  Standard_EXPORT     void NextBrother() ;
  //! Returns the current item; a null handle if there is none. <br>
//! <br>
        Handle_TDF_Attribute Value() const;





protected:





private:



Standard_GUID myID;
TDF_ChildIterator myItr;
Handle_TDF_Attribute myAtt;


};


#include <TDF_ChildIDIterator.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
