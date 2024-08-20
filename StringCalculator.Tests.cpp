#include <gtest/gtest.h>
#include "StringCalculator.h"

class StringCalculatorAddTestFixture:public testing::Test{
  protected:
    //Common Reusable Code
    StringCalculator calculator;
    //Hook Callbacks
};

TEST_F(string_calculator_add_when_passed_a_single_number,returns_0_for_empty_string){

  string input="";
  int expectedsum=0;
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}
TEST_F(string_calculator_add_when_passed_a_single_number,returns_0_for_zero){

  string input="0";
  int expectedsum=0;
  int actualSum=calculator.Add(input);
  ASSERT_EQ(actualSum,expectedsum);
}
TEST_F(string_calculator_add_when_passed_a_single_number,returns_1_for_1){

  string input="1";
  int expectedsum=1;
  int actualSum=calculator.Add(input);
  ASSERT_EQ(actualSum,expectedsum);
}

TEST_F(string_calculator_add_when_passed_two_comma_delimited_numbers, returns_their_sum){

  string input="1,2";
  int expectedsum=3;
  int actualSum=calculator.Add(input);
  ASSERT_EQ(actualSum,expectedsum);
}

TEST_F(string_calculator_add_when_passed_multiple_comma_delimited_numbers, returns_their_sum){

  string input="1,2,3";
  int expectedsum=6;
  int actualSum=calculator.Add(input);
  ASSERT_EQ(actualSum,expectedsum);
}

TEST_F(string_calculator_add_when_delimited_with_newline_and_comma, returns_their_sum){

 string input="1\n2,3";
  int expectedsum=6;
  int actualSum=calculator.Add(input);
  ASSERT_EQ(actualSum,expectedsum);
}

TEST_F(string_calculator_add_when_passed_a_delimiter, returns_their_sum){
  
  string input="//;\n1;2";
  int expectedsum=3;
  int actualSum=calculator.Add(input);
  ASSERT_EQ(actualSum,expectedsum);
}

TEST_F(string_calculator_add_when_passed_negative_number, throws_an_exception_listing_invalid_values){
  
  string input="1,-2,-4,5";
//   int expectedsum=45;
//   int actualSum=;
  ASSERT_THROW(calculator.Add(input),invalid_argument);
}

TEST_F(string_calculator_add_when_passed_numbers_over_1000, ignores_them){

  string input="42,1001,3";
  int expectedsum=45;
  int actualSum=calculator.Add(input);
  ASSERT_EQ(actualSum,expectedsum);
}

TEST_F(string_calculator_add_when_passed_multicharacter_delimiter,uses_that_delimiter_to_sum_values){
  
  string input="//[***]\n8***2***3";
  int expectedsum=13;
  int actualSum=calculator.Add(input);
  ASSERT_EQ(actualSum,expectedsum);
}

TEST_F(string_calculator_add_when_passed_multiple_delimiters,sums_on_each_delimiter){

  string input="//[*][%]\n4*2%3";
  int expectedsum=9;
  int actualSum=calculator.Add(input);
  ASSERT_EQ(actualSum,expectedsum);
}

TEST_F(string_calculator_add_when_passed_multiple_multicharacter_delimiters,sums_on_each_delimiter){
 
  string input="//[**][%^]\n4**1%^9";
  int expectedsum=14;
  int actualSum=calculator.Add(input);
  ASSERT_EQ(actualSum,expectedsum);
}
