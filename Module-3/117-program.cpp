//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Engine {
public: void start() { cout << "Vroom\n"; }
};

class Car {
    Engine e;
public: void move() { e.start(); cout << "Moving\n"; }
};

int main() {
    Car c;
    c.move();
    return 0;
}
