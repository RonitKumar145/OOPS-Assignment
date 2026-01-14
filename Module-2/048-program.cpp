//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    void setDimensions(int l, int b) {
        length = l;
        breadth = b;
    }

    int calculateArea() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;
    int len, wid;

    cout << "Enter length and width of rectangle: ";
    cin >> len >> wid;

    rect.setDimensions(len, wid);
    
    cout << "Area of Rectangle: " << rect.calculateArea() << endl;

    return 0;
}
