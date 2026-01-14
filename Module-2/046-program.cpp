//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Box {
public:
    int length;
    int width;
    
    // Method to calculate area used for comparison
    int getArea() {
        return length * width;
    }
};

int main() {
    Box box1;
    Box box2;

    // Set dimensions for box1
    box1.length = 10;
    box1.width = 5;

    // Set dimensions for box2
    box2.length = 8;
    box2.width = 6;

    // Compare areas
    if (box1.getArea() > box2.getArea()) {
        cout << "Box 1 is larger than Box 2." << endl;
    } else if (box1.getArea() < box2.getArea()) {
        cout << "Box 2 is larger than Box 1." << endl;
    } else {
        cout << "Box 1 and Box 2 are of equal size." << endl;
    }

    return 0;
}
