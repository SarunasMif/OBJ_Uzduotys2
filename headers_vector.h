#ifndef HEADERS_H
#define HEADERS_H

#include "Studentas.h"
#include "includes.h"

void splitstudents(vector<Student_Data>& S_Data, string mode);
bool isDigit(const string& str_placeholder, int check);
bool isString(const string& str_placeholder);
void printData(const vector<Student_Data>& Sdata, string mode, string filename);
int fileInput(const string filename);
int generateFile();
#endif