#ifndef UNTITLED_IDENTIFIABLE_H
#define UNTITLED_IDENTIFIABLE_H
#include <string>

class Identifiable {

    virtual std::string getType() = 0;
    virtual std::string getId() = 0;

};

#endif //UNTITLED_IDENTIFIABLE_H
