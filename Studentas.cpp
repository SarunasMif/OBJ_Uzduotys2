#include "includes.h"
#include "Studentas.h"

Student_Data::~Student_Data(){

}

istream& Student_Data::readStudent(istream& is){
  is >> student_name >> student_surname;

  HW.clear();

  double mark;
  while(is >> mark) {
    HW.push_back(mark);
  }

  egzam = HW.back();
  HW.pop_back();
  return is;
}

