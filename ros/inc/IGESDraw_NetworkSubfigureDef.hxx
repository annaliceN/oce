// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_NetworkSubfigureDef_HeaderFile
#define _IGESDraw_NetworkSubfigureDef_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDraw_NetworkSubfigureDef_HeaderFile
#include <Handle_IGESDraw_NetworkSubfigureDef.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
#ifndef _Handle_IGESGraph_TextDisplayTemplate_HeaderFile
#include <Handle_IGESGraph_TextDisplayTemplate.hxx>
#endif
#ifndef _Handle_IGESDraw_HArray1OfConnectPoint_HeaderFile
#include <Handle_IGESDraw_HArray1OfConnectPoint.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESDraw_ConnectPoint_HeaderFile
#include <Handle_IGESDraw_ConnectPoint.hxx>
#endif
class TCollection_HAsciiString;
class IGESData_HArray1OfIGESEntity;
class IGESGraph_TextDisplayTemplate;
class IGESDraw_HArray1OfConnectPoint;
class Standard_OutOfRange;
class IGESData_IGESEntity;
class IGESDraw_ConnectPoint;


//! defines IGESNetworkSubfigureDef, <br>
//!           Type <320> Form Number <0> in package IGESDraw <br>
class IGESDraw_NetworkSubfigureDef : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDraw_NetworkSubfigureDef();
  //! This method is used to set fields of the class <br>
//!           NetworkSubfigureDef <br>
//!       - aDepth           : Depth of Subfigure <br>
//!                            (indicating the amount of nesting) <br>
//!       - aName            : Subfigure Name <br>
//!       - allEntities      : Associated subfigures Entities exclusive <br>
//!                            of primary reference designator and <br>
//!                            Control Points. <br>
//!       - aTypeFlag        : Type flag determines which Entity <br>
//!                            belongs in which design <br>
//!                            (Logical design or Physical design) <br>
//!       - aDesignator      : Designator HAsciiString and its Template <br>
//!       - allPointEntities : Associated Connect Point Entities <br>
  Standard_EXPORT     void Init(const Standard_Integer aDepth,const Handle(TCollection_HAsciiString)& aName,const Handle(IGESData_HArray1OfIGESEntity)& allEntities,const Standard_Integer aTypeFlag,const Handle(TCollection_HAsciiString)& aDesignator,const Handle(IGESGraph_TextDisplayTemplate)& aTemplate,const Handle(IGESDraw_HArray1OfConnectPoint)& allPointEntities) ;
  //! returns Depth of Subfigure(indication the amount of nesting) <br>
//! Note : The Depth is inclusive of both Network Subfigure Definition <br>
//!        Entity and the Ordinary Subfigure Definition Entity. <br>
//!        Thus, the two may be nested. <br>
  Standard_EXPORT     Standard_Integer Depth() const;
  //! returns the Subfigure Name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  //! returns Number of Associated(child) entries in subfigure exclusive <br>
//! of primary reference designator and Control Points <br>
  Standard_EXPORT     Standard_Integer NbEntities() const;
  //! returns the Index'th IGESEntity in subfigure exclusive of primary <br>
//! reference designator and Control Points <br>
//! raises exception if Index  <=0 or Index > NbEntities() <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity Entity(const Standard_Integer Index) const;
  //! return value = 0 : Not Specified <br>
//!              = 1 : Logical  design <br>
//!              = 2 : Physical design <br>
  Standard_EXPORT     Standard_Integer TypeFlag() const;
  //! returns Primary Reference Designator <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Designator() const;
  //! returns True if Text Display Template is specified for <br>
//! primary designator else returns False <br>
  Standard_EXPORT     Standard_Boolean HasDesignatorTemplate() const;
  //! if Text Display Template specified then return TextDisplayTemplate <br>
//! else return NULL Handle <br>
  Standard_EXPORT     Handle_IGESGraph_TextDisplayTemplate DesignatorTemplate() const;
  //! returns the Number Of Associated(child) Connect Point Entities <br>
  Standard_EXPORT     Standard_Integer NbPointEntities() const;
  //! returns True is Index'th Associated Connect Point Entity is present <br>
//! else returns False <br>
//! raises exception if Index is out of bound <br>
  Standard_EXPORT     Standard_Boolean HasPointEntity(const Standard_Integer Index) const;
  //! returns the Index'th Associated Connect Point Entity <br>
//! raises exception if Index <= 0 or Index > NbPointEntities() <br>
  Standard_EXPORT     Handle_IGESDraw_ConnectPoint PointEntity(const Standard_Integer Index) const;




  DEFINE_STANDARD_RTTI(IGESDraw_NetworkSubfigureDef)

protected:




private: 


Standard_Integer theDepth;
Handle_TCollection_HAsciiString theName;
Handle_IGESData_HArray1OfIGESEntity theEntities;
Standard_Integer theTypeFlag;
Handle_TCollection_HAsciiString theDesignator;
Handle_IGESGraph_TextDisplayTemplate theDesignatorTemplate;
Handle_IGESDraw_HArray1OfConnectPoint thePointEntities;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
