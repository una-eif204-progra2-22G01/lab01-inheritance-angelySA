#include <iostream>
#include "Derived1.h"
#include "Derived2.h"

using namespace std;

int main(int argc, const char *argv[]) {

    cout << "Welcome to the UNA!" << endl;

    Derived1 derived1;
    derived1.do_something();

    Derived2 derived2;
    derived2.do_something();


}  // end function main