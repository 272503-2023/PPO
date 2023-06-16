#ifndef UNTITLED_STUDENT_H
#define UNTITLED_STUDENT_H

#include "Osoba.h"

using namespace std;


class Student : public Osoba
{
    string index;
    string typ = "Student";
    string id = index;

public:

//ustawienie indexu

    void setindex(string index);

//wypisanie index

    string getindex();

    string getType();

    string getId();

    string danezapis();

};





#endif //UNTITLED_STUDENT_H
