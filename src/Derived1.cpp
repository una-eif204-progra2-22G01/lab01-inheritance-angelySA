//
// Created by Angely Silva Avila on 20/3/2022.
//

#include "Derived1.h"

Derived1::Derived1() {};
Derived1::Derived1(string tip, string objet) {
    setTip(tip);
    this->objet=objet;

};

Derived1::~Derived1() {};

string Derived1::getObjet() {return objet;}
void Derived1::setObjet(string o) {this-> objet=o;}

void Derived1::do_something() {
    cout<<"\"Derived1!!!\""<<endl;
}

string Derived1::toString() {
    stringstream s;

    s <<"Objeto:"<<getObjet()<<endl;

    return s.str();

}
