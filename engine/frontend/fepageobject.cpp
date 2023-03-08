#include "fepageobject.hpp"

FEPageObject::FEPageObject()
{
	((void(__thiscall*)(FEPageObject*))0x0080C384)(this);
}

void FEPageObject::Test( int unk0 )
{
    ((void(__thiscall*)(FEPageObject*, int))((int)this + 68))(this, unk0);
}