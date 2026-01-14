//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void display() {
        cout << "I am a shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void drawCircle() {
        cout << "Drawing Circle." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void drawRectangle() {
        cout << "Drawing Rectangle." << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    // Both derived classes can access the base class member
    c.display();
    c.drawCircle();

    r.display();
    r.drawRectangle();

    return 0;
}
