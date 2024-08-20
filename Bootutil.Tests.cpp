#include <gtest/gtest.h>
#include "Bootutil.h"


TEST(bootutilTests, jumptofbl) {
    //arange
    
    //act
    int expected = 0x0001;
    int actual = bootutil();
    ASSERT_EQ(expected,actual);
    //assert
}

TEST(bootutilTests, jumptoapp) {
    //arange
    
    //act
    int expected = 0x0002;
    int actual = bootutil();
    ASSERT_NQ(expected,actual);
    
    //assert
}


