#include "cvmanager.hpp"
#include "common.hpp"

static CVManager** s_CVManagerInstance = (CVManager**)0x00822AF8;

CVManager* CVManager::GetInstance()
{
    return (*s_CVManagerInstance);
}