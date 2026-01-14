//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Demo {
private:
    int number;

public:
    void setNumber(int num) {
        // 'this' is a pointer to the current object invoking the function
        this->number = num;
    }

    void display() {
        cout << "Number: " << this->number << endl;
        cout << "Address of current object (this): " << this << endl;
    }
};

int main() {
    Demo obj;
    obj.setNumber(100);
    obj.display();

    // Verify address
    cout << "Address of obj in main: " << &obj << endl;

    return 0;
}
