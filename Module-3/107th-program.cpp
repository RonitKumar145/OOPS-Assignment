//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// Abstract Class
class Shape {
protected:
    int width, height;
public:
    Shape(int w, int h) : width(w), height(h) {}
    
    // Pure virtual function
    virtual int area() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}
    int area() { return width * height; }
};

class Triangle : public Shape {
public:
    Triangle(int w, int h) : Shape(w, h) {}
    int area() { return (width * height) / 2; }
};

int main() {
    Rectangle rect(10, 5);
    Triangle tri(10, 5);

    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Triangle Area: " << tri.area() << endl;

    return 0;
}
