#include "../headers_vector.h"
#include <gtest/gtest.h>

TEST(Unit_Tests_Vector_1, isDigit_Test) {
    string case_1_1 = "11";    // Expected output: false
    string case_1_2 = "8";    // Expected output: true
    string case_all_3 = "0";    // Expected output: true

    EXPECT_EQ(isDigit(case_1_1, 1), false) << "Function did not handle the value of the string correctly" << endl;
    EXPECT_EQ(isDigit(case_1_2, 1), true) << "Function did not handle the value of the string correctly" << endl;
    EXPECT_EQ(isDigit(case_all_3, 1), false) << "Function did not handle the value of the string correctly" << endl;
    // Strings too test possible input scenarios for the first if

    string case_2_1 = "5";   // Expected output: false
    string case_2_2 = "2";     // Expected output: true

    EXPECT_EQ(isDigit(case_2_1, 2), false) << "Function did not handle the value of the string correctly" << endl;
    EXPECT_EQ(isDigit(case_2_2, 2), true) << "Function did not handle the value of the string correctly" << endl;
    EXPECT_EQ(isDigit(case_all_3, 2), false) << "Function did not handle the value of the string correctly" << endl;
    // Strings too test possible input scenarios for the second if

    string case_3_1 = "4";    // Expected output: false
    string case_3_2 = "1";     // Expected output: true

    EXPECT_EQ(isDigit(case_3_1, 3), false) << "Function did not handle the value of the string correctly" << endl;
    EXPECT_EQ(isDigit(case_3_2, 3), true) << "Function did not handle the value of the string correctly" << endl;
    EXPECT_EQ(isDigit(case_all_3, 3), false) << "Function did not handle the value of the string correctly" << endl;
    // Tests possible input scenarios for the third if

    string gen_1 = "Testas";    // Expected output: false
    string gen_2 = "T3sta5";    // Expected output: false

    EXPECT_EQ(isDigit(gen_2, 0), false) << "Function did not detect letters in string gen_1" << endl;
    EXPECT_EQ(isDigit(gen_2, 0), false) << "Function did not detect letters in string gen_2" << endl;
    // Tests if function finds letters in string

}

TEST(Unit_Tests_Vector_2, isString_Test) {
    string test_1 = "Testas";   // Expected output: true
    string test_2 = "T3sta5";   // Expected output: false
    string test_3 = "123456";   // Expected output: false

    EXPECT_EQ(isString(test_1), true) << "Function does not handle string check correctly" << endl;
    EXPECT_EQ(isString(test_2), false) << "Function does not handle string check correctly" << endl;
    EXPECT_EQ(isString(test_3), false) << "Function does not handle string check correctly" << endl;
    // Tests if function finds numbers in string
}