#include "cameramanager.hpp"
#include "common.hpp"

static CameraManager** s_CameraManagerInstance = (CameraManager**)0x008251A8;

CameraManager* CameraManager::GetInstance()
{
    return (*s_CameraManagerInstance);
}

pure3d::Camera* CameraManager::GetCurrentRenderCamera()
{
    return ((pure3d::Camera*(__thiscall *)(CameraManager *))0x0055EFA0)(this);
}

pure3d::Camera* CameraManager::GetCurrentInGameCamera()
{
    return ((pure3d::Camera*(__thiscall *)(CameraManager *))0x006024A0)(this);
}