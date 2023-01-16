#include "characterobject.hpp"
#include "common.hpp"

static CharacterObject** s_pMainChar = (CharacterObject**)0x00825A78;

//----- (005885C0) --------------------------------------------------------
//CharacterObject *__thiscall ConcreteClassRep_CharacterObject__create(char *this)

//----- (00573870) --------------------------------------------------------
//char *__thiscall CharacterObject::CharacterObject(char *this, char *a2, int a3)

CharacterObject::CharacterObject(const char* name, /* TODO: core::MemoryAllocator*/ void * allocator) //: InventoryOwner(name,allocator)
{
    ((void(__thiscall *)(CharacterObject *, const char*, void* ))0x00573870)(this, name, allocator);
}

CharacterObject* CharacterObject::GetMainCharacter()
{
    return (*s_pMainChar);
}

//----- (00572C30) --------------------------------------------------------
//BOOL __thiscall CharacterObject::IsCharacterDead(CharacterObject *this)

bool CharacterObject::IsCharacterDead()
{
    return ((bool(__thiscall *)(CharacterObject *))0x00572C30)(this);
}

//----- (006E51D0) --------------------------------------------------------
//int __thiscall CharacterObject::GetHealth(CharacterObject *this)
int CharacterObject::GetHealth()
{
    return ((int(__thiscall *)(CharacterObject *))0x006E51D0)(this);
}

//----- (00572480) --------------------------------------------------------
//const math::Vector **__thiscall CharacterObject::GetJointPosition(CharacterObject *this, unsigned int jointIndex)
math::Vector* CharacterObject::GetJointPosition( unsigned int jointIndex ) 
{ 
    return ((math::Vector*(__thiscall *)(CharacterObject *, unsigned int))0x00572480)(this, jointIndex);
}