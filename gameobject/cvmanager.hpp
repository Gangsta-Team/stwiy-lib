#ifndef _CVMANAGER_HPP
#define _CVMANAGER_HPP

#include "engine/object/gameset.hpp"
#include "gameobject/character/characterobject.hpp"

#pragma pack(push, 1)

class CVManager// : public FlowClient
{
public:
    virtual ~CVManager() = 0;

    static CVManager* GetInstance( void );
    GameSet<CharacterObject>* GetCharacterSet();
};

#pragma pack(pop)

//static_assert(sizeof(CVManager) == 0, "CVManager has not been correctly aligned!");

#endif // !_CVMANAGER_HPP