//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class OuterClass {
public:
    void display() {
        cout << "This is Outer Class." << endl;
    }

    // Nested Class
    class InnerClass {
    public:
        void display() {
            cout << "This is Inner Class." << endl;
        }
    };
};

int main() {
    // Create object of outer class
    OuterClass outerObj;
    outerObj.display();

    // Create object of inner class
    OuterClass::InnerClass innerObj;
    innerObj.display();

    return 0;
}
