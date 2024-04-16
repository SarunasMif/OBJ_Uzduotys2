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
    //Constructors and Deconstructors

    string vardas() const { return student_name;}
    string pavarde() const { return student_surname;}
    double egzaminas() const { return exam;}
    vector<double> ND() const { return HW;}
    //Getters

    void SetName(string name){ student_name = name; }
    void SetSurname(string surname){ student_surname = surname; }
    void SetExam( double grade){ exam = grade; }
    void SetHW (vector<double>& HW_) { HW = HW_; }
    //Setters

    istream& readStudent(istream&);
};

double avg_grade(const Student_Data& Sdata);
double median_grade(const Student_Data& Sdata);
//function declarations
#endif