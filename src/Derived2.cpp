//
// Created by Angely Silva Avila on 20/3/2022.
//


#include "Derived2.h"

Derived2::Derived2() {};
Derived2::Derived2(string tip, string element) {
    setTip(tip);
    this->element=element;

};

Derived2::~Derived2() {};

string Derived2::getElement(){return element;}
void Derived2::setElement(string e) {this-> element=e;}

void Derived2::do_something() {
    cout<<"\"Derived1!!!\""<<endl;
}

string Derived2::toString() {
    stringstream s;

    s <<"Objeto:"<<getElement()<<endl;

    return s.str();

}
