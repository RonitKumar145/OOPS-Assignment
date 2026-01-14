//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

void subFunction() {
    try {
        throw "Original Exception";
    }
    catch (const char* e) {
        cout << "Caught inside subFunction: " << e << endl;
        throw; // Rethrowing the exception
    }
}

int main() {
    try {
        subFunction();
    }
    catch (const char* e) {
        cout << "Caught inside main (Rethrown): " << e << endl;
    }
    return 0;
}
