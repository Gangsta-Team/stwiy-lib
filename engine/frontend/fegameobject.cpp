#include "fegameobject.hpp"

void* FrontEndManager::Find(char* str){
    return ((void*(__thiscall*)(FrontEndManager*, char*))0x00438F20)( this, str );
}