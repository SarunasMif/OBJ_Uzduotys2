#include "includes.h"
#include "Studentas.h"
//#include "headers_vector.h"

Student_Data::~Student_Data(){

}

istream& Student_Data::readStudent(istream& is){
  is >> student_name >> student_surname;

  HW.clear();

  double mark;
  while(is >> mark) {
    HW.push_back(mark);
  }

  exam = HW.back();
  HW.pop_back();
  return is;
}//Studentu informacijos ivedimas i class

double Average(const vector<double>& HW){
  double average = 0;

  for (double hw : HW){
    average = average + hw;
  }

  return average / HW.size();
}

double avg_grade(const Student_Data& Sdata){
  double average = Average(Sdata.ND());

  return 0.4 * average + 0.6 * Sdata.egzaminas();
}//Vidurkio skaiciavimas

double Median(const vector<double>& HW){
  double median;

  vector<double> sorted = HW;
  sort(sorted.begin(), sorted.end());

  if (sorted.size() % 2 == 0){
    median = (sorted[sorted.size() / 2 - 1] + sorted[sorted.size() / 2]) / 2.0;

    return median;
  }else {
    median = sorted[sorted.size() / 2];

    return median;
  }
}

double median_grade(const Student_Data& Sdata){
  double HW_median = Median(Sdata.ND());

  return 0.4 * HW_median + 0.6 * Sdata.egzaminas();
}//Medianos skaiciavimas