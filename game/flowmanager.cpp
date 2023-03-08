#include "flowmanager.hpp"

FlowManager* FlowManager::GetInstance()
{
    return *(FlowManager**)0x0080AC04;
}