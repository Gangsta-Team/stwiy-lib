#include "radobjects.hpp"

//----- (006E97D0) --------------------------------------------------------
//int __cdecl pure3d::AssignRef(int)
//int pure3d::AssignRef(int size){                                   ; 
//    return ((int(__cdecl *)(pure3d*, int))0x006E97D0)(this, size);
//}


//----- (006754C0) --------------------------------------------------------
//_DWORD *__thiscall pure3d::VectorCamera::VectorCamera(_DWORD *this)
pure3d::VectorCamera* pure3d::VectorCamera::GetInstance(){
    return *(pure3d::VectorCamera**)(0x006754C0);
}

//----- (0069E850) --------------------------------------------------------
//void __thiscall pure3d::WorldToViewport(float *this, math::Vector *worldPoint, math::Vector *cpoint)
void pure3d::VectorCamera::WorldToViewport(math::Vector* worldPoint, math::Vector* cpoint){
    ((void(__thiscall *)(pure3d::VectorCamera *, math::Vector*, math::Vector*))0x0069E850)(this, worldPoint, cpoint);
}