//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

// Intermediate Derived class
class Mammal : public Animal {
public:
    void walk() {
        cout << "I can walk!" << endl;
    }
};

// Derived class
class Dog : public Mammal {
public:
    void bark() {
        cout << "I can bark!" << endl;
    }
};

int main() {
    Dog dog1;

    // Accessing members from all levels of inheritance
    dog1.eat();  // From Animal
    dog1.walk(); // From Mammal
    dog1.bark(); // From Dog

    return 0;
}
