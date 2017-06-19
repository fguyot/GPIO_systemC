#include "init.h"

init::init() {
    int i=0;
    for(i=0;i<=final_size_memory;i++){
        PIOA[i]=0;
        PIOB[i]=0;
        PIOC[i]=0;
        PIOD[i]=0;
    }
}


