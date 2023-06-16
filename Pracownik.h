#ifndef UNTITLED_PRACOWNIK_H
#define UNTITLED_PRACOWNIK_H
#include <string>
#include "Osoba.h"

using namespace std;

class Pracownik : public Osoba
{
    string numerpracownika;
    string stanowisko;
    string typ = "Pracownik";
    string id = numerpracownika;

public:
//wypisanie stanowiska

    string getStanowisko();

//ustawienie stanowiska

    void setStanowisko(string stanowisko);

//wypisanie numeru pracownika

    string getnumerpracownika();

//wpisanie numeru pracownika

    void setnumerpracownika(string numerpracownika);

//jaki typ osoby

    string getType();

//jakie id

    string getId();

    string danezapis();

};





#endif //UNTITLED_PRACOWNIK_H
