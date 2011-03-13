// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Image_AveragePixelInterpolation_HeaderFile
#define _Image_AveragePixelInterpolation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Image_PixelInterpolation_HeaderFile
#include <Image_PixelInterpolation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Image_Image_HeaderFile
#include <Handle_Image_Image.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Image_DColorImage_HeaderFile
#include <Handle_Image_DColorImage.hxx>
#endif
#ifndef _Handle_Image_DIndexedImage_HeaderFile
#include <Handle_Image_DIndexedImage.hxx>
#endif
class Image_Image;
class Aspect_Pixel;
class Image_DColorImage;
class Aspect_ColorPixel;
class Image_DIndexedImage;
class Aspect_IndexPixel;


//! The class AveragePixelInterpolation is used to compute a SubPixel <br>
//!            value on non integer Image coordinate <br>
//!          AveragePixelInterpolation redefined a new method to compute a <br>
//!	      SubPixel value . <br>
//!	    SubPixel value is the average of the three nearest Pixel in <br>
//!	      the Image . <br>
//!	    If V1, V2, V3, V4 is the value of the three nearest Image <br>
//!	      Pixel V = ( V1+V2+V3 ) / 3 is the Image SubPixel value <br>
//!	      on non integer coordinate (FX,FY) <br>
class Image_AveragePixelInterpolation  : public Image_PixelInterpolation {
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

  //! Create a AveragePixelInterpolation  object. <br>
  Standard_EXPORT   Image_AveragePixelInterpolation();
  //! Redefined the method to compute SubPixel's value <br>
//!	      on non integer Image coordinate. <br>
//!	    LowerX,LowerY,UpperX,UpperY is the Image Min Max, it's use <br>
//!	    check if the SubPixel coordinate FX,FY is outside of image. <br>
//!          Return True  if Interpolation Succes. <br>
//!	    Return False if the SubPixel is out from Image. <br>
  Standard_EXPORT   virtual  Standard_Boolean Interpolate(const Handle(Image_Image)& aImage,const Standard_Real FX,const Standard_Real FY,const Standard_Integer LowerX,const Standard_Integer LowerY,const Standard_Integer UpperX,const Standard_Integer UpperY,Aspect_Pixel& RetPixel) const;
  //! Compute SubPixel's value on non integer Image coordinate for <br>
//!	      DColorImage and ColorPixel. <br>
//!	    LowerX,LowerY,UpperX,UpperY is the Image Min Max, it's use <br>
//!	    check if the SubPixel coordinate FX,FY is outside of image. <br>
//!          Return True  if Interpolation Succes. <br>
//!	    Return False if the SubPixel is out from Image. <br>
  Standard_EXPORT   virtual  Standard_Boolean Interpolate(const Handle(Image_DColorImage)& aImage,const Standard_Real FX,const Standard_Real FY,const Standard_Integer LowerX,const Standard_Integer LowerY,const Standard_Integer UpperX,const Standard_Integer UpperY,Aspect_ColorPixel& RetPixel) const;
  //! Compute SubPixel's value on non integer Image coordinate for <br>
//!	      DIndexedImage and IndexPixel. <br>
//!	    LowerX,LowerY,UpperX,UpperY is the Image Min Max, it's use <br>
//!	    check if the SubPixel coordinate X,Y is outside of image. <br>
//!          Return True  if Interpolation Succes. <br>
//!	    Return False if the SubPixel is out from Image. <br>
  Standard_EXPORT   virtual  Standard_Boolean Interpolate(const Handle(Image_DIndexedImage)& aImage,const Standard_Real FX,const Standard_Real FY,const Standard_Integer LowerX,const Standard_Integer LowerY,const Standard_Integer UpperX,const Standard_Integer UpperY,Aspect_IndexPixel& RetPixel) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
