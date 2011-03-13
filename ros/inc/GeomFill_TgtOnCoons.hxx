// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_TgtOnCoons_HeaderFile
#define _GeomFill_TgtOnCoons_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomFill_TgtOnCoons_HeaderFile
#include <Handle_GeomFill_TgtOnCoons.hxx>
#endif

#ifndef _Handle_GeomFill_CoonsAlgPatch_HeaderFile
#include <Handle_GeomFill_CoonsAlgPatch.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _GeomFill_TgtField_HeaderFile
#include <GeomFill_TgtField.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class GeomFill_CoonsAlgPatch;
class gp_Vec;


//! Defines   an   algorithmic  tangents  field   on a <br>
//!          boundary of a CoonsAlgPatch. <br>
class GeomFill_TgtOnCoons : public GeomFill_TgtField {

public:

  
  Standard_EXPORT   GeomFill_TgtOnCoons(const Handle(GeomFill_CoonsAlgPatch)& K,const Standard_Integer I);
  //! Computes  the value  of the    field of tangency    at <br>
//!          parameter W. <br>
  Standard_EXPORT     gp_Vec Value(const Standard_Real W) const;
  //! Computes the  derivative of  the field of  tangency at <br>
//!          parameter W. <br>
  Standard_EXPORT     gp_Vec D1(const Standard_Real W) const;
  //! Computes the value and the  derivative of the field of <br>
//!          tangency at parameter W. <br>
  Standard_EXPORT     void D1(const Standard_Real W,gp_Vec& T,gp_Vec& DT) const;




  DEFINE_STANDARD_RTTI(GeomFill_TgtOnCoons)

protected:




private: 


Handle_GeomFill_CoonsAlgPatch myK;
Standard_Integer ibound;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
