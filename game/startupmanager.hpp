#ifndef _STARTUPMANAGER_HPP
#define _STARTUPMANAGER_HPP

class StartupManager// : public FlowClient
{
public:
    char gap0[4];
    char missionId;
    char gap5[31];
    int gameState;
    int dword28;
    char debugTransportDataVal[7];
    char byte33;
    char byte34;

    StartupManager( void );
};

#endif // !_STARTUPMANAGER_HPP