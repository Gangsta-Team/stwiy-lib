#include "radobjects.hpp"

//----- (0069E850) --------------------------------------------------------
//void __thiscall pure3d::WorldToViewport(float *this, math::Vector *worldPoint, math::Vector *cpoint)
void VectorCamera::WorldToViewport(math::Vector* worldPoint, math::Vector* cpoint){
    ((void(__thiscall *)(VectorCamera *, math::Vector*, math::Vector*))0x0069E850)(this, worldPoint, cpoint);
}