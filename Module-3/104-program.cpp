//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() { cout << "Base\n"; }
};

class A : public Base {
public:
    void print() { cout << "Class A\n"; }
};

class B : public Base {
public:
    void print() { cout << "Class B\n"; }
};

int main() {
    Base *ptr;
    int x;
    cout << "1 for A, 2 for B: "; cin >> x;
    
    if(x == 1) ptr = new A();
    else ptr = new B();
    
    ptr->print();
    return 0;
}
