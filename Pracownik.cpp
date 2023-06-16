#include "Pracownik.h"
#include <string>

string Pracownik :: getStanowisko(){
    return stanowisko;
}

void Pracownik :: setStanowisko(string stanowisko){
    this->stanowisko = stanowisko;
}

string Pracownik :: getnumerpracownika(){
    return numerpracownika;
}

void Pracownik :: setnumerpracownika(string numerpracownika){
    this-> numerpracownika = numerpracownika;
}

string Pracownik :: getType(){
    return typ;
}

string Pracownik :: getId(){
    return id;
}

string Pracownik :: danezapis(){

return getnazwisko() + " " + getimie() + " " + to_string(getwiek()) + " " + getpesel() + " " + getStanowisko() + " " + getnumerpracownika();

}
