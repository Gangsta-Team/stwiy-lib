#ifndef __SPAWNOBJECT_HPP
#define __SPAWNOBJECT_HPP

#include "../../common.hpp"

class SpawnObjectData
{
public:
    static SpawnObjectData * GetInstance(void);
    
    const char *mName;
    const char *mScriptClass;
    const char *mClass;
    const char *mTemplate;
    const char *mWeapon;
    const char *mTeam;
    uint8_t mIdleBehaviour;
    uint8_t mCombatBehaviour;

};

#endif // __SPAWNOBJECT_HPP