//
// Created by Angely Silva Avila on 20/3/2022.
//

#ifndef LAB01INHERITANCE_CPP_DERIVED2_H
#define LAB01INHERITANCE_CPP_DERIVED2_H

#include "Base.h"

class Derived2: public Base {
private:

    string element;

public:
    Derived2();
    Derived2(string,string);

    string getElement();
    void setElement(string);

    void do_something();
    string toString();
    ~Derived2();
};

#endif //LAB01INHERITANCE_CPP_DERIVED2_H