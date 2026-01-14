//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Demo {
public:
    void staticBind() {
        cout << "Static Binding: Resolved at Compile Time." << endl;
    }

    virtual void dynamicBind() {
        cout << "Dynamic Binding: Resolved at Runtime." << endl;
    }
};

class SubDemo : public Demo {
public:
    void dynamicBind() {
        cout << "SubDemo Dynamic Binding." << endl;
    }
};

int main() {
    Demo* ptr = new SubDemo();

    // Static Binding (uses pointer type)
    ptr->staticBind();

    // Dynamic Binding (uses object type)
    ptr->dynamicBind();

    return 0;
}
