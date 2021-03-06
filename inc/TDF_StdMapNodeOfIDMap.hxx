// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_StdMapNodeOfIDMap_HeaderFile
#define _TDF_StdMapNodeOfIDMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDF_StdMapNodeOfIDMap_HeaderFile
#include <Handle_TDF_StdMapNodeOfIDMap.hxx>
#endif

#ifndef _Standard_GUID_HeaderFile
#include <Standard_GUID.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class Standard_GUID;
class TDF_IDMap;
class TDF_MapIteratorOfIDMap;



class TDF_StdMapNodeOfIDMap : public TCollection_MapNode {

public:

  
      TDF_StdMapNodeOfIDMap(const Standard_GUID& K,const TCollection_MapNodePtr& n);
  
        Standard_GUID& Key() const;




  DEFINE_STANDARD_RTTI(TDF_StdMapNodeOfIDMap)

protected:




private: 


Standard_GUID myKey;


};

#define TheKey Standard_GUID
#define TheKey_hxx <Standard_GUID.hxx>
#define Hasher Standard_GUID
#define Hasher_hxx <Standard_GUID.hxx>
#define TCollection_StdMapNode TDF_StdMapNodeOfIDMap
#define TCollection_StdMapNode_hxx <TDF_StdMapNodeOfIDMap.hxx>
#define TCollection_MapIterator TDF_MapIteratorOfIDMap
#define TCollection_MapIterator_hxx <TDF_MapIteratorOfIDMap.hxx>
#define Handle_TCollection_StdMapNode Handle_TDF_StdMapNodeOfIDMap
#define TCollection_StdMapNode_Type_() TDF_StdMapNodeOfIDMap_Type_()
#define TCollection_Map TDF_IDMap
#define TCollection_Map_hxx <TDF_IDMap.hxx>

#include <TCollection_StdMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_StdMapNode
#undef TCollection_StdMapNode_hxx
#undef TCollection_MapIterator
#undef TCollection_MapIterator_hxx
#undef Handle_TCollection_StdMapNode
#undef TCollection_StdMapNode_Type_
#undef TCollection_Map
#undef TCollection_Map_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
