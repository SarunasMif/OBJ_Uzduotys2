#ifndef STUDENTAS_H
#define STUDENTAS_H

#include "includes.h"

class Student_Data {
private:
    string student_name;
    string student_surname;
    double exam;
    vector<double> HW;
public:
    Student_Data() : exam(0) { }
    Student_Data(istream& is);
    ~Student_Data();

    string vardas() const { return student_name;}
    string pavarde() const { return student_surname;}
    double egzaminas() const { return exam;}
    vector<double> ND() const { return HW;}

    istream& readStudent(istream&);
};

double avg_grade(const Student_Data& Sdata);
double median_grade(const Student_Data& Sdata);
#endif