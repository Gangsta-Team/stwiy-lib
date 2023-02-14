#include "cvmanager.hpp"

CVManager* CVManager::GetInstance()
{
    return *(CVManager**)0x00822AF8;
}

GameSet<CharacterObject>* CVManager::GetCharacterSet()
{
	return *(GameSet<CharacterObject>**)((BYTE*)this + 64);
}

//----- (004ED390) --------------------------------------------------------
//HINSTANCE __userpurge CVManager::RequestCharacterSpawn@<eax>(int@<ecx>, int@<ebx>, int@<edi>, int, _DWORD *, _DWORD *, int, char, _DWORD *, char, char, char)
CharacterObject* CVManager::RequestCharacterSpawn(void* spawnObject, SpawnObjectData* spawnObjectData, math::Vector& position, math::Vector& direction){
    return ((CharacterObject*(__thiscall *)(CVManager*, void*, SpawnObjectData*, math::Vector&, math::Vector&, int, int, int, int))0x004ED390)(this, spawnObject, spawnObjectData, position, direction, 1, 0, 0, 0);
}