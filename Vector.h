#ifndef UNTITLED_VECTOR_H
#define UNTITLED_VECTOR_H

#include <iostream>
#include "Osoba.h"
#include <vector>

using namespace std;

class Vector {

protected:

    vector<Osoba*> Wektor;

public:
    ~Vector();

//funkja dodania osoby

    void dodajosobe(Osoba* osoba);

//funkcja usuwa osobe

    void usunosobe(Osoba* osoba);

//funkcja usuwa osobe po id

    void usunosobezid(string id);


    Osoba* getopi(string id);// funkcja znajdż osobe po indeksie

    Osoba* getopim(string imie);// funkcja  znjadź osobę po imieniu

    Osoba* getopn(string nazwisko);// funkcja znjdź osobę po nazwisku

    Osoba* getopp(string pesel);// funkcja znajdź osobę po peselu


//funkcja liczy ile jest studentów

    int ilestudentow();

//funkcja liczy ile jest pracowników

    int ilepracownikow();

//funkcja zapisuje osobe do pliku

    void zapiswpliku();

//funkcja zapisuje osobe z pliku

    void zapiszpliku();

};






#endif //UNTITLED_VECTOR_H
