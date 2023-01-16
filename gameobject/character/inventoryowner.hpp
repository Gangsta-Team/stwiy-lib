//InventoryOwner
#ifndef _INVENTORYOWNER_HPP
#define _INVENTORYOWNER_HPP

#include "engine/object/gamesimobject.hpp"

#pragma pack(push, 1)

class InventoryOwner //: public GameSimObject
{
public:
    //virtual ~InventoryOwner();
    InventoryOwner(const char* name, /*core::MemoryAllocator*/ void * allocator);
};

#pragma pack(pop)

//static_assert(sizeof(InventoryOwner) == 0x0/* TODO: unknown size*/);

#endif // !_INVENTORYOWNER_HPP