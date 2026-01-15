//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base { public: virtual void f() {} };
class Derived : public Base { public: void f() { throw 1; } };

int main() {
    Base* b = new Derived();
    try { b->f(); } catch(int) { cout << "Caught Poly\n"; }
    return 0;
}
