#ifndef _CAMERAMANAGER_HPP
#define _CAMERAMANAGER_HPP

#include "gameobject/gamesetobject.hpp"
#include "radobjects.hpp"

#pragma pack(push, 4)

class CameraManager : public GameSetObject
{
public:
    virtual ~CameraManager() = 0;

    static CameraManager* GetInstance( void );

    pure3d::Camera* GetCurrentRenderCamera();
};

#pragma pack(pop)

//static_assert(sizeof(CameraManager) == 204, "CameraManager has not been correctly aligned!");

#endif // !_CAMERAMANAGER_HPP