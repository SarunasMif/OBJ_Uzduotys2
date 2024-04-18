#ifndef STUDENTAS_H
#define STUDENTAS_H

#include "includes.h"
//#include "headers_vector.h"

class Student_Data {
private:
    string student_name;
    string student_surname;
    double exam;
    vector<double> HW;
public:
    Student_Data() : exam(0) { }
    Student_Data(const string& name, const string& surname, double grade, const vector<double>& HW_) : student_name(name), student_surname(surname), exam(grade), HW(HW_) {}
    Student_Data(istream& is);
    //Constructors

    string vardas() const { return student_name;}
    string pavarde() const { return student_surname;}
    double egzaminas() const { return exam;}
    vector<double> ND() const { return HW;}
    //Getters

    void SetName(string name){ student_name = name; }
    void SetSurname(string surname){ student_surname = surname; }
    void SetExam( double grade){ exam = grade; }
    void SetHW (const vector<double>& HW_) { HW = HW_; }
    //Setters

    istream& readStudent(istream&);

    ~Student_Data(); //Deconstructor
    Student_Data(const Student_Data& Adata); //Copy constructor
    Student_Data& operator = (const Student_Data& Adata);   //Copy assigment operator
    Student_Data(Student_Data&& Adata) noexcept;    //Move constructor
    Student_Data& operator = (Student_Data&& Adata) noexcept;    //Move assigment operator
    //Rule of five
};

double avg_grade(const Student_Data& Sdata);
double median_grade(const Student_Data& Sdata);
//function declarations

istream& operator>>(istream& set, Student_Data& Sdata);
ostream& operator<<(ostream& print, Student_Data Sdata);
//Input/Output operators
#endif