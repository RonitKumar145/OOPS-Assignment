//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base { public: virtual void f() { cout<<"Base\n"; } };
class Derived : public Base { public: void f() { throw "Err"; } };

int main() {
    try { Derived d; d.f(); } 
    catch(const char* m) { cout << m << endl; }
    return 0;
}
