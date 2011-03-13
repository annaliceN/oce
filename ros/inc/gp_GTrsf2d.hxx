// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_GTrsf2d_HeaderFile
#define _gp_GTrsf2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Mat2d_HeaderFile
#include <gp_Mat2d.hxx>
#endif
#ifndef _gp_XY_HeaderFile
#include <gp_XY.hxx>
#endif
#ifndef _gp_TrsfForm_HeaderFile
#include <gp_TrsfForm.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class Standard_OutOfRange;
class gp_Trsf2d;
class gp_Mat2d;
class gp_XY;
class gp_Ax2d;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_GTrsf2d);


//!  Defines a non persistent transformation in 2D space. <br>
//!  This transformation is a general transformation. <br>
//!  It can be a Trsf2d from package gp, an affinity, or you can <br>
//!  define your own transformation giving the corresponding <br>
//!  matrix of transformation. <br>
//! <br>
//!  With a GTrsf2d you can transform only a doublet of coordinates <br>
//!  XY. It is not possible to transform other geometric objects <br>
//!  because these transformations can change the nature of non- <br>
//!  elementary geometric objects. <br>
//!  A GTrsf2d is represented with a 2 rows * 3 columns matrix : <br>
//! <br>
//!       V1   V2   T        XY         XY <br>
//!    | a11  a12  a14 |   | x |      | x'| <br>
//!    | a21  a22  a24 |   | y |      | y'| <br>
//!    |  0    0    1  |   | 1 |      | 1 | <br>
class gp_GTrsf2d  {

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

  //! returns identity transformation. <br>
      gp_GTrsf2d();
  //! Converts the gp_Trsf2d transformation T into a <br>
//!   general transformation. <br>
      gp_GTrsf2d(const gp_Trsf2d& T);
  //! Creates   a transformation based on the matrix M and the <br>
//!    vector V where M defines the vectorial part of the <br>
//!    transformation, and V the translation part. <br>
      gp_GTrsf2d(const gp_Mat2d& M,const gp_XY& V);
  
//! Changes this transformation into an affinity of ratio Ratio <br>
//! with respect to the axis A. <br>
//! Note: An affinity is a point-by-point transformation that <br>
//! transforms any point P into a point P' such that if H is <br>
//! the orthogonal projection of P on the axis A, the vectors <br>
//! HP and HP' satisfy: HP' = Ratio * HP. <br>
  Standard_EXPORT     void SetAffinity(const gp_Ax2d& A,const Standard_Real Ratio) ;
  
//!  Replaces   the coefficient (Row, Col) of the matrix representing <br>
//!  this transformation by Value, <br>
//! Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 3 <br>
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const Standard_Real Value) ;
  //! Replacesthe translation part of this <br>
//! transformation by the coordinates of the number pair Coord. <br>
  Standard_EXPORT     void SetTranslationPart(const gp_XY& Coord) ;
  
//!  Assigns the vectorial and translation parts of T to this transformation. <br>
        void SetTrsf2d(const gp_Trsf2d& T) ;
  
//! Replaces the vectorial part of this transformation by Matrix. <br>
        void SetVectorialPart(const gp_Mat2d& Matrix) ;
  
//!  Returns true if the determinant of the vectorial part of <br>
//! this transformation is negative. <br>
        Standard_Boolean IsNegative() const;
  //! Returns true if this transformation is singular (and <br>
//! therefore, cannot be inverted). <br>
//! Note: The Gauss LU decomposition is used to invert the <br>
//! transformation matrix. Consequently, the transformation <br>
//! is considered as singular if the largest pivot found is less <br>
//! than or equal to gp::Resolution(). <br>
//! Warning <br>
//! If this transformation is singular, it cannot be inverted. <br>
        Standard_Boolean IsSingular() const;
  
//!  Returns the nature of the transformation.  It can be <br>
//!  an identity transformation, a rotation, a translation, a mirror <br>
//! transformation (relative to a point or axis), a scaling <br>
//! transformation, a compound transformation or some <br>
//! other type of transformation. <br>
        gp_TrsfForm Form() const;
  //!  Returns the translation part of the GTrsf2d. <br>
       const gp_XY& TranslationPart() const;
  
//!  Computes the vectorial part of the GTrsf2d. The returned <br>
//!  Matrix is a 2*2 matrix. <br>
       const gp_Mat2d& VectorialPart() const;
  
//!  Returns the coefficients of the global matrix of transformation. <br>
//! Raised OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 3 <br>
        Standard_Real Value(const Standard_Integer Row,const Standard_Integer Col) const;
      Standard_Real operator()(const Standard_Integer Row,const Standard_Integer Col) const
{
  return Value(Row,Col);
}
  
  Standard_EXPORT     void Invert() ;
  
//!  Computes the reverse transformation. <br>
//!  Raised an exception if the matrix of the transformation <br>
//!  is not inversible. <br>
        gp_GTrsf2d Inverted() const;
  
  Standard_EXPORT     void Multiply(const gp_GTrsf2d& T) ;
    void operator *=(const gp_GTrsf2d& T) 
{
  Multiply(T);
}
  
//!  Computes the transformation composed with T and <me>. <br>
//!  In a C++ implementation you can also write Tcomposed = <me> * T. <br>
//!  Example : <br>
//!      GTrsf2d T1, T2, Tcomp; ............... <br>
//!      //composition : <br>
//!        Tcomp = T2.Multiplied(T1);         // or   (Tcomp = T2 * T1) <br>
//!      // transformation of a point <br>
//!        XY P(10.,3.); <br>
//!        XY P1(P); <br>
//!        Tcomp.Transforms(P1);               //using Tcomp <br>
//!        XY P2(P); <br>
//!        T1.Transforms(P2);                  //using T1 then T2 <br>
//!        T2.Transforms(P2);                  // P1 = P2 !!! <br>
        gp_GTrsf2d Multiplied(const gp_GTrsf2d& T) const;
      gp_GTrsf2d operator *(const gp_GTrsf2d& T) const
{
  return Multiplied(T);
}
  
//! Computes the product of the transformation T and this <br>
//! transformation, and assigns the result to this transformation: <br>
//! this = T * this <br>
  Standard_EXPORT     void PreMultiply(const gp_GTrsf2d& T) ;
  
  Standard_EXPORT     void Power(const Standard_Integer N) ;
  
//!  Computes the following composition of transformations <br>
//!  <me> * <me> * .......* <me>, N time. <br>
//!  if N = 0 <me> = Identity <br>
//!  if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse(). <br>
        gp_GTrsf2d Powered(const Standard_Integer N) const;
  
        void Transforms(gp_XY& Coord) const;
  
        gp_XY Transformed(const gp_XY& Coord) const;
  
//!    Applies this transformation to the coordinates: <br>
//! -   of the number pair Coord, or <br>
//! -   X and Y. <br>
//! <br>
//! Note: <br>
//! -   Transforms modifies X, Y, or the coordinate pair Coord, while <br>
//! -   Transformed creates a new coordinate pair. <br>
        void Transforms(Standard_Real& X,Standard_Real& Y) const;
  
//! Converts this transformation into a gp_Trsf2d transformation. <br>
//! Exceptions <br>
//! Standard_ConstructionError if this transformation <br>
//! cannot be converted, i.e. if its form is gp_Other. <br>
  Standard_EXPORT     gp_Trsf2d Trsf2d() const;
    const gp_Mat2d& _CSFDB_Getgp_GTrsf2dmatrix() const { return matrix; }
    const gp_XY& _CSFDB_Getgp_GTrsf2dloc() const { return loc; }
    gp_TrsfForm _CSFDB_Getgp_GTrsf2dshape() const { return shape; }
    void _CSFDB_Setgp_GTrsf2dshape(const gp_TrsfForm p) { shape = p; }
    Standard_Real _CSFDB_Getgp_GTrsf2dscale() const { return scale; }
    void _CSFDB_Setgp_GTrsf2dscale(const Standard_Real p) { scale = p; }



protected:




private: 


gp_Mat2d matrix;
gp_XY loc;
gp_TrsfForm shape;
Standard_Real scale;


};


#include <gp_GTrsf2d.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
