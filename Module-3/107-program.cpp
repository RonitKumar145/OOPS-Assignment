//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Shape {
public:
    virtual int area() = 0; // Pure Virtual Function
};

class Square : public Shape {
    int side;
public:
    Square(int s) : side(s) {}
    int area() { return side * side; }
};

int main() {
    Square s(5);
    cout << "Area: " << s.area() << endl;
    return 0;
}
