#include "cvmanager.hpp"
#include "common.hpp"

CVManager* CVManager::GetInstance()
{
    return *(CVManager**)0x00822AF8;
}

GameSet<CharacterObject>* CVManager::GetCharacterSet()
{
	return *(GameSet<CharacterObject>**)((BYTE*)this + 64);
}