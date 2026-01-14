//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int number = 20;
    int *numberPointer; // pointer variable declaration

    numberPointer = &number; // store address of 'number' in pointer variable

    cout << "Value of 'number' variable: ";
    cout << number << endl;

    // print the address stored in numberPointer variable
    cout << "Address stored in 'numberPointer' variable: ";
    cout << numberPointer << endl;

    // access the value at the address available in pointer
    cout << "Value of *numberPointer variable: ";
    cout << *numberPointer << endl;

    return 0;
}
