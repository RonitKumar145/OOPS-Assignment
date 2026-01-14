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
public:
    // Resolving ambiguity by defining the function in derived class
    void display() {
        cout << "Resolving ambiguity inside Derived class:" << endl;
        Base1::display(); // Call Base1's display
        Base2::display(); // Call Base2's display
    }
};

int main() {
    Derived d;
    
    // Calls the Derived class display(), which handles the specific calls
    d.display();
    
    // Can also call specific base class function using scope resolution
    cout << "\nCalling directly from main:" << endl;
    d.Base1::display();

    return 0;
}
