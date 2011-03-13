// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_MultiPointConstraint_HeaderFile
#define _AppDef_MultiPointConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_MMgt_TShared_HeaderFile
#include <Handle_MMgt_TShared.hxx>
#endif
#ifndef _AppParCurves_MultiPoint_HeaderFile
#include <AppParCurves_MultiPoint.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class MMgt_TShared;
class Standard_OutOfRange;
class Standard_ConstructionError;
class Standard_DimensionError;
class TColgp_Array1OfPnt;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec;
class TColgp_Array1OfVec2d;
class gp_Vec;
class gp_Vec2d;


//! Describes a MultiPointConstraint used in a <br>
//! Multiline. MultiPointConstraints are composed <br>
//! of several two or three-dimensional points. <br>
//! The purpose is to define the corresponding <br>
//! points that share a common constraint in order <br>
//! to compute the approximation of several lines in parallel. <br>
//! Notes: <br>
//! -   The order of points of a MultiPointConstraints is very important. <br>
//!   Users must give 3D points first, and then 2D points. <br>
//! -   The constraints for the points included in a <br>
//!   MultiPointConstraint are always identical for <br>
//!   all points, including the parameter. <br>
//! -   If a MultiPointConstraint is a "tangency" <br>
//!   point, the point is also a "passing" point. <br>
class AppDef_MultiPointConstraint  : public AppParCurves_MultiPoint {
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

