#ifndef _CVMANAGER_HPP
#define _CVMANAGER_HPP

#include "engine/object/gameset.hpp"
#include "gameobject/character/characterobject.hpp"
#include "gameobject/spawnobject/spawnobject.hpp"

#pragma pack(push, 1)

class CVManager// : public FlowClient
{
public:
    virtual ~CVManager() = 0;

    static CVManager* GetInstance( void );
    GameSet<CharacterObject>* GetCharacterSet();

    CharacterObject* RequestCharacterSpawn(void* spawnObject, SpawnObjectData* spawnObjectData, math::Vector& position, math::Vector& direction);
    //VehicleObject* RequestVehicleSpawn();
};

#pragma pack(pop)

//static_assert(sizeof(CVManager) == 0, "CVManager has not been correctly aligned!");

#endif // !_CVMANAGER_HPP