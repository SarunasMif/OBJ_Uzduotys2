# Obj_Uzduotys2

# Realizacijos sparta be optimizavimo

100.000 studentu failo:
Class: 0.061102 sekundes
Struct: 0.0316057 sekundes

1.000.000 studentu failo:
Class: 0.795095 sekundes
Struct: 0.319547 sekundes

## Realizacijos sparta su optimizavimo lygiais 
### 100.000 studentų
| Optimization | Struct | Class | File size Struct | File size Class |
| :---: | :---: | :---: | :---: | :---: |
| O1 | 0.0127796 sekundes. | 0.027290 sekundes. | 260 KB | 254 KB |
| O2 | 0.0124957 sekundes. | 0.027528 sekundes. | 270 KB | 260 KB |
| O3 | 0.0118180 sekundes. | 0.028570 sekundes. | 255 KB | 256 KB |


### 1.000.000 studentų
| Optimization | Struct | Class | File size Struct | File size Class |
| :---: | :---: | :---: | :---: | :---: | 
| O1 | 0.129661 sekundes. | 0.447003 sekundes. |260 KB| 254 KB |
| O2 | 0.118778 sekundes. | 0.455142 sekundes. |270 KB| 260 KB | 
| O3 | 0.117472 sekundes. | 0.442860 sekundes. |255 KB| 256 KB |

# Student_Data class
## Class Structure

`Student_Data` klase sudaro sie nariai:

- `student_name`: string tipo kintamasis, kuri sudaro studento vardas.
- `student_surname`: string tipo kintamasis, kuri sudaro studento pavarde.
- `exam`: Duoble tipo kintamasis, kuri sudaro egzamino pazimys.
- `HW`: Duoble vektorius, kuri sudaro namu darbu pazymiai.

# Duomenu ivedimas

`SetName();`
`SetSurname();`
`SetExam():`
`SetHW(); `

    Student_Data Sdata;
    Sdata.SetName("Vardas");
    Sdata.SetSurname("Pavarde");
    Sdata.SetExam(8);
    Sdata.SetHW({4, 5, 6, 7});

# Duomenu isvedimas

`vardas();`
`pavarde();`
`egzaminas();`
`ND();`

    Student_Data Sdata;
    cout << "Name: " << Sdata.vardas() << endl;
    cout << "Surname: " << Sdata.pavarde() << endl;
    cout << "Exam grade: " << Sdata.egzaminas() << endl;
    cout << "HW: ";
    for (double mark : Sdata.ND()) {
        cout << mark << " ";
    }