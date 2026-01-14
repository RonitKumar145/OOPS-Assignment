//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
private:
    int priv = 3;
};

// Private Inheritance
class Derived : private Base {
public:
    void show() {
        cout << "Public member from Base: " << pub << endl;
        cout << "Protected member from Base: " << prot << endl;
        // cout << "Private member: " << priv << endl; // Error: Not accessible
    }
};

int main() {
    Derived d;
    d.show();
    // d.pub; // Error: pub is private in Derived class
    return 0;
}
