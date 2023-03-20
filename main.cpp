#include "ui.h"
#include "studenci.h"
#include <iostream>
#include <vector>

using namespace std;

vector<Student> studenci;

int main()
{

    addstudent(studenci);

    printstudenci(studenci);

    return 0;
}