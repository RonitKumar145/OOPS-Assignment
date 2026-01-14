//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor called." << endl;
        // Simulating failure condition
        if (true) {
            throw "Constructor Failed Initialization!";
        }
    }
    ~Test() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    try {
        Test t; // Constructor throws
    }
    catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }
    return 0;
}
