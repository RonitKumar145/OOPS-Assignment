//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function allowing override
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows: Meow!" << endl;
    }
};

int main() {
    Animal *a1, *a2;
    Dog d;
    Cat c;

    a1 = &d;
    a2 = &c;

    a1->makeSound(); // Calls Dog's version
    a2->makeSound(); // Calls Cat's version

    return 0;
}
