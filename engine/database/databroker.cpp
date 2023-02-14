#include "databroker.hpp"

DataBroker* DataBroker::GetInstance()
{
    return *(DataBroker**)0x0080A714;
}

//----- (00431160) --------------------------------------------------------
//_DWORD *__thiscall DataBroker::Post(int **this, int, char, int)
//void DataBroker::Post(int, char, int)
//{
//    ((void(__thiscall*)(DataBroker*, int, char, int))0x00431160)( this, int, char, int );
//}

//----- (004310C0) --------------------------------------------------------
//_DWORD *__thiscall DataBroker::Post_0(int **this, int, int, int)
void DataBroker::Post( int eventID, int value, int dontknow )
{
    ((void(__thiscall*)(DataBroker*, int, int, int))0x004310C0)( this, eventID, value, dontknow);
}