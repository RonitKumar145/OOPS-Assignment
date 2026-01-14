//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Parameterized Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized Constructor called." << endl;
    }

    int calculateArea() {
        return length * width;
    }
};

int main() {
    // Passing arguments to the constructor
    Rectangle rect(10, 20);
    
    cout << "Area of Rectangle: " << rect.calculateArea() << endl;

    return 0;
}
