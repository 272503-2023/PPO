#include <iostream>
#include <cctype>
#include "Osoba.h"


using namespace std;


int Osoba :: sprawdzaniepeselu(string pesel){

    if(pesel.length() != 11)
        return 0;
    for (int i = 0; i < 11; i++) {
        if (!isdigit(pesel[i]))
            return 0;
    }
    return 1;
}

void Osoba :: wyznaczaniewieku(string pesel){

    int wiek1;
    string rokzpeselu = pesel.substr(0,2);
    int rok = stoi(rokzpeselu);

    if (pesel[2] == 1 || pesel[2] == 0)
        wiek1 = 123 - rok;
    else wiek1 = 23 - rok;

    this -> wiek = wiek1;

}


string Osoba :: getimie(){
    return imie;
}

void Osoba::setimie(string imie) {
    this->imie = imie;
}

string Osoba::getnazwisko() {
    return nazwisko;
}

void Osoba::setnazwisko(string nazwisko) {
    this->nazwisko = nazwisko;
}

string Osoba :: getpesel(){
    return pesel;
}

bool Osoba :: setpesel(string pesel){
    int wynik = sprawdzaniepeselu(pesel);
    if (wynik == 1){
        this->pesel = pesel;
        wyznaczaniewieku(pesel);
        return true;
    } else { cout << "zly pesel"; return false; };
}

int Osoba :: getwiek(){
    return wiek;
}

string Osoba :: getType(){
    return type;
}

string Osoba :: getId(){
    return id;
}
/*
string Osoba ::danezapis() {

    return nazwisko + imie + to_string(wiek) + pesel;

}
 */
