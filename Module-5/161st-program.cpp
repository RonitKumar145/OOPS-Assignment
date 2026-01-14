//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

void funcC() {
    cout << "Inside funcC -> Throwing exception" << endl;
    throw runtime_error("Error in C");
}

void funcB() {
    cout << "Inside funcB -> Calling funcC" << endl;
    funcC();
    // This line won't execute
    cout << "Inside funcB -> After funcC" << endl; 
}

void funcA() {
    cout << "Inside funcA -> Calling funcB" << endl;
    funcB();
    cout << "Inside funcA -> After funcB" << endl;
}

int main() {
    try {
        funcA();
    }
    catch (exception& e) {
        cout << "Caught in main: " << e.what() << endl;
    }
    return 0;
}
