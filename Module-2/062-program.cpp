//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Test {
private:
    int x; // Member variable

public:
    // Constructor parameter name is same as member variable
    Test(int x) {
        // Use 'this' pointer to differentiate
        this->x = x; 
        // this->x refers to member variable, x refers to local parameter
    }

    void display() {
        cout << "Value of member variable x: " << x << endl;
    }
};

int main() {
    Test obj(50);
    obj.display();

    return 0;
}
