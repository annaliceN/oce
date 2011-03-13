// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <IntPoly_IndexedMapNodeOfIndexedMapOfPnt.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _IntPoly_PntHasher_HeaderFile
#include <IntPoly_PntHasher.hxx>
#endif
#ifndef _IntPoly_IndexedMapOfPnt_HeaderFile
#include <IntPoly_IndexedMapOfPnt.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(IntPoly_IndexedMapNodeOfIndexedMapOfPnt)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IntPoly_IndexedMapNodeOfIndexedMapOfPnt)


IMPLEMENT_DOWNCAST(IntPoly_IndexedMapNodeOfIndexedMapOfPnt,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IntPoly_IndexedMapNodeOfIndexedMapOfPnt)


#define TheKey gp_Pnt
#define TheKey_hxx <gp_Pnt.hxx>
#define Hasher IntPoly_PntHasher
#define Hasher_hxx <IntPoly_PntHasher.hxx>
#define TCollection_IndexedMapNode IntPoly_IndexedMapNodeOfIndexedMapOfPnt
#define TCollection_IndexedMapNode_hxx <IntPoly_IndexedMapNodeOfIndexedMapOfPnt.hxx>
#define Handle_TCollection_IndexedMapNode Handle_IntPoly_IndexedMapNodeOfIndexedMapOfPnt
#define TCollection_IndexedMapNode_Type_() IntPoly_IndexedMapNodeOfIndexedMapOfPnt_Type_()
#define TCollection_IndexedMap IntPoly_IndexedMapOfPnt
#define TCollection_IndexedMap_hxx <IntPoly_IndexedMapOfPnt.hxx>
#include <TCollection_IndexedMapNode.gxx>

