//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Counter {
public:
    // Static variable to count objects
    static int objectCount;

    // Constructor called when object is created
    Counter() {
        objectCount++;
    }
};

// Initialize static member variable
int Counter::objectCount = 0;

int main() {
    cout << "Initial Count: " << Counter::objectCount << endl;

    Counter c1;
    cout << "Count after creating c1: " << Counter::objectCount << endl;

    Counter c2;
    cout << "Count after creating c2: " << Counter::objectCount << endl;

    Counter c3;
    cout << "Count after creating c3: " << Counter::objectCount << endl;

    return 0;
}
