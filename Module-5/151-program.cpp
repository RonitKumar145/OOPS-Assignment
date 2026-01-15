//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

void f1() { throw 1; }
void f2() { f1(); }

int main() {
    try { f2(); } 
    catch(int) { cout << "Unwound stack\n"; }
    return 0;
}
