#include "cvmanager.hpp"

CVManager* CVManager::GetInstance()
{
    return *(CVManager**)0x00822AF8;
}

GameSet<CharacterObject>* CVManager::GetCharacterSet()
{
	return *(GameSet<CharacterObject>**)((BYTE*)this + 64);
}

CharacterObject* CVManager::RequestCharacterSpawn(void* spawnObject, SpawnObjectData* spawnObjectData, math::Vector& position, math::Vector& direction){
    return ((CharacterObject*(__thiscall *)(CVManager*, void*, SpawnObjectData*, math::Vector&, math::Vector&, int, int, int, int))0x004ED390)(this, spawnObject, spawnObjectData, position, direction, 1, 0, 0, 0);
}

// TODO: CVM_GetMainCharacterPackage (0x004f4d60)

void CVManager::CVM_SetMainCharacterPackage( char* package_name, int unk1 )
{
    ((void(__thiscall *)(CVManager*, char*, int))0x004EA090)(this, package_name, unk1);
}