//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    // 1. Find area of Circle
    const float PI = 3.141f;
    float radius;

    cout << "Enter radius of circle: ";
    cin >> radius;

    float circleArea = PI * radius * radius;
    cout << "Area of Circle: " << circleArea << endl << endl;

    // 2. Find area of Triangle
    float base, height;
    cout << "Enter base of triangle: ";
    cin >> base;
    cout << "Enter height of triangle: ";
    cin >> height;

    float triangleArea = (base * height) / 2;
    cout << "Area of Triangle: " << triangleArea << endl << endl;

    // 3. Find area of Rectangle
    float length, width;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    float rectangleArea = length * width;
    cout << "Area of Rectangle: " << rectangleArea << endl;

    return 0;
}