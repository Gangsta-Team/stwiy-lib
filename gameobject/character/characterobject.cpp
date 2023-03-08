#include "characterobject.hpp"
#include "common.hpp"

static CharacterObject** s_pMainChar = (CharacterObject**)0x00825A78;

CharacterObject* GetMainCharacter()
{
    return (*s_pMainChar);
}

CharacterObject::CharacterObject(const char* name, /* TODO: core::MemoryAllocator*/ void * allocator) //: InventoryOwner(name,allocator)
{
    ((void(__thiscall *)(CharacterObject *, const char*, void* ))0x00573870)(this, name, allocator);
}

bool CharacterObject::IsCharacterDead()
{
    return ((bool(__thiscall *)(CharacterObject *))0x00572C30)(this);
}

int CharacterObject::GetHealth()
{
    return ((int(__thiscall *)(CharacterObject *))0x006E51D0)(this);
}

math::Vector* CharacterObject::GetJointPosition( unsigned int jointIndex) 
{ 
    math::Vector *res = ((math::Vector*(__thiscall *)(CharacterObject *, unsigned int))0x00572480)(this, jointIndex);
    return new math::Vector(res->x, res->y, res->z);
}
