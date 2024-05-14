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

TEST(Unit_Tests_Class_3, DefCon_Test) {
    Student_Data test;
    vector<double> test_v = { };

    EXPECT_EQ(test.vardas(), "") << "Default constructor gives value to name even though it should not" << endl;
    EXPECT_EQ(test.pavarde(), "") << "Default constructor gives value to surname even though it should not" << endl;
    EXPECT_EQ(test.ND(), test_v) << "Default constructor construct a vector with values in them even though it should not." << endl;
    EXPECT_EQ(test.egzaminas(), 0) << "Default constructor gives value to exam other than 0 even though it shuld not" << endl;
    // Test if the default constructor correctly constructs class object
}

TEST(Unit_Test_Class_4, InpStr_Test) {
    istringstream iss("John Doe 1 1 1 1 1");
    Student_Data test;
    vector<double> test_v = {1, 1, 1, 1};

    test.readStudent(iss);

    EXPECT_EQ(test.vardas(), "John") << "readStudents function inputed the wrong value for name. Expected: John" << endl;
    EXPECT_EQ(test.pavarde(), "Doe") << "readStudents function inputed the wrong value for surname. Expected: Doe" << endl;
    EXPECT_EQ(test.ND(), test_v) << "readStudents function inputed the wrong values into HW vector. Expected: 1 1 1 1" << endl;
    EXPECT_EQ(test.egzaminas(), 1) << "readStudents function inputed the wrong value for exam. Expected: 1" << endl;
    // Tests if readStudent function works correctly with input stream
}

TEST(Unit_Test_Class_5, CopyCon_Test) {
    istringstream iss("John Doe 2 2 2 2 2");
    Student_Data test_1;
    vector<double> test_v_1 = {2, 2, 2, 2};

    test_1.readStudent(iss);

    Student_Data test_2;
    test_2 = test_1;

    EXPECT_EQ(test_1.vardas(), "John") << "Copy constructor changed name value after copy. Expected: John" << endl;
    EXPECT_EQ(test_1.pavarde(), "Doe") << "Copy constructor changed surname value after copy. Expected: Doe" << endl;
    EXPECT_EQ(test_1.ND(), test_v_1) << "Copy constructor changed HW values after copy. Expected: 2, 2, 2, 2" << endl;
    EXPECT_EQ(test_1.egzaminas(), 2) << "Copy constructor changed exam value after copy. Expected: 2" << endl;

    EXPECT_EQ(test_2.vardas(), "John") << "Copy constructor did not succesfully copy name value. Expected: John" << endl;
    EXPECT_EQ(test_2.pavarde(), "Doe") << "Copy constructor did not succesfully copy surname value. Expected: Doe" << endl;
    EXPECT_EQ(test_2.ND(), test_v_1) << "Copy constructor did not succesfully copy HW values. Expected: 2, 2, 2, 2" << endl;
    EXPECT_EQ(test_2.egzaminas(), 2) << "Copy constructor did not succesfully copy exam value. Expected: 2" << endl;

}

TEST(Unit_Test_Class_6, MovCon_Test) {
    istringstream iss("John Doe 2 2 2 2 2");
    Student_Data test_1;
    vector<double> test_v_1 = { };
    vector<double> test_v_2 = {2, 2, 2, 2};

    test_1.readStudent(iss);

    Student_Data test_2;
    test_2 = move(test_1);

    EXPECT_EQ(test_1.vardas(), "") << "Move constructor did not clear name value after move. Expected: " << endl;
    EXPECT_EQ(test_1.pavarde(), "") << "Move constructor did not clear surname value after move. Expected: Doe" << endl;
    EXPECT_EQ(test_1.ND(), test_v_1) << "Move constructor did not clear HW values after move. Expected: 2, 2, 2, 2" << endl;
    EXPECT_EQ(test_1.egzaminas(), 0) << "Move constructor did not clear exam value after move. Expected: 2" << endl;

    EXPECT_EQ(test_2.vardas(), "John") << "Move constructor did not succesfully move name value. Expected: John" << endl;
    EXPECT_EQ(test_2.pavarde(), "Doe") << "Move constructor did not succesfully move surname value. Expected: Doe" << endl;
    EXPECT_EQ(test_2.ND(), test_v_2) << "Move constructor did not succesfully move HW values. Expected: 2, 2, 2, 2" << endl;
    EXPECT_EQ(test_2.egzaminas(), 2) << "Move constructor did not succesfully move exam value. Expected: 2" << endl;
}