  //! creates an undefined MultiPointConstraint. <br>
  Standard_EXPORT   AppDef_MultiPointConstraint();
  //! constructs a set of Points used to approximate a Multiline. <br>
//!          These Points can be of 2 or 3 dimensions. <br>
//!          Points will be initialized with SetPoint and SetPoint2d. <br>
  Standard_EXPORT   AppDef_MultiPointConstraint(const Standard_Integer NbPoints,const Standard_Integer NbPoints2d);
  //! creates a MultiPoint only composed of 3D points. <br>
  Standard_EXPORT   AppDef_MultiPointConstraint(const TColgp_Array1OfPnt& tabP);
  //! creates a MultiPoint only composed of 2D points. <br>
  Standard_EXPORT   AppDef_MultiPointConstraint(const TColgp_Array1OfPnt2d& tabP);
  //! constructs a set of Points used to approximate a Multiline. <br>
//!          These Points can be of 2 or 3 dimensions. <br>
//!          Points will be initialized with SetPoint and SetPoint2d. <br>
  Standard_EXPORT   AppDef_MultiPointConstraint(const TColgp_Array1OfPnt& tabP,const TColgp_Array1OfPnt2d& tabP2d);
  //! creates a MultiPointConstraint with a constraint of <br>
//!          Curvature. <br>
//!          An exception is raised if <br>
//!          (length of <tabP> + length of <tabP2d> ) is different <br>
//!          from (length of <tabVec> + length of <tabVec2d> ) or <br>
//!          from (length of <tabCur> + length of <tabCur2d> ) <br>
  Standard_EXPORT   AppDef_MultiPointConstraint(const TColgp_Array1OfPnt& tabP,const TColgp_Array1OfPnt2d& tabP2d,const TColgp_Array1OfVec& tabVec,const TColgp_Array1OfVec2d& tabVec2d,const TColgp_Array1OfVec& tabCur,const TColgp_Array1OfVec2d& tabCur2d);
  //! creates a MultiPointConstraint with a constraint of <br>
//!          Tangency. <br>
//!          An exception is raised if <br>
//!          (length of <tabP> + length of <tabP2d> ) is different <br>
//!          from (length of <tabVec> + length of <tabVec2d> ) <br>
  Standard_EXPORT   AppDef_MultiPointConstraint(const TColgp_Array1OfPnt& tabP,const TColgp_Array1OfPnt2d& tabP2d,const TColgp_Array1OfVec& tabVec,const TColgp_Array1OfVec2d& tabVec2d);
  //! creates a MultiPointConstraint only composed of 3d points <br>
//!          with constraints of curvature. <br>
//!          An exception is raised if the length of tabP is different <br>
//!          from the length of tabVec or from tabCur. <br>
  Standard_EXPORT   AppDef_MultiPointConstraint(const TColgp_Array1OfPnt& tabP,const TColgp_Array1OfVec& tabVec,const TColgp_Array1OfVec& tabCur);
  //! creates a MultiPointConstraint only composed of 3d points <br>
//!          with constraints of tangency. <br>
//!          An exception is raised if the length of tabP is different <br>
//!          from the length of tabVec. <br>
  Standard_EXPORT   AppDef_MultiPointConstraint(const TColgp_Array1OfPnt& tabP,const TColgp_Array1OfVec& tabVec);
  //! creates a MultiPointConstraint only composed of 2d points <br>
//!          with constraints of tangency. <br>
//!          An exception is raised if the length of tabP is different <br>
//!          from the length of tabVec2d. <br>
  Standard_EXPORT   AppDef_MultiPointConstraint(const TColgp_Array1OfPnt2d& tabP2d,const TColgp_Array1OfVec2d& tabVec2d);
  //! creates a MultiPointConstraint only composed of 2d points <br>
//!          with constraints of curvature. <br>
//!          An exception is raised if the length of tabP is different <br>
//!          from the length of tabVec2d or from tabCur2d. <br>
  Standard_EXPORT   AppDef_MultiPointConstraint(const TColgp_Array1OfPnt2d& tabP2d,const TColgp_Array1OfVec2d& tabVec2d,const TColgp_Array1OfVec2d& tabCur2d);
  //! sets the value of the tangency of the point of range <br>
//!          Index. <br>
//!          An exception is raised if Index <0 or if Index > number <br>
//!          of 3d points. <br>
//!          An exception is raised if Tang has an incorrect number of <br>
//!          dimensions. <br>
  Standard_EXPORT     void SetTang(const Standard_Integer Index,const gp_Vec& Tang) ;
  //! returns the tangency value of the point of range Index. <br>
//!          An exception is raised if Index < 0 or if Index > number <br>
//!          of 3d points. <br>
  Standard_EXPORT     gp_Vec Tang(const Standard_Integer Index) const;
  //! sets the value of the tangency of the point of range <br>
//!          Index. <br>
//!          An exception is raised if Index <number of 3d points or if <br>
//!          Index > total number of Points <br>
//!          An exception is raised if Tang has an incorrect number of <br>
//!          dimensions. <br>
  Standard_EXPORT     void SetTang2d(const Standard_Integer Index,const gp_Vec2d& Tang2d) ;
  //! returns the tangency value of the point of range Index. <br>
//!          An exception is raised if Index < number  of 3d points or <br>
//!          if Index > total number of points. <br>
  Standard_EXPORT     gp_Vec2d Tang2d(const Standard_Integer Index) const;
  //! Vec sets the value of the normal vector at the <br>
//! point of index Index. The norm of the normal <br>
//! vector at the point of position Index is set to the normal curvature. <br>
//!          An exception is raised if Index <0 or if Index > number <br>
//!          of 3d points. <br>
//!          An exception is raised if Curv has an incorrect number of <br>
//!          dimensions. <br>
  Standard_EXPORT     void SetCurv(const Standard_Integer Index,const gp_Vec& Curv) ;
  //! returns the normal vector at the point of range Index. <br>
//!          An exception is raised if Index < 0 or if Index > number <br>
//!          of 3d points. <br>
  Standard_EXPORT     gp_Vec Curv(const Standard_Integer Index) const;
  //! Vec sets the value of the normal vector at the <br>
//! point of index Index. The norm of the normal <br>
//! vector at the point of position Index is set to the normal curvature. <br>
//!          An exception is raised if Index <0 or if Index > number <br>
//!          of 3d points. <br>
//!          An exception is raised if Curv has an incorrect number of <br>
//!          dimensions. <br>
  Standard_EXPORT     void SetCurv2d(const Standard_Integer Index,const gp_Vec2d& Curv2d) ;
  //! returns the normal vector at the point of range Index. <br>
//!          An exception is raised if Index < 0 or if Index > number <br>
//!          of 3d points. <br>
  Standard_EXPORT     gp_Vec2d Curv2d(const Standard_Integer Index) const;
  //! returns True if the MultiPoint has a tangency value. <br>
  Standard_EXPORT     Standard_Boolean IsTangencyPoint() const;
  //! returns True if the MultiPoint has a curvature value. <br>
  Standard_EXPORT     Standard_Boolean IsCurvaturePoint() const;
  //! Prints on the stream o information on the current <br>
//!          state of the object. <br>
//!          Is used to redefine the operator <<. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& o) const;





protected:





private:



Handle_MMgt_TShared ttabTang;
Handle_MMgt_TShared ttabCurv;
Handle_MMgt_TShared ttabTang2d;
Handle_MMgt_TShared ttabCurv2d;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
