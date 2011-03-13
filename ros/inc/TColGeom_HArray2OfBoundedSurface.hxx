// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom_HArray2OfBoundedSurface_HeaderFile
#define _TColGeom_HArray2OfBoundedSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColGeom_HArray2OfBoundedSurface_HeaderFile
#include <Handle_TColGeom_HArray2OfBoundedSurface.hxx>
#endif

#ifndef _TColGeom_Array2OfBoundedSurface_HeaderFile
#include <TColGeom_Array2OfBoundedSurface.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Geom_BoundedSurface_HeaderFile
#include <Handle_Geom_BoundedSurface.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class Geom_BoundedSurface;
class TColGeom_Array2OfBoundedSurface;



class TColGeom_HArray2OfBoundedSurface : public MMgt_TShared {

public:

  
  Standard_EXPORT   TColGeom_HArray2OfBoundedSurface(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   TColGeom_HArray2OfBoundedSurface(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2,const Handle(Geom_BoundedSurface)& V);
  
  Standard_EXPORT     void Init(const Handle(Geom_BoundedSurface)& V) ;
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const Handle(Geom_BoundedSurface)& Value) ;
  
  Standard_EXPORT    const Handle_Geom_BoundedSurface& Value(const Standard_Integer Row,const Standard_Integer Col) const;
  
  Standard_EXPORT     Handle_Geom_BoundedSurface& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
  
       const TColGeom_Array2OfBoundedSurface& Array2() const;
  
        TColGeom_Array2OfBoundedSurface& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TColGeom_HArray2OfBoundedSurface)

protected:




private: 


TColGeom_Array2OfBoundedSurface myArray;


};

#define ItemHArray2 Handle_Geom_BoundedSurface
#define ItemHArray2_hxx <Geom_BoundedSurface.hxx>
#define TheArray2 TColGeom_Array2OfBoundedSurface
#define TheArray2_hxx <TColGeom_Array2OfBoundedSurface.hxx>
#define TCollection_HArray2 TColGeom_HArray2OfBoundedSurface
#define TCollection_HArray2_hxx <TColGeom_HArray2OfBoundedSurface.hxx>
#define Handle_TCollection_HArray2 Handle_TColGeom_HArray2OfBoundedSurface
#define TCollection_HArray2_Type_() TColGeom_HArray2OfBoundedSurface_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
