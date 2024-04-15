#ifndef STUDENTAS_H
#define STUDENTAS_H

#include "includes.h"
//#include "headers_vector.h"

class Student_Data {
private:
    string student_name;
    string student_surname;
    double egzam;
    vector<double> HW;
public:
    Student_Data() : egzam(0) { }
    Student_Data(istream& is);
    ~Student_Data();

    string vardas() const { return student_name;}
    string pavarde() const { return student_surname;}

    istream& readStudent(istream&);
    void printout(const vector<Student_Data>& Sdata);
};
#endif