TEST(Unit_Test_Class_7, CopyAss_Test) {
    istringstream iss("John Doe 2 2 2 2 2");
    Student_Data test_1;
    vector<double> test_v = {2, 2, 2, 2};

    test_1.readStudent(iss);

    Student_Data test_2;
    test_2 = test_1;

    EXPECT_EQ(test_1.vardas(), "John") << "Copy assignment changed name value after copy. Expected: John" << endl;
    EXPECT_EQ(test_1.pavarde(), "Doe") << "Copy assignnment changed surname value after copy. Expected: Doe" << endl;
    EXPECT_EQ(test_1.ND(), test_v) << "Copy assignment changed HW values after copy. Expected: 2, 2, 2, 2" << endl;
    EXPECT_EQ(test_1.egzaminas(), 2) << "Copy assignment changed exam value after copy. Expected: 2" << endl;

    EXPECT_EQ(test_2.vardas(), "John") << "Copy assignment  did not succesfully copy name value. Expected: John" << endl;
    EXPECT_EQ(test_2.pavarde(), "Doe") << "Copy assignment  did not succesfully copy surname value. Expected: Doe" << endl;
    EXPECT_EQ(test_2.ND(), test_v) << "Copy assignment  did not succesfully copy HW values. Expected: 2, 2, 2, 2" << endl;
    EXPECT_EQ(test_2.egzaminas(), 2) << "Copy assignment  did not succesfully copy exam value. Expected: 2" << endl;

}

TEST(Unit_Test_Class_8, MovAss_Test) {
    istringstream iss("John Doe 2 2 2 2 2");
    Student_Data test_1;
    vector<double> test_v = {2, 2, 2, 2};

    test_1.readStudent(iss);

    Student_Data test_2;
    test_2 = move(test_1);

    EXPECT_EQ(test_1.vardas(), "") << "Move assignment  did not clear name value after move. Expected: " << endl;
    EXPECT_EQ(test_1.pavarde(), "") << "Move assignment  did not clear surname value after move. Expected: Doe" << endl;
    EXPECT_EQ(test_1.ND().size(), 0) << "Move assignment  did not clear HW values after move. Expected: 2, 2, 2, 2" << endl;
    EXPECT_EQ(test_1.egzaminas(), 0) << "Move assignment  did not clear exam value after move. Expected: 2" << endl;

    EXPECT_EQ(test_2.vardas(), "John") << "Move assignment  did not succesfully move name value. Expected: John" << endl;
    EXPECT_EQ(test_2.pavarde(), "Doe") << "Move assignment  did not succesfully move surname value. Expected: Doe" << endl;
    EXPECT_EQ(test_2.ND(), test_v) << "Move assignment  did not succesfully move HW values. Expected: 2, 2, 2, 2" << endl;
    EXPECT_EQ(test_2.egzaminas(), 2) << "Move assignment  did not succesfully move exam value. Expected: 2" << endl;
}

TEST(Unit_Test_Class_9, ManInp_Test) {
    Student_Data test;
    vector<double> test_v = {2, 2, 2, 2};

    EXPECT_EQ(test.vardas(), "") << "Default constructor gives value to name even though it should not" << endl;
    EXPECT_EQ(test.pavarde(), "") << "Default constructor gives value to surname even though it should not" << endl;
    EXPECT_EQ(test.ND().size(), 0) << "Default constructor construct a vector with values in them even though it should not." << endl;
    EXPECT_EQ(test.egzaminas(), 0) << "Default constructor gives value to exam other than 0 even though it shuld not" << endl;

    test.SetName("John");
    test.SetSurname("Doe");
    test.SetHW({2, 2, 2, 2});
    test.SetExam(2);

    EXPECT_EQ(test.vardas(), "John") << "Function did not set name value correctly. Expected: John" << endl;
    EXPECT_EQ(test.pavarde(), "Doe") << "Function did not set surname value correctly. Expected: Doe" << endl;
    EXPECT_EQ(test.ND(), test_v) << "Function did not set HW values correctly. Expected: 2, 2, 2, 2" << endl;
    EXPECT_EQ(test.egzaminas(), 2) << "Function did not set exam value correctly. Expected: 2" << endl;

    system("pause");
}

