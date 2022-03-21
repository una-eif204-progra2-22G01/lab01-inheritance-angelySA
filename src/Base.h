//
// Created by Angely Silva Avila on 20/3/2022.
//

#ifndef LAB01INHERITANCE_CPP_BASE_H
#define LAB01INHERITANCE_CPP_BASE_H

#include <string>
#include <iostream>
#include <sstream>

using namespace std;
class Base {

private:
    string tip;

public:
    Base();
    Base(string);

    string getTip();
    void setTip(string);
    virtual void do_something();
    string toString();
    ~Base();

};


#endif //LAB01INHERITANCE_CPP_BASE_H
