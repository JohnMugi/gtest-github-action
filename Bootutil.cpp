#include <iostream>
#include <assert.h>
#include "Bootutil.h"

int bootutil()
{
    int target;
    int resetC = 0x01;
    int triggerP = 0;
    int fbl = 0x0001;
    int app = 0x0002;

    if (resetC == 0x01 && triggerP == 0)
    {
        target = fbl;

    }
    else if(resetC = 0x02) 
    {
        target = app;
    }
    else
    {
        target = app;
    }

   return target ;
}
