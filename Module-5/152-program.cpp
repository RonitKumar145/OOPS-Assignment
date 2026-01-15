//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    try {
        try { throw 10; }
        catch(int) { cout << "Rethrowing\n"; throw; }
    } catch(int) { cout << "Caught rethrow\n"; }
    return 0;
}
