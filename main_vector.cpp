#include "includes.h"
#include "Studentas.h"
#include "headers_vector.h"

void splitstudents(vector<Student_Data>& S_Data, string mode){
    string split_type;
    
    do {
        cout << "Pagal, kuria strategija dalinti studentus [1] du naujus vektorius, [2] vienas naujas vektorius, [3] optimizuota naudojant funkcijas: ";
        cin >> split_type;

        if(!isDigit(split_type, 4)){
            cout << "Error. Skaicius turi but tarp 1 ir 3" << endl;
        }
    } while (!isDigit(split_type, 4));

    if (split_type == "1"){
        auto start = high_resolution_clock::now();

        vector<Student_Data> kietiakiai;
        vector<Student_Data> nuskriaustukai;

        for (const auto& adata : S_Data){
            if (avg_grade(adata) < 5){
                nuskriaustukai.push_back(adata);
            }else{
                kietiakiai.push_back(adata);
            }
        }

        auto stop = high_resolution_clock::now();
        chrono::duration<double> diff = stop - start;
        cout << "Rusiavimas baigtas! Rusiavimas uztruko " << diff.count() << " sekundes." << endl;

        printData(kietiakiai, split_type, "kietiakiai.txt");
        printData(nuskriaustukai, split_type, "nuskriaustukai.txt");
    }
    else if (split_type == "2"){
        auto start = high_resolution_clock::now();

        vector<Student_Data> vargsiukai;

        size_t i = 0;

        while (i < S_Data.size()){
            if (avg_grade(S_Data[i]) < 5){

                vargsiukai.push_back(move(S_Data[i]));

                S_Data[i] = move(S_Data.back());
                S_Data.pop_back();
            }else {
                i++;
            }
        }

        auto stop = high_resolution_clock::now();
        chrono::duration<double> diff = stop - start;
        cout << "Rusiavimas baigtas! Rusiavimas uztruko " << diff.count() << " sekundes." << endl;

        printData(S_Data, split_type, "kietiakiai.txt");
        printData(vargsiukai, split_type, "nuskriaustukai.txt");
    }else {
        auto start = high_resolution_clock::now();

        vector<Student_Data> vargsiukai;

        auto split = partition(S_Data.begin(), S_Data.end(), [](const Student_Data& S_Data){
            return avg_grade(S_Data) < 5;
        });

        auto extract = remove_if(S_Data.begin(), split, [](const Student_Data& S_Data){
            return avg_grade(S_Data) < 5;
        });

        move(extract, split, back_inserter(vargsiukai));

        S_Data.erase(extract, split);

        auto stop = high_resolution_clock::now();
        chrono::duration<double> diff = stop - start;
        cout << "Rusiavimas baigtas! Rusiavimas uztruko " << diff.count() << " sekundes." << endl;

        printData(S_Data, split_type, "kietiakiai.txt");
        printData(vargsiukai, split_type, "nuskriaustukai.txt");
    }
    

}// Sukuria du vektorius rusiuoti studentams pagal  vidurkius.

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

