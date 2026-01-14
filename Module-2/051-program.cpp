//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class MyClass {
public:
    int number;

    // Default Constructor
    MyClass() {
        number = 0;
        cout << "Default Constructor called. Number initialized to 0." << endl;
    }
};

int main() {
    // Object creation triggers the default constructor
    MyClass obj;
    
    cout << "Value of number: " << obj.number << endl;

    return 0;
}
