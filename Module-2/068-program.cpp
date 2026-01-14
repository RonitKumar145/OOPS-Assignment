//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// Forward declaration
class ClassY;

class ClassX {
private:
    int valX;

public:
    ClassX(int val) : valX(val) {}
    friend void compare(ClassX, ClassY);
};

class ClassY {
private:
    int valY;

public:
    ClassY(int val) : valY(val) {}
    friend void compare(ClassX, ClassY);
};

void compare(ClassX objX, ClassY objY) {
    if (objX.valX > objY.valY) {
        cout << "ClassX has the greater value: " << objX.valX << endl;
    } else if (objY.valY > objX.valX) {
        cout << "ClassY has the greater value: " << objY.valY << endl;
    } else {
        cout << "Both values are equal." << endl;
    }
}

int main() {
    ClassX x(100);
    ClassY y(200);

    compare(x, y);

    return 0;
}
