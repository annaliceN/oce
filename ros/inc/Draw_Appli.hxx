// File:	Draw_Appli.hxx
// Created:	Tue Apr  7 10:47:21 1992
// Author:	Remi LEQUETTE
//		<rle@sdsun1>

// JR 21 Oct 1999 : Change for Draw_Init_Appli which is in main and is
//                  called from Draw ===> undefined symbol on UNIX
//                                   ===> duplication of code on NT :
//                  One argument added to DrawAppli : Draw_Init_Appli ===>
//                  Draw_Appli of Draw/TKDraw may call Draw_Init_Appli

#ifndef Draw_Appli_HeaderFile
#define Draw_Appli_HeaderFile


#include <Draw_Viewer.hxx>
#include <Draw.hxx>

typedef void (*FDraw_InitAppli)(Draw_Interpretor&);

#ifdef WNT
#include <windows.h>
//extern void Draw_Appli(HINSTANCE,HINSTANCE,LPSTR,int);
Standard_EXPORT void Draw_Appli(HINSTANCE,HINSTANCE,LPSTR,int,
                       const FDraw_InitAppli Draw_InitAppli);
#else
extern void Draw_Appli(Standard_Integer argc, char** argv,
                       const FDraw_InitAppli Draw_InitAppli);
#endif



#if defined(WNT) && !defined(HAVE_NO_DLL)
#ifndef __Draw_API
# ifdef __Draw_DLL
#  define __Draw_API __declspec ( dllexport )
# else
#  define __Draw_API __declspec ( dllimport )
# endif
#endif
#else
#  define __Draw_API  
#endif


#ifndef WNT
extern Draw_Viewer dout;
extern Standard_Boolean Draw_Batch;
#endif

#define atof(X) Draw::Atof(X)
#define atoi(X) Draw::Atoi(X)

class Draw_SaveAndRestore {

  public :

//    __Draw_API Draw_SaveAndRestore 
    Standard_EXPORT Draw_SaveAndRestore 
      (const char* name,
       Standard_Boolean (*test)(const Handle(Draw_Drawable3D)&),
       void (*save)(const Handle(Draw_Drawable3D)&, ostream&),
       Handle(Draw_Drawable3D) (*restore) (istream&),
       Standard_Boolean display = Standard_True);


  const char* Name() const {return myName;}
  Standard_Boolean Test(const Handle(Draw_Drawable3D)&d);
  void Save(const Handle(Draw_Drawable3D)& d, ostream& os) const;
  Handle(Draw_Drawable3D) Restore(istream&) const;
  Standard_Boolean Disp() const {return myDisplay;}
  Draw_SaveAndRestore* Next() {return myNext;}

  private :
    
    const char* myName;
    Standard_Boolean (*myTest)(const Handle(Draw_Drawable3D)&);
    void (*mySave)(const Handle(Draw_Drawable3D)&, ostream&);
    Handle(Draw_Drawable3D) (*myRestore) (istream&);
    Standard_Boolean myDisplay;
    Draw_SaveAndRestore* myNext;
    
};

#endif



