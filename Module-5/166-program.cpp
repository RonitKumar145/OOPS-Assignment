//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    // A function in base class that doesn't throw
    virtual void show() { cout << "Base show" << endl; }
};

class Derived : public Base {
public:
    // It's allowed for overridden function to throw exceptions
    // even if base one does not (unless base is noexcept)
    void show() {
        throw "Exception from Derived show()";
    }
};

int main() {
    Base* b = new Derived();
    try {
        b->show();
    }
    catch (const char* msg) {
        cout << "Caught: " << msg << endl;
    }
    return 0;
}
