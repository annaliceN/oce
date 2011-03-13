// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_TextureRoot_HeaderFile
#define _Graphic3d_TextureRoot_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_TextureRoot_HeaderFile
#include <Handle_Graphic3d_TextureRoot.hxx>
#endif

#ifndef _Handle_Graphic3d_GraphicDriver_HeaderFile
#include <Handle_Graphic3d_GraphicDriver.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Graphic3d_CInitTexture_HeaderFile
#include <Graphic3d_CInitTexture.hxx>
#endif
#ifndef _OSD_Path_HeaderFile
#include <OSD_Path.hxx>
#endif
#ifndef _Graphic3d_TypeOfTexture_HeaderFile
#include <Graphic3d_TypeOfTexture.hxx>
#endif
#ifndef _Handle_AlienImage_AlienImage_HeaderFile
#include <Handle_AlienImage_AlienImage.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Graphic3d_StructureManager_HeaderFile
#include <Handle_Graphic3d_StructureManager.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Graphic3d_GraphicDriver;
class AlienImage_AlienImage;
class TColStd_HArray1OfReal;
class Graphic3d_StructureManager;
class OSD_Path;


//! This is the texture root class enable the dialog with the GraphicDriver <br>
//! allows the loading of texture too supported formats: <br>
//! X, SunRaster, Aida, Euclid, SGI rgb <br>
class Graphic3d_TextureRoot : public MMgt_TShared {

public:

  
  Standard_EXPORT     void Destroy() const;
~Graphic3d_TextureRoot()
{
  Destroy();
}
  //! Checks if a texture class is valide or not <br>
//! returns true if the construction of the class is correct <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
//! Returns the full path of the defined texture. <br>
  Standard_EXPORT    const OSD_Path& Path() const;
  
//! Returns the texture type. <br>
  Standard_EXPORT     Graphic3d_TypeOfTexture Type() const;
  
//! Updates the current texture from a requested alien image. <br>
  Standard_EXPORT     void LoadTexture(const Handle(AlienImage_AlienImage)& anImage) ;
  
//! returns the Texture ID which references the <br>
//! texture to use for drawing. Used by the <br>
//! graphic driver. <br>
  Standard_EXPORT     Standard_Integer TextureId() const;
  
//! Returns the created image texture. <br>
  Standard_EXPORT     Handle_AlienImage_AlienImage Image() const;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfReal GetTexUpperBounds() const;



  DEFINE_STANDARD_RTTI(Graphic3d_TextureRoot)

protected:

  //! Creates a texture from a file <br>
//!  Warning: Note that if <FileName> is NULL the texture must be realized <br>
//! using LoadTexture(image) method. <br>
  Standard_EXPORT   Graphic3d_TextureRoot(const Handle(Graphic3d_StructureManager)& SM,const Standard_CString Path,const Standard_CString FileName,const Graphic3d_TypeOfTexture Type);
  
  Standard_EXPORT     void Update() const;

Graphic3d_CInitTexture MyCInitTexture;


private: 

  
  Standard_EXPORT     Handle_AlienImage_AlienImage LoadTexture() const;

Handle_Graphic3d_GraphicDriver MyGraphicDriver;
Standard_Integer MyTexId;
OSD_Path MyPath;
Graphic3d_TypeOfTexture MyType;
Handle_AlienImage_AlienImage MyImage;
Handle_TColStd_HArray1OfReal MyTexUpperBounds;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
