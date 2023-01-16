//GameSimObject
#ifndef _GAMESIMOBJECT_HPP
#define _GAMESIMOBJECT_HPP

#pragma pack(push, 1)

class GameSimObject
{
public:
    virtual ~GameSimObject();
    GameSimObject(const char* name, /* TODO: core::MemoryAllocator*/ void * allocator);
};

#pragma pack(pop)

//static_assert(sizeof(GameSimObject) == 0x0/* TODO: unknown size*/);

#endif // !_GAMESIMOBJECT_HPP