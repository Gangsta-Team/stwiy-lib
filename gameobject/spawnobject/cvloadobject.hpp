#ifndef __CVLOADOBJECT_HPP
#define __CVLOADOBJECT_HPP

#include "../../common.hpp"

class CVLoadObject //: public StreamClient
{
public:
    int unk;
    const char* m_Name;
    uint32_t* m_StreamPackage;
    uint32_t* m_StreamedTemplate;
    const char* m_ScriptClass;
    unsigned char m_HistoryCount;
    unsigned char m_SpawnUsage;
    unsigned char m_SpawnLoadStatus;
    bool m_HasClut;
    bool m_TransitionalTrafficUsage;
    unsigned char m_TrafficSpawnUsageCount;
    unsigned char m_NISSpawnUsageCount;
    unsigned char m_GroupSpawnUsageCount;
    unsigned char m_AmbientSpawnUsageCount;
    unsigned char m_DealerSpawnUsageCount;
    unsigned char m_GangSpawnUsageCount;
    unsigned char m_CopSpawnUsageCount;
    unsigned char m_MissionSpawnUsageCount;
    unsigned char m_SpawnStatus;
    unsigned char m_SpawnType;
	
    void AddSpawnUsage( unsigned usageMask );
    void RemoveSpawnUsage( unsigned usageMask );
};

#endif // __CVLOADOBJECT_HPP