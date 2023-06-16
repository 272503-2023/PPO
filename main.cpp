#include <iostream>
#include "Osoba.h"
#include "Pracownik.h"
#include "Student.h"
#include "Vector.h"


using namespace std;

Student* dodajstudenta(){
    Student* student = new Student;
    cout << "Jakie imie? : ";
    string imie;
    cin >> imie;
    student->setimie(imie);
    cout << "Jakie nazwisko? : ";
    string nazwisko;
    cin >> nazwisko;
    student->setnazwisko(nazwisko);
    cout << "Jaki pesel? : ";
    string pesel;
    do {
        cin >> pesel;
    } while(!student->setpesel(pesel));
    cout << "Index: ";
    string index;
    cin >> index;
    student->setindex(index);
    return student;
}

Pracownik* dodajpracownika(){
    Pracownik* pracownik = new Pracownik;
    cout << "Jakie imie? : ";
    string imie;
    cin >> imie;
    pracownik->setimie(imie);
    cout << "Jakie nazwisko? : ";
    string nazwisko;
    cin >> nazwisko;
    pracownik->setnazwisko(nazwisko);
    cout << "Jaki pesel? : ";
    string pesel;
    do {
        cin >> pesel;
    } while(pracownik->setpesel(pesel));
    cout << "Jaki numer pracownika? : ";
    string numerpracownika;
    cin >> numerpracownika;
    pracownik->setnumerpracownika(numerpracownika);
    cout << "Jakie stanowisko? : ";
    string stanowisko;
    cin >>stanowisko;
    pracownik->setStanowisko(stanowisko);
    return pracownik;


}







int main() {

    bool contin = true;
    Vector ludzie;

    while(contin) {
        cout << "Menu: " << endl;
        cout << "1. dodaj studenta" << endl;
        cout << "2. znajdź studenta" << endl;
        cout << "3. ile jest studentów" << endl;
        cout << "4. dodaj pracownika" << endl;
        cout << "5. znajdź pracownika" << endl;
        cout << "6. ile jest pracowników" << endl;
        cout << "7. zapisz w pliku" << endl;
        cout << "8. dodaj osobe z pliku" << endl;
        cout << "9. wyjdź" << endl;

        int wybor;

        cout << "Co wybierasz?" << endl;
        cin >> wybor;
        Osoba *osoba = nullptr;
        switch (wybor) {
            case 1: {
                osoba = dodajstudenta();
                ludzie.dodajosobe(osoba);
                break;
            }
            case 2: {
                cout << "Index: ";
                string index;
                cin >> index;
                osoba = ludzie.getopi(index);
                if(osoba == nullptr) {cout << "FUCKIN HELL\n"; break;}
                cout << osoba->danezapis() << endl;
                break;
            }
            case 3: {
                cout << ludzie.ilestudentow() << "\n";
                break;
            }
            case 4: {
                osoba = dodajpracownika();
                ludzie.dodajosobe(osoba);
                break;
            }
            case 5: {
                cout << "number pracownika\n";
                string idx;
                cin >> idx;
                osoba = ludzie.getopi(idx);
                cout << osoba->danezapis() << "\n";
                break;
            }
            case 6: {
                cout << ludzie.ilepracownikow() << "\n";
                break;
            }
            case 7: {
                ludzie.zapiswpliku();
                break;
            }
            case 8: {
                ludzie.zapiszpliku();
                break;
            }
            case 9: {contin = false; break;}
            default: {cout << "zły wybór gagatku\n"; break;}
        }
    }
    return 0;
}
