//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class A {
public: A() { throw "Ctor Error"; }
};

int main() {
    try { A a; }
    catch(const char* m) { cout << m << endl; }
    return 0;
}
