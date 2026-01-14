//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// Forward declaration needed for ClassB
class ClassB;

class ClassA {
private:
    int numA;

public:
    ClassA() : numA(10) {}

    // Friend function declaration
    friend int add(ClassA, ClassB);
};

class ClassB {
private:
    int numB;

public:
    ClassB() : numB(20) {}

    // Friend function declaration
    friend int add(ClassA, ClassB);
};

// Common friend function accessing private members of both classes
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;

    cout << "Sum: " << add(objectA, objectB) << endl;

    return 0;
}
