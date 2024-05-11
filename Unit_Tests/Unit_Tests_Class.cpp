#include "../Studentas.h"
#include <gtest/gtest.h>

TEST(Unit_Tests_Class_1, AVG_Test) {
    Student_Data t1;
    t1.SetHW({6.0, 7.0, 3.0, 4.0, 9.0});
    t1.SetExam(8);
    double expected_avg = 7.12;

    EXPECT_EQ(avg_grade(t1), expected_avg);
}

TEST(Unit_Tests_Class_2, MED_Test) {
    Student_Data t1;
    t1.SetHW({6.0, 7.0, 3.0, 4.0, 9.0});
    t1.SetExam(8);
    double expected_median = 7.2;

    EXPECT_EQ(median_grade(t1), expected_median) << "Median grade calculations are incorrect." << endl;
}
