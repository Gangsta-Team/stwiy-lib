#ifndef _SPAWNMIXER_HPP
#define _SPAWNMIXER_HPP

#include "cvloadobject.hpp"
#include "../../common.hpp"

/*struct __declspec(align(1)) TrafficConfig
{
    char *m_Name;
    uint32_t m_Key;
    DWORD dword8;
    DWORD dwordC;
    DWORD dword10;
    BYTE gap14[44];
    DWORD dword40;
    BYTE gap44[36];
    uint8_t m_MaxVehicles;
    uint8_t m_MaxCharacters;
    uint8_t m_VehicleMix;
};

static_assert(sizeof(TrafficConfig) == 0x6C);*/

enum ESpawnTemplateType
{
    ESpawnTemplateType_Character,
    ESpawnTemplateType_Vehicle,
    ESpawnTemplateType_MAX,
    ESpawnTemplateType_ALL = ESpawnTemplateType_MAX
};

enum ESpawnUsage
{
    ESpawnUsage_None        = 0,
    ESpawnUsage_Group       = 1 << 0,
    ESpawnUsage_Traffic     = 1 << 1,
    ESpawnUsage_Ambient     = 1 << 2,
    ESpawnUsage_Dealer      = 1 << 3,
    ESpawnUsage_Gang        = 1 << 4,
    ESpawnUsage_Cop         = 1 << 5,
    ESpawnUsage_Mission     = 1 << 6,
    ESpawnUsage_NIS         = 1 << 7,
    ESpawnUsage_ANY         = 1 << 8,
    
    ESpawnUsage_AmbientGroup = ESpawnUsage_Group | ESpawnUsage_Ambient
};

class SpawnMixer
{
public:
    static SpawnMixer* GetInstance( void );

    CVLoadObject* FindCVLoadObject( const char *templateName, ESpawnTemplateType eTemplateType );
};

#endif // !_SPAWNMIXER_HPP