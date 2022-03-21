//
// Created by Angely Silva Avila on 20/3/2022.
//

#include "Base.h"

Base::Base(){};
Base::Base(string tip) {
    this->tip=tip;
}

Base::~Base() {};

string Base::getTip() {return tip; }
void Base::setTip(string t) {this->tip=t;}

void Base::do_something() {};

string Base::toString() {
    stringstream s;

    s <<"tipo:"<<getTip()<<endl;

    return s.str();

}


