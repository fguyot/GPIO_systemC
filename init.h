#ifndef INIT_h
#define INIT_h
#include "register.h"

class init
{
    public:

        init();

    private:
        uint PIOA[final_size_memory];
        uint PIOB[final_size_memory];
        uint PIOC[final_size_memory];
        uint PIOD[final_size_memory];
};

 