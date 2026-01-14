//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class ConstDemo {
private:
    // const data member
    const int constValue;

public:
    // Constructor utilizing Member Initializer List
    // This is the ONLY way to initialize const members
    ConstDemo(int v) : constValue(v) {
        cout << "Const member initialized." << endl;
    }

    void display() {
        cout << "Value of const data member: " << constValue << endl;
    }
};

int main() {
    ConstDemo obj(100);
    obj.display();

    return 0;
}
