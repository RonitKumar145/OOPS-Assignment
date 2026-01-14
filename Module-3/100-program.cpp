//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// Abstract Class
class Shape {
public:
    // Pure Virtual Function
    // = 0 makes it pure, forcing derived classes to implement it
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    // Shape s; // Error: Cannot instantiate abstract class
    
    Shape *s1 = new Circle();
    Shape *s2 = new Rectangle();

    s1->draw();
    s2->draw();

    return 0;
}
