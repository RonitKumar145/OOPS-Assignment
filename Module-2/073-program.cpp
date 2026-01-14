//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Demo {
public:
    int value;
    
    Demo(int v) : value(v) {}

    // Const member function
    // Required to be called by const objects
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // Constant Object
    // Its data members cannot be modified
    const Demo obj(100);

    // obj.value = 200; // Error: Cannot modify const object
    
    obj.display(); // Allowed because display() is a const function

    return 0;
}
