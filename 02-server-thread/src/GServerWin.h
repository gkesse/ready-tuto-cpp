//===============================================
#pragma once
//===============================================
#include "GServer.h"
//===============================================
#if defined(_WIN32)
//===============================================
class GSocketWin : public GSocket {
public:
    GSocketWin();
    ~GSocketWin();
    void run();
};
//===============================================
#endif
//===============================================
