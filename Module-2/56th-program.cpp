//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called: Object created." << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called: Object destroyed." << endl;
    }
};

int main() {
    cout << "Entering main function." << endl;
    
    // Create object inside a block
    {
        cout << "Inside block." << endl;
        Demo obj; // Constructor called here
    } // Destructor called here as obj goes out of scope
    
    cout << "Exiting main function." << endl;
    return 0;
}
