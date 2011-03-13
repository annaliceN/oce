// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_SensitiveGroup_HeaderFile
#define _Select3D_SensitiveGroup_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Select3D_SensitiveGroup_HeaderFile
#include <Handle_Select3D_SensitiveGroup.hxx>
#endif

#ifndef _Select3D_ListOfSensitive_HeaderFile
#include <Select3D_ListOfSensitive.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Select3D_SensitiveEntity_HeaderFile
#include <Select3D_SensitiveEntity.hxx>
#endif
#ifndef _Handle_SelectBasics_EntityOwner_HeaderFile
#include <Handle_SelectBasics_EntityOwner.hxx>
#endif
#ifndef _Handle_Select3D_SensitiveEntity_HeaderFile
#include <Handle_Select3D_SensitiveEntity.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class SelectBasics_EntityOwner;
class Select3D_ListOfSensitive;
class Select3D_SensitiveEntity;
class Select3D_Projector;
class SelectBasics_ListOfBox2d;
class TopLoc_Location;
class TColgp_Array1OfPnt2d;
class Bnd_Box2d;
class gp_Lin;


//! A framework to define selection of a sensitive group <br>
//!          by a sensitive entity which is a set of 3D sensitive entities. <br>
//!          Remark: 2 modes are possible for rectangle selection <br>
//!          the group is considered selected <br>
//!          1) when all the entities inside are selected in the rectangle <br>
//!          2) only one entity inside is selected by the rectangle <br>
//!          By default the "Match All entities" mode is set. <br>
class Select3D_SensitiveGroup : public Select3D_SensitiveEntity {

public:

  //! Constructs an empty sensitive group object. <br>
//! This is a set of sensitive 3D entities. The sensitive <br>
//! entities will be defined using the function Add to fill <br>
//! the entity owner OwnerId. If MatchAll is false, nothing can be added. <br>
  Standard_EXPORT   Select3D_SensitiveGroup(const Handle(SelectBasics_EntityOwner)& OwnerId,const Standard_Boolean MatchAll = Standard_True);
  //! Constructs a sensitive group object defined by the list <br>
//! TheList and the entity owner OwnerId. If MatchAll is false, nothing is done. <br>
  Standard_EXPORT   Select3D_SensitiveGroup(const Handle(SelectBasics_EntityOwner)& OwnerId,Select3D_ListOfSensitive& TheList,const Standard_Boolean MatchAll = Standard_True);
  //! Adds the list of sensitive entities LL to the empty <br>
//! sensitive group object created at construction time. <br>
  Standard_EXPORT     void Add(Select3D_ListOfSensitive& LL) ;
  //! Adds the sensitive entity aSensitive to the non-empty <br>
//! sensitive group object created at construction time. <br>
  Standard_EXPORT     void Add(const Handle(Select3D_SensitiveEntity)& aSensitive) ;
  
  Standard_EXPORT     void Remove(const Handle(Select3D_SensitiveEntity)& aSensitive) ;
  //! Removes all sensitive entities from the list used at the <br>
//! time of construction, or added using the function Add. <br>
  Standard_EXPORT     void Clear() ;
  //! Returns true if the sensitive entity aSensitive is in <br>
//! the list used at the time of construction, or added using the function Add. <br>
  Standard_EXPORT     Standard_Boolean IsIn(const Handle(Select3D_SensitiveEntity)& aSensitive) const;
  //! Sets the requirement that all sensitive entities in the <br>
//! list used at the time of construction, or added using <br>
//! the function Add must be matched. <br>
        void Set(const Standard_Boolean MustMatchAllEntities) ;
  //! Returns true if all sensitive entities in the list used <br>
//! at the time of construction, or added using the function Add must be matched. <br>
        Standard_Boolean MustMatchAll() const;
  //! projection of the sensitive primitive in order to <br>
//!          get 2D boxes for the Sort Algorithm <br>
  Standard_EXPORT     void Project(const Select3D_Projector& aProjector) ;
  //! gives the 2D boxes which represent the segment in the <br>
//!          selection process... <br>
  Standard_EXPORT     void Areas(SelectBasics_ListOfBox2d& boxes) ;
  
  Standard_EXPORT     Standard_Integer MaxBoxes() const;
  
  Standard_EXPORT     Handle_Select3D_SensitiveEntity GetConnected(const TopLoc_Location& aLocation) ;
  //!  propagation of location on all the sensitive inside... <br>
  Standard_EXPORT     void SetLocation(const TopLoc_Location& aLoc) ;
  //!  propagation of location on all the sensitive inside... <br>
  Standard_EXPORT     void ResetLocation() ;
  //! projection of the sensitive primitive in order to <br>
//!          get 2D boxes for the Sort Algorithm <br>
  Standard_EXPORT     Standard_Boolean Matches(const Standard_Real X,const Standard_Real Y,const Standard_Real aTol,Standard_Real& DMin) ;
  
  Standard_EXPORT     Standard_Boolean Matches(const Standard_Real XMin,const Standard_Real YMin,const Standard_Real XMax,const Standard_Real YMax,const Standard_Real aTol) ;
  
  Standard_EXPORT   virtual  Standard_Boolean Matches(const TColgp_Array1OfPnt2d& Polyline,const Bnd_Box2d& aBox,const Standard_Real aTol) ;
  //! returns the depth of the touched entity <br>
  Standard_EXPORT     Standard_Real ComputeDepth(const gp_Lin& EyeLine) const;
  
  Standard_EXPORT   virtual  void SetLastPrj(const Select3D_Projector& aPrj) ;
  //! Gets group content <br>
       const Select3D_ListOfSensitive& GetEntities() const;




  DEFINE_STANDARD_RTTI(Select3D_SensitiveGroup)

protected:




private: 


Select3D_ListOfSensitive myList;
Standard_Boolean myMustMatchAll;
Standard_Integer myLastRank;
Standard_ShortReal myLastTol;
Standard_ShortReal myX;
Standard_ShortReal myY;


};


#include <Select3D_SensitiveGroup.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
