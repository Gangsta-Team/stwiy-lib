#ifndef _DATABROKER_HPP
#define _DATABROKER_HPP

#include "../../common.hpp"

class DataBroker {
public:
    static DataBroker* GetInstance( void );

    void Post( int eventID, int value, int dontknow );
};

#endif // !_DATABROKER_HPP