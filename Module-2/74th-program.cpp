//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Test {
private:
    int x;

public:
    Test(int val) : x(val) {}

    // Constant Member Function
    // Promises not to modify any member variables of the object
    int getValue() const {
        // x = 20; // Error: Cannot modify member in const function
        return x;
    }

    void setValue(int val) {
        x = val;
    }
};

int main() {
    Test t(10);
    cout << "Value: " << t.getValue() << endl;

    t.setValue(20);
    cout << "New Value: " << t.getValue() << endl;

    return 0;
}
