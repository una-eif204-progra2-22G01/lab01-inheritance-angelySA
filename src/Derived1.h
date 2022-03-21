//
// Created by Angely Silva Avila on 20/3/2022.
//

#ifndef LAB01INHERITANCE_CPP_DERIVED1_H
#define LAB01INHERITANCE_CPP_DERIVED1_H

#include <string>
#include <iostream>
#include <sstream>
#include "Base.h"

using namespace std;
class Derived1: public Base {
private:
    string objet;

public:
    Derived1();
    Derived1(string,string);

    string getObjet();
    void setObjet(string);

    void do_something()override;
    string toString();

    ~Derived1();



};


#endif //LAB01INHERITANCE_CPP_DERIVED1_H
