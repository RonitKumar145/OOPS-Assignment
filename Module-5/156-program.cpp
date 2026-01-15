//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    try {
        try { throw 1; }
        catch(int) { cout << "Inner\n"; throw; }
    } catch(int) { cout << "Outer\n"; }
    return 0;
}
