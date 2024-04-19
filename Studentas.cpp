#include "includes.h"
#include "Studentas.h"

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

istream& operator>>(istream& set, Student_Data& Sdata){
  string s_name, s_surname;
  double e_grade;
  vector<double> HW_grades;

  cout << "Iveskite studento varda ir pavarde: ";
  set >> s_name;
  set >> s_surname;

  Sdata.SetName(s_name);
  Sdata.SetSurname(s_surname);

  return set;
}

ostream& operator<<(ostream& print, Student_Data Sdata){
  
  return print;
}

Student_Data::Student_Data(const Student_Data& Adata) : student_name(Adata.student_name), student_surname(Adata.student_surname), exam(Adata.exam), HW(Adata.HW) {
  //cout << "Copy constructor" << endl;
}
//Copy constructor

Student_Data& Student_Data::operator=(const Student_Data& Adata) {
  //cout << "Copy assigment" << endl;
  if (this != &Adata) {
    student_name = Adata.student_name;
    student_surname = Adata.student_surname;
    HW = Adata.HW;
    exam = Adata.exam;
  }

  return *this;
}
//Copy assignment operator

Student_Data::Student_Data(Student_Data&& Adata) noexcept : student_name(move(Adata.student_name)), student_surname(move(Adata.student_surname)), exam(move(Adata.exam)), HW(move(Adata.HW)) {
  Adata.student_name.clear();
  Adata.student_surname.clear();
  Adata.exam = 0;
  Adata.HW.clear();

  cout << "Move constructor" << endl;
}
//Move constructor

Student_Data& Student_Data::operator=(Student_Data&& Adata) noexcept {
  cout << "Move assigment" << endl;
  if (this != &Adata) {
    student_name = move(Adata.student_name);
    student_surname = move(Adata.student_surname);
    exam = move(Adata.exam);
    HW = move(Adata.HW);
    Adata.student_name.clear();
    Adata.student_surname.clear();
    Adata.HW.clear();
    Adata.exam = 0;
  }

  return *this;
}
//Move assignment constructor

Student_Data::~Student_Data() {
  HW.clear();
}
//Deconstructor