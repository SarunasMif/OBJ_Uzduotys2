#include "includes.h"
#include "global.h"
#include "headers_vector.h"

string input_mode;

int main() {
    cout << "VECTOR" << endl;
    cout << "Ar norite ivesti studentu duomenis rankiniu budu ar nuskaityti is failo?" << endl;
    string input_mode;
    
    do {
        cout << "Iveskite 1, jei norite uzpildyti rankiniu budu, iveskite 2, jei norite nuskaityti nuo failo, jei noite generuoti faila iveskite 3: ";
        cin >> input_mode;

        
    }while (input_mode != "1" && input_mode != "2" && input_mode != "3");

    if (input_mode == "1"){
        manualInput();
    }
    else if (input_mode == "3"){
        generateFile();
    }else if (input_mode == "2"){
        string filename;
        filename = "kursiokai.txt";

        fileInput(filename);   
    }

    system("pause");
}

