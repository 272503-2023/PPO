#include "Vector.h"
#include "Student.h"
#include "Pracownik.h"
#include <iostream>
#include <fstream>

using namespace std;

void Vector :: dodajosobe(Osoba* osoba){

    Wektor.push_back(osoba);
}

void Vector :: usunosobe(Osoba* osoba){

    for (int i = 0; i < Wektor.size(); i++)
    {
        if (Wektor[i]->getpesel() == osoba->getpesel())
        {
            Wektor.erase(Wektor.begin() + i);
        }
    }
}

void Vector :: usunosobezid(string id){


    for (int i = 0; i < Wektor.size(); i++) {
        if (Wektor[i]->getId() == id) {
            Wektor.erase(Wektor.begin() + i);
        }
    }

}

Osoba* Vector :: getopi(string id){

    for (auto i : Wektor)
    {
        cout << i->getId() << "\n";
        if (i->getId() == id)
        {
            return i;
        }
    }
    return nullptr;
}
Osoba* Vector :: getopim(string imie){
    for (Osoba* o : Wektor)
    {
        if (o->getimie() == imie)
        {
            return o;
        }
    }
    return nullptr;
}

Osoba* Vector :: getopn(string nazwisko) {
    for (auto & i : Wektor) {
        if (i->getnazwisko() == nazwisko) {
            return i;
        }
    }
    return nullptr;

}
Osoba* Vector :: getopp(string pesel){

    for (auto & i : Wektor) {
        if (i->getpesel() == pesel) {
            return i;
        }
    }
    return nullptr;

}

int Vector :: ileosob(){

    return Wektor.size();

}

int Vector :: ilestudentow(){

    int ilestudentow = 0;
    for (auto & i : Wektor)
    {
        if (
                i->getType() == "Student")
        {
            ilestudentow++;
        }
    }
    return ilestudentow;

}

int Vector :: ilepracownikow(){

    int ilepracownikow = 0;
    for (auto & i : Wektor)
    {
        if (
                i->getType() == "Pracownik")
        {
            ilepracownikow++;
        }
    }
    return ilepracownikow;

}

void Vector :: zapiswpliku(){

    fstream przyklady;
    przyklady.open("przykładyamongus", fstream::out);
    for (auto & i : Wektor)
    {
        przyklady << i->danezapis() << endl;
    }
    przyklady.close();
}

void Vector :: wyswietl(){

    for (auto & i : Wektor)
    {
        cout << i->danezapis() << endl;
    }
}

void Vector :: zapiszpliku(){

    fstream przyklady;
    przyklady.open("przykładyamongus", fstream::in);

    if (przyklady.is_open()) {
        int number;
        przyklady >> number;
        for(int i = 0; i < number; i++) {
            Osoba *osoba = nullptr;
            string type;
            przyklady >> type;
            if (!type.compare("student")) {
                osoba = new Student;
            } else if (!type.compare("pracownik")) {
                osoba = new Pracownik;
            }
            string imie, nazwisko, pesel;
            przyklady >> imie >> nazwisko >> pesel;


            osoba->setimie(imie);
            osoba->setnazwisko(nazwisko);
            osoba->setpesel(pesel);
            Wektor.push_back(osoba);
        }



    } else {
        cout << "nie można otworzyć pliku";
    }

    przyklady.close();


}


Vector::~Vector() {
    for(Osoba* o : Wektor) {
        delete o;
    }
}