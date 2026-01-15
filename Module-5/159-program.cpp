//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

void f() throw(int) { throw 10; }

int main() {
    try { f(); } catch(int) { cout << "Caught\n"; }
    return 0;
}
