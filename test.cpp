#include "headers_vector.h"
#include "Studentas.h"
//g++ -o test test.cpp Studentas.cpp

void test_constructors() {
    // Test default constructor
    Student_Data s1;
    cout << "Test default constructor " << s1.vardas() << endl;
    cout << "Test default constructor " << s1.pavarde() << endl;
    cout << "Test default constructor ";
    for (double grade : s1.ND()) {
        cout << grade << " ";
    }
    cout << endl << "Test default constructor " << s1.egzaminas() << endl;

    // Test constructor with input stream
    istringstream iss("John Doe 1 1 1 1 1");
    Student_Data s2;
    s2.readStudent(iss);
    cout << "Test constructor with input stream " << s2.vardas() << endl;
    cout << "Test constructor with input stream " << s2.pavarde() << endl;
    cout << "Test constructor with input stream ";
    for (double grade : s2.ND()) {
        cout << grade << " ";
    }
    cout << endl << "Test constructor with input stream " << s2.egzaminas() << endl;

    // Test copy constructor
    Student_Data s3 = s2;
    cout << "Test copy constructor " << s3.vardas() << endl;
    cout << "Test copy constructor " << s3.pavarde() << endl;
    cout << "Test copy constructor ";
    for (double grade : s3.ND()) {
        cout << grade << " ";
    }
    cout << endl << "Test copy constructor " << s3.egzaminas() << endl;

    // Test move constructor
    Student_Data s4 = move(s3);
    cout << "Test move (Old) constructor " << s3.vardas() << endl;
    cout << "Test move (Old) constructor " << s3.pavarde() << endl;
    cout << "Test move (Old) constructor ";
    for (double grade : s3.ND()) {
        cout << grade << " ";
    }
    cout << endl << "Test move (Old) constructor " << s3.egzaminas() << endl;

    cout << "Test move constructor " << s4.vardas() << endl;
    cout << "Test move constructor " << s4.pavarde() << endl;
    cout << "Test move constructor ";
    for (double grade : s4.ND()) {
        cout << grade << " ";
    }
    cout << endl << "Test move constructor " << s4.egzaminas() << endl;

}

void test_assignment_operators() {
    // Test copy assignment
    istringstream iss("John Doe 1 1 1 1 1");
    Student_Data s1;
    s1.readStudent(iss);
    Student_Data s2;
    s2 = s1;
    cout << "Test copy assignment " << s2.vardas() << endl;
    cout << "Test copy assignment " << s2.pavarde() << endl;
    cout << "Test copy assignment ";
    for (double grade : s2.ND()) {
        cout << grade << " ";
    }
    cout << endl << "Test copy assignment " << s2.egzaminas() << endl;

    // Test move assignment
    Student_Data s3;
    s3 = move(s2);
    cout << "Test move assignment " << s3.vardas() << endl;
    cout << "Test move assignment " << s3.pavarde() << endl;
    cout << "Test move assignment ";
    for (double grade : s3.ND()) {
        cout << grade << " ";
    }
    cout << endl << "Test move assignment " << s3.egzaminas() << endl;
}

void test_input_output_methods() {
    // Test manual input
    Student_Data s1;
    s1.SetName("John");
    s1.SetSurname("Doe");
    s1.SetHW({3, 3, 3, 3});
    s1.SetExam(3);

    // Test output to screen
    cout << "Test manual input " << s1.vardas() << endl;
    cout << "Test manual input " << s1.pavarde() << endl;
    cout << "Test manual input ";
    for (double grade : s1.ND()) {
        cout << grade << " ";
    }
    cout << endl;
    cout << "Test manual input " << s1.egzaminas() << endl;
}

void test_AverageCalculations() {
    istringstream iss("John Doe 6 7 3 4 9 8");
    Student_Data s1;
    s1.readStudent(iss);
    cout << "Test GalutinisMed calculations (7.2) " << median_grade(s1) << endl;
    cout << "Test GalutinisVid calculations (7.12) " << avg_grade(s1) << endl;
}

int main() {
    test_constructors();
    test_assignment_operators();
    test_input_output_methods();
    test_AverageCalculations();
    
    system ("pause");
}