void printData(const vector<Student_Data>& Sdata, string mode, string filename){
    vector<Student_Data> sorted = Sdata;
    string setting;
    
    do {
        cout << "Jei norite isvesti i terminala iveskite 1. Jei norite isvesti i faila iveskite 2: ";
        cin >> setting;

        if (!isDigit(setting, 3)){
            cout << "Error! Turi buti sveikasis skaicius nuo 1 iki 2.";
        }

    }while(!isDigit(setting, 3));//Pasirinkimas del isvedimo tipu

    auto start = high_resolution_clock::now();

    if (setting == "1"){       
        cout << left << setw(17) << "Vardas " << setw(15) << "Pavarde " << setw(15) << "Galutinis(Vid.) " << setw(15) << "Galutinis(Med.)" << endl;
        cout << "---------------------------------------------------------------" << endl;

        if (mode == "1"){
            sort(sorted.begin(), sorted.end(), [](const Student_Data& a, const Student_Data& b) {
                return stoi(a.vardas().substr(6)) < stoi(b.vardas().substr(6));
            });
        }//Rusiuoja pagal varda
        else if (mode == "2"){
            sort(sorted.begin(), sorted.end(), [](const Student_Data& a, const Student_Data& b) {
                return stoi(a.pavarde().substr(6)) < stoi(b.pavarde().substr(6));
            });
        }//Rusiuoja pagal pavarde
        else if (mode == "3"){
            sort(sorted.begin(), sorted.end(), [](const Student_Data& a, const Student_Data& b) {
                return avg_grade(a) < avg_grade(b);
            });
        }//Rusiuoja pagal vidurki
        else if (mode == "4"){
            sort(sorted.begin(), sorted.end(), [](const Student_Data& a, const Student_Data& b) {
                return median_grade(a) < median_grade(b);
            });
        }//Rusiouja pagal pazimiu mediana

        for (const auto& Sdata : sorted){
            cout << left << setw(17) << Sdata.vardas() << setw(15) << Sdata.vardas() << setw(16) << fixed << setprecision(2) << avg_grade(Sdata) << setw(15) << fixed << setprecision(2) << median_grade(Sdata) << endl;
        }
        
    }else{

        if (mode == "1"){
            sort(sorted.begin(), sorted.end(), [](const Student_Data& a, const Student_Data& b) {
                return stoi(a.vardas().substr(6)) < stoi(b.vardas().substr(6));
            });
        }//Rusiuoja pagal varda
        else if (mode == "2"){
            sort(sorted.begin(), sorted.end(), [](const Student_Data& a, const Student_Data& b) {
                return stoi(a.pavarde().substr(6)) < stoi(b.pavarde().substr(6));
            });
        }//Rusiuoja pagal pavarde
        else if (mode == "3"){
            sort(sorted.begin(), sorted.end(), [](const Student_Data& a, const Student_Data& b) {
                return avg_grade(a) < avg_grade(b);
            });
        }//Rusiuoja pagal vidurki
        else if (mode == "4"){
            sort(sorted.begin(), sorted.end(), [](const Student_Data& a, const Student_Data& b) {
                return median_grade(a) < median_grade(b);
            });
        }//Rusiouja pagal pazimiu mediana

        ofstream write(filename);

        write << left << setw(17) << "Vardas " << setw(15) << "Pavarde " << setw(15) << "Galutinis(Vid.) " << setw(15) << "Galutinis(Med.)" << endl;
        write << "---------------------------------------------------------------" << endl;

        for (const auto& Sdata : sorted){
            stringstream Adata;
            Adata << left << setw(17) << Sdata.vardas() << setw(15) << Sdata.pavarde() << setw(16) << fixed << setprecision(2) << avg_grade(Sdata) << setw(15) << fixed << setprecision(2) << median_grade(Sdata);
            write << Adata.str() << endl;
        }
    }

    auto stop = high_resolution_clock::now();
    chrono::duration<double> diff = stop - start;
    cout << "Isvedimas baigtas! Isvedimas uztruko " << diff.count() << " sekundes." << endl;
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

    splitstudents(Sdata, str_placeholder);

    return 0;
}

int generateFile(){
    int s_num = 0;
    int hw_hum = 0;
    string filename;

    cout << "Kiek studentu generuoti norit: ";
    cin >> s_num;

    cout << "Kiek namu darbu buvo: ";
    cin >> hw_hum;
    //Number_Of_Homework = hw_hum;

    auto start = high_resolution_clock::now();
    filename =  "Studentai" + to_string(s_num) + ".txt";
    ofstream write(filename);

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1, 10);

    write << left << setw(15) << "Vardas" << setw(15) << "Pavarde";

    for (int i = 0; i < hw_hum; i++){
        write << "ND" + to_string(i + 1) << "\t";
    }
    write << "Egz." << endl;

    for (int i = 0; i < s_num; i++){
        stringstream s_data;
        s_data << left << setw(15) << "Vardas" + to_string(i + 1) << setw(15) << "Pavarde" + to_string(i + 1);

        for (int j = 0; j <= hw_hum; j++){
            s_data << setw(6) << dis(gen) << "\t";
        }

        write << s_data.str() << endl;
    }//Sugeneruoja pazymius atsitiktinai

    write.close();

    auto stop = high_resolution_clock::now();
    chrono::duration<double> diff = stop - start;
    cout << "Failas sukurtas! Failo kurimas uztruko " << diff.count() << " sekundes." << endl;

    fileInput(filename);

    return 0;

}

int main() {
    cout << "VECTOR" << endl;
    cout << "Ar norite ivesti studentu duomenis rankiniu budu ar nuskaityti is failo?" << endl;
    string input_mode;
    
    do {
        cout << "Iveskite 1, jei norite uzpildyti rankiniu budu, iveskite 2, jei norite nuskaityti nuo failo, jei noite generuoti faila iveskite 3: ";
        cin >> input_mode;

        
    }while (input_mode != "1" && input_mode != "2" && input_mode != "3");

    if (input_mode == "1"){
        //manualInput();
    }
    else if (input_mode == "3"){
        generateFile();
    }else {
        string filename;
        filename = "kursiokai.txt";

        fileInput(filename);   
    }

    system("pause");
}
