//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base\n"; }
};
class A : public Base {
public:
    void show() { cout << "A\n"; }
};
class B : public Base {
public:
    void show() { cout << "B\n"; }
};

int main() {
    Base* arr[2];
    arr[0] = new A();
    arr[1] = new B();
    
    for(int i=0; i<2; i++) arr[i]->show();
    return 0;
}
