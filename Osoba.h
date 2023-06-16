#ifndef UNTITLED_OSOBA_H
#define UNTITLED_OSOBA_H

#include <iostream>
#include <string>
#include "Identifiable.h"

using namespace std;

class Osoba{

    string imie;
    string nazwisko;
    string pesel;
    string type;
    string id;
    int wiek;
// funkcja wyznacza wiek z peselu
    void wyznaczaniewieku(string pesel);
//funkcja sprawdza zgodnosc peselu
    static int sprawdzaniepeselu(string pesel);

public:
//wypisanie imienia
    string getimie();
//ustawianie imienia
    void setimie(string imie);
//wypisanie nazwiska
    string getnazwisko();
//ustawianie nazwiska
    void setnazwisko(string nazwisko);
//wypisanie peselu
    string getpesel();
//ustawianie peselu
    bool setpesel(string pesel);
//wypisanie wieku
    int getwiek();

    virtual string getType();

    virtual string getId();

    virtual string danezapis() = 0;
};





#endif //UNTITLED_OSOBA_H
