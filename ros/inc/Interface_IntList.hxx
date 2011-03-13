// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_IntList_HeaderFile
#define _Interface_IntList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TColStd_HArray1OfInteger;


//! This class detains the data which describe a Graph. A Graph <br>
//!           has two lists, one for shared refs, one for sharing refs <br>
//!           (the reverses). Each list comprises, for each Entity of the <br>
//!           Model of the Graph, a list of Entities (shared or sharing). <br>
//!           In fact, entities are identified by their numbers in the Model <br>
//!           or Graph : this gives better performances. <br>
//! <br>
//!           A simple way to implement this is to instantiate a HArray1 <br>
//!           with a HSequenceOfInteger : each Entity Number designates a <br>
//!           value, which is a Sequence (if it is null, it is considered as <br>
//!           empty : this is a little optimisation). <br>
//! <br>
//!           This class gives a more efficient way to implement this. <br>
//!           It has two lists (two arrays of integers), one to describe <br>
//!           list (empty, one value given immediately, or negated index in <br>
//!           the second list), one to store refs (pointed from the first <br>
//!           list). This is much more efficient than a list of sequences, <br>
//!           in terms of speed (especially for read) and of memory <br>
//! <br>
//!           An IntList can also be set to access data for a given entity <br>
//!           number, it then acts as a single sequence <br>
//! <br>
//!           Remark that if an IntList is created from another one, it can <br>
//!           be read, but if it is created without copying, it may not be <br>
//!           edited <br>
class Interface_IntList  {
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

  //!Creates empty IntList. <br>
  Standard_EXPORT   Interface_IntList();
  //! Creates an IntList for <nbe> entities <br>
  Standard_EXPORT   Interface_IntList(const Standard_Integer nbe);
  //! Creates an IntList from another one. <br>
//!           if <copied> is True, copies data <br>
//!           else, data are not copied, only the header object is <br>
  Standard_EXPORT   Interface_IntList(const Interface_IntList& other,const Standard_Boolean copied);
  //!Initialize IntList by number of entities. <br>
  Standard_EXPORT     void Initialize(const Standard_Integer nbe) ;
  //! Returns internal values, used for copying <br>
  Standard_EXPORT     void Internals(Standard_Integer& nbrefs,Handle(TColStd_HArray1OfInteger)& ents,Handle(TColStd_HArray1OfInteger)& refs) const;
  //! Returns count of entities to be aknowledged <br>
  Standard_EXPORT     Standard_Integer NbEntities() const;
  //! Changes the count of entities (ignored if decreased) <br>
  Standard_EXPORT     void SetNbEntities(const Standard_Integer nbe) ;
  //! Sets an entity number as current (for read and fill) <br>
  Standard_EXPORT     void SetNumber(const Standard_Integer number) ;
  //! Returns the current entity number <br>
  Standard_EXPORT     Standard_Integer Number() const;
  //! Returns an IntList, identical to <me> but set to a specified <br>
//!           entity Number <br>
//!           By default, not copied (in order to be read) <br>
//!           Specified <copied> to produce another list and edit it <br>
  Standard_EXPORT     Interface_IntList List(const Standard_Integer number,const Standard_Boolean copied = Standard_False) const;
  //! Sets current entity list to be redefined or not <br>
//!           This is used in a Graph for redefinition list : it can be <br>
//!           disable (no redefinition, i.e. list is cleared), or enabled <br>
//!           (starts as empty). The original list has not to be "redefined" <br>
  Standard_EXPORT     void SetRedefined(const Standard_Boolean mode) ;
  //! Makes a reservation for <count> references to be later <br>
//!           attached to the current entity. If required, it increases <br>
//!           the size of array used to store refs. Remark that if count is <br>
//!           less than two, it does nothing (because immediate storing) <br>
  Standard_EXPORT     void Reservate(const Standard_Integer count) ;
  //! Adds a reference (as an integer value, an entity number) to <br>
//!           the current entity number. Zero is ignored <br>
  Standard_EXPORT     void Add(const Standard_Integer ref) ;
  //! Returns the count of refs attached to current entity number <br>
  Standard_EXPORT     Standard_Integer Length() const;
  //! Returns True if the list for a number (default is taken as <br>
//!           current) is "redefined"  (usefull for empty list) <br>
  Standard_EXPORT     Standard_Boolean IsRedefined(const Standard_Integer num = 0) const;
  //! Returns a reference number in the list for current number, <br>
//!           according to its rank <br>
  Standard_EXPORT     Standard_Integer Value(const Standard_Integer num) const;
  //! Removes an item in the list for current number, given its rank <br>
//!           Returns True if done, False else <br>
  Standard_EXPORT     Standard_Boolean Remove(const Standard_Integer num) ;
  //! Clears all data, hence each entity number has an empty list <br>
  Standard_EXPORT     void Clear() ;
  //! Resizes lists to exact sizes. For list of refs, a positive <br>
//!           margin can be added. <br>
  Standard_EXPORT     void AdjustSize(const Standard_Integer margin = 0) ;





protected:





private:



Standard_Integer thenbe;
Standard_Integer thenbr;
Standard_Integer thenum;
Standard_Integer thecount;
Standard_Integer therank;
Handle_TColStd_HArray1OfInteger theents;
Handle_TColStd_HArray1OfInteger therefs;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
