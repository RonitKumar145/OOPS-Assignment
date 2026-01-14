//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// Base class 1
class Mammal {
public:
    void breathe() {
        cout << "I can breathe." << endl;
    }
};

// Base class 2
class WingedAnimal {
public:
    void fly() {
        cout << "I can fly." << endl;
    }
};

// Derived class inheriting from both Mammal and WingedAnimal
class Bat : public Mammal, public WingedAnimal {
public:
    void hang() {
        cout << "I can hang upside down." << endl;
    }
};

int main() {
    Bat bat1;

    // Accessing members from both base classes
    bat1.breathe();
    bat1.fly();
    bat1.hang();

    return 0;
}
