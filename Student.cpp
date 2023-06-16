#include "Student.h"

void Student :: setindex(string index){
    this->id = index;
}

string Student :: getindex(){
    return index;
}

string Student :: getType(){
    return typ;
}

string Student :: getId(){
    return id;
}

string Student :: danezapis(){

    return getnazwisko() + " " + getimie() + " " + to_string(getwiek()) + " " + getpesel() + " " + getindex();

}