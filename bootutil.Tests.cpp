#include <gtest/gtest.h>
#include "Bootutil.h"


TEST(bootutilTests, jumptofbl) {
    //arange
    
    //act
    int expected = 0x0001;
    int actual = bootutil();
    //assert
}


