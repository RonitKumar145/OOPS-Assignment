//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class ClassA {
private:
    int privateDataA = 10;
    
public:
    // ClassB is a friend of ClassA, so ClassB can access ClassA's private members
    friend class ClassB;
};

class ClassB {
public:
    void accessA(ClassA& objA) {
        cout << "ClassB accessing ClassA private data: " << objA.privateDataA << endl;
    }
    
    // ClassA is NOT a friend of ClassB by default, so ClassA cannot access ClassB's private data
    // Friendship is not mutual (A friend of B does not mean B friend of A)
};

int main() {
    ClassA objA;
    ClassB objB;
    
    objB.accessA(objA);
    
    cout << "Demonstrated: ClassB is checking ClassA's private data." << endl;
    cout << "However, ClassA cannot access ClassB's private data unless explicitly declared." << endl;

    return 0;
}
