//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Demo {
public:
    void staticBind() { cout << "Static\n"; }
    virtual void dynamicBind() { cout << "Dynamic\n"; }
};

class Sub : public Demo {
public:
    void dynamicBind() { cout << "Sub Dynamic\n"; }
};

int main() {
    Demo* d = new Sub();
    d->staticBind();
    d->dynamicBind();
    return 0;
}
