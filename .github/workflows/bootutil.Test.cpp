#include <gtest/gtest.h>
#include "bootutil.h"


TEST(bootutilTests, jumptofbl) {
    //arange
    
    //act
    int expected = 0x0001;
    int actual = bootutil();
    //assert
}
TEST(bootutilTests, jumptoapp) {
    //arange
    
    //act
    int expected = 0x0001;
    int actual = bootutil();
    //assert
}

