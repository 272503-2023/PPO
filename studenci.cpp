#include <iostream>
#include <vector>
#include "structstudenci.h"

using namespace std;


void printstudenci(vector<Student> studenci)
{
    for (int i = 0; i < studenci.size(); i++)
    {
        cout << studenci[i].imie << " " << studenci[i].nazwisko << " ma " << studenci[i].wiek << " lat." << endl;
        cout << "Indeks: " << studenci[i].index << endl;
    }
}

void addstudent(vector<Student> &studenci)
{
    Student student;
    cout << "Wprowadź imie: ";
    cin >> student.imie;
    cout << "nazwisko: ";
    cin >> student.nazwisko;
    cout << "wiek: ";
    cin >> student.wiek;
    cout << "indeks: ";
    cin >> student.index;
    studenci.push_back(student);
}