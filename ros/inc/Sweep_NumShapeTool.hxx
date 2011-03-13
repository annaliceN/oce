// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Sweep_NumShapeTool_HeaderFile
#define _Sweep_NumShapeTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Sweep_NumShape_HeaderFile
#include <Sweep_NumShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_OutOfRange;
class Sweep_NumShape;


//! This class provides  the indexation and  type analysis <br>
//!          services required by  the NumShape Directing Shapes of <br>
//!          Swept Primitives. <br>
//! <br>
class Sweep_NumShapeTool  {
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

  //! Create a new NumShapeTool with <aShape>.  The Tool <br>
//!          must prepare an indexation  for  all the subshapes <br>
//!          of this shape. <br>
  Standard_EXPORT   Sweep_NumShapeTool(const Sweep_NumShape& aShape);
  //! Returns the number of subshapes in the shape. <br>
  Standard_EXPORT     Standard_Integer NbShapes() const;
  //! Returns the index of <aShape>. <br>
  Standard_EXPORT     Standard_Integer Index(const Sweep_NumShape& aShape) const;
  //! Returns the Shape at index anIndex <br>
  Standard_EXPORT     Sweep_NumShape Shape(const Standard_Integer anIndex) const;
  //! Returns the type of <aShape>. <br>
  Standard_EXPORT     TopAbs_ShapeEnum Type(const Sweep_NumShape& aShape) const;
  //! Returns the orientation of <aShape>. <br>
  Standard_EXPORT     TopAbs_Orientation Orientation(const Sweep_NumShape& aShape) const;
  //! Returns true if there is a First Vertex in the Shape. <br>
  Standard_EXPORT     Standard_Boolean HasFirstVertex() const;
  //! Returns true if there is a Last Vertex in the Shape. <br>
  Standard_EXPORT     Standard_Boolean HasLastVertex() const;
  //! Returns the first vertex. <br>
  Standard_EXPORT     Sweep_NumShape FirstVertex() const;
  //! Returns the last vertex. <br>
  Standard_EXPORT     Sweep_NumShape LastVertex() const;





protected:





private:



Sweep_NumShape myNumShape;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
