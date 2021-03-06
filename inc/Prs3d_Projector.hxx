// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_Projector_HeaderFile
#define _Prs3d_Projector_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Prs3d_Projector.hxx>

#include <HLRAlgo_Projector.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
#include <Quantity_Length.hxx>
class HLRAlgo_Projector;


//! A projector object.
//! This object defines the parameters of a view for a
//! visualization algorithm. It is, for example, used by the
//! hidden line removal algorithms.
class Prs3d_Projector : public MMgt_TShared
{

public:

  
  Standard_EXPORT Prs3d_Projector(const HLRAlgo_Projector& Pr);
  
  //! Constructs a projector framework from the following parameters
  //! -   Pers is true if the view is a perspective view and
  //! false if it is an axonometric one;
  //! -   Focus is the focal length if a perspective view is defined;
  //! -   DX, DY and DZ are the coordinates of the
  //! projection vector;
  //! -   XAt, YAt and ZAt are the coordinates of the view point;
  //! -   XUp, YUp and ZUp are the coordinates of the
  //! vertical direction vector.
  Standard_EXPORT Prs3d_Projector(const Standard_Boolean Pers, const Quantity_Length Focus, const Quantity_Length DX, const Quantity_Length DY, const Quantity_Length DZ, const Quantity_Length XAt, const Quantity_Length YAt, const Quantity_Length ZAt, const Quantity_Length XUp, const Quantity_Length YUp, const Quantity_Length ZUp);
  
  //! Returns a projector object for use in a hidden line removal algorithm.
  Standard_EXPORT   HLRAlgo_Projector Projector()  const;




  DEFINE_STANDARD_RTTI(Prs3d_Projector)

protected:




private: 


  HLRAlgo_Projector MyProjector;


};







#endif // _Prs3d_Projector_HeaderFile
