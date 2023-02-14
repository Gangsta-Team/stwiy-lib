#ifndef __CVLOADOBJECT_HPP
#define __CVLOADOBJECT_HPP

#include "../../common.hpp"

class CVLoadObject //: public StreamClient
{
public:
    int pad0;
    const char *m_Name;

	
    void AddSpawnUsage( unsigned usageMask );
    void RemoveSpawnUsage( unsigned usageMask );
};

#endif // __CVLOADOBJECT_HPP