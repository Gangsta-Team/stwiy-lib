#include "cameramanager.hpp"
#include "common.hpp"

static CameraManager** s_CameraManagerInstance = (CameraManager**)0x008251A8;

CameraManager* CameraManager::GetInstance()
{
    return (*s_CameraManagerInstance);
}

//----- (0055EFA0) --------------------------------------------------------
//int __thiscall CameraManager::GetCurrentRenderCamera(_DWORD *this)
pure3d::Camera* CameraManager::GetCurrentRenderCamera()
{
    return ((pure3d::Camera*(__thiscall *)(CameraManager *))0x0055EFA0)(this);
}