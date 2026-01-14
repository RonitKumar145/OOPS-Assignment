//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
protected:
    int value;
public:
    void setValue(int v) { value = v; }
};

class Derived : public Base {
public:
    void displayValue() {
        // Accessing base class protected member
        cout << "Value from Base class: " << value << endl;
    }
};

int main() {
    Derived d;
    d.setValue(100); // Accessing public function of Base
    d.displayValue();
    return 0;
}
