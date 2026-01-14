//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base1 {
public:
    void display() {
        cout << "Display from Base1" << endl;
    }
};

class Base2 {
public:
    void display() {
        cout << "Display from Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
    // Both Base classes have a 'display' function
};

int main() {
    Derived d;
    // d.display(); // Error: Ambiguous - which display() to call?
    
    cout << "Ambiguity exists: calling d.display() would cause compilation error." << endl;
    
    // Explicitly calling specific functions to show they exist
    d.Base1::display();
    d.Base2::display();

    return 0;
}
