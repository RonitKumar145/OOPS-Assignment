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

// Protected Inheritance
class Derived : protected Base {
public:
    void show() {
        cout << "Public member becomes Protected: " << pub << endl;
        cout << "Protected member remains Protected: " << prot << endl;
    }
};

int main() {
    Derived d;
    d.show();
    // d.pub; // Error: pub is protected in Derived class, not accessible in main
    return 0;
}
