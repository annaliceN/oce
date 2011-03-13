// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_IndexedMapNodeOfMapOfAsciiString_HeaderFile
#define _Draw_IndexedMapNodeOfMapOfAsciiString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Draw_IndexedMapNodeOfMapOfAsciiString_HeaderFile
#include <Handle_Draw_IndexedMapNodeOfMapOfAsciiString.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
class TCollection_AsciiString;
class Draw_MapOfAsciiString;



class Draw_IndexedMapNodeOfMapOfAsciiString : public TCollection_MapNode {

public:

  
      Draw_IndexedMapNodeOfMapOfAsciiString(const TCollection_AsciiString& K1,const Standard_Integer K2,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        TCollection_AsciiString& Key1() const;
  
        Standard_Integer& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;




  DEFINE_STANDARD_RTTI(Draw_IndexedMapNodeOfMapOfAsciiString)

protected:




private: 


TCollection_AsciiString myKey1;
Standard_Integer myKey2;
TCollection_MapNodePtr myNext2;


};

#define TheKey TCollection_AsciiString
#define TheKey_hxx <TCollection_AsciiString.hxx>
#define Hasher TCollection_AsciiString
#define Hasher_hxx <TCollection_AsciiString.hxx>
#define TCollection_IndexedMapNode Draw_IndexedMapNodeOfMapOfAsciiString
#define TCollection_IndexedMapNode_hxx <Draw_IndexedMapNodeOfMapOfAsciiString.hxx>
#define Handle_TCollection_IndexedMapNode Handle_Draw_IndexedMapNodeOfMapOfAsciiString
#define TCollection_IndexedMapNode_Type_() Draw_IndexedMapNodeOfMapOfAsciiString_Type_()
#define TCollection_IndexedMap Draw_MapOfAsciiString
#define TCollection_IndexedMap_hxx <Draw_MapOfAsciiString.hxx>

#include <TCollection_IndexedMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_hxx
#undef Handle_TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_Type_
#undef TCollection_IndexedMap
#undef TCollection_IndexedMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
