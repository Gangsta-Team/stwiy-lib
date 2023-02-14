#include "cvloadobject.hpp"

//----- (005F7980) --------------------------------------------------------
//void __thiscall CVLoadObject::AddSpawnUsage(CVLoadObject *this, unsigned int usageMask)
void CVLoadObject::AddSpawnUsage( unsigned usageMask )
{
    ((void(__thiscall*)(CVLoadObject*, int))0x005F7980)( this, usageMask );
}

//----- (005F76A0) --------------------------------------------------------
//void __thiscall CVLoadObject::RemoveSpawnUsage(CVLoadObject *this, unsigned int usageMask)
void CVLoadObject::RemoveSpawnUsage( unsigned usageMask )
{
    ((void(__thiscall*)(CVLoadObject*, int))0x005F76A0)( this, usageMask );
}