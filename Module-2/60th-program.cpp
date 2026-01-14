//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class StaticDemo {
public:
    static int staticVar;

    StaticDemo() {
        cout << "Constructor called." << endl;
    }
};

// Initialize static member variable outside the class
int StaticDemo::staticVar = 50;

int main() {
    // Static members can be accessed without creating an object
    cout << "Initial value of staticVar: " << StaticDemo::staticVar << endl;

    StaticDemo obj1;
    obj1.staticVar = 100; // Modifying using object

    cout << "Modified staticVar: " << StaticDemo::staticVar << endl;

    return 0;
}
