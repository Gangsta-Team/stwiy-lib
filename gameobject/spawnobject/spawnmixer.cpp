#include "spawnmixer.hpp"

SpawnMixer* SpawnMixer::GetInstance()
{
    return *(SpawnMixer**)0x0082C020;
}

//----- (006027F0) --------------------------------------------------------
//CVLoadObject *__thiscall SpawnMixer::FindCVLoadObject(const void **this, const char *templateName, ESpawnTemplateType eTemplateType)
CVLoadObject* SpawnMixer::FindCVLoadObject( const char *templateName, ESpawnTemplateType eTemplateType )
{
    return ((CVLoadObject*(__thiscall*)(SpawnMixer*, const char *, ESpawnTemplateType))0x006027F0)( this, templateName, eTemplateType );
}