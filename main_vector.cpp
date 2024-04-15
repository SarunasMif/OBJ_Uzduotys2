#include "includes.h"
#include "Studentas.h"

bool isDigit(const string& str_placeholder, int check){
    for (char c : str_placeholder){
        if (!isdigit(c)){
            return false;
        }
    }

    if (check == 1){
        if (stoi(str_placeholder) < 1 || stoi(str_placeholder) > 10){
            return false;
        }
    }

    if (check == 2){
        if (stoi(str_placeholder) < 1 || stoi(str_placeholder) > 4){
            return false;
        }
    }

    if (check == 3){
        if (stoi(str_placeholder) < 1 || stoi(str_placeholder) > 2){
            return false;
        }
    }

    return true;
}// Tikrina ar string yra sudarytas tiks is skaiciu

bool isString(const string& str_placeholder){
    for (char c : str_placeholder){
        if (!isalpha(c)){
            return false;
        }
    }

    return true;
}// Tikrina ar string yra sudarytas tiks is raidziu

void printData(const vector<Student_Data>& Sdata){
    for (const auto& adata : Sdata){
        cout << adata.vardas() << ", " << adata.pavarde() << endl;
    }

    system("pause");
}

int fileInput(string filename){
    vector<Student_Data> Sdata;
    string str_placeholder;

    ifstream Read;

    try {
        Read.open(filename);

        if (!Read){
            throw "Failas nerastas!";
            return 1;
        }
    }
    catch (const char* error){
        cerr << "Error: " << error << endl;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    

    getline(Read, str_placeholder);

    auto start = high_resolution_clock::now();

    while(getline(Read, str_placeholder)){
        Student_Data Adata;

        istringstream get(str_placeholder);
        Adata.readStudent(get);
        Sdata.push_back(Adata);

    }
    
    Read.close();

    do {
            cout << "Ar norite, kad rusiuotu pagal vardus (1), pavardes (2), vidurki (3), pazymiu mediana (4)? : ";
            cin >> str_placeholder;

            if (!isDigit(str_placeholder, 2)){
                cout << "Error, turi buti skaicius nuo 1 iki 4." << endl;
            }
        }while (!isDigit(str_placeholder, 2));

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);
    double microseconds = duration.count();
    double seconds = microseconds / 1000000;

    cout << "Failo nuskaitymas uztruko " << fixed << setprecision(6) << seconds << " sekundes." << endl;

    //splitstudents(Sdata, str_placeholder);

    return 0;
    //return 0;

    printData(Sdata);
}

int main() {
    Student_Data a;
    vector<Student_Data> Sdata;

    fileInput("kursiokai.txt");
    
    //a.printout(Sdata);
    system("pause");
}
