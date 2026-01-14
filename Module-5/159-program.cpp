//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// This function promises to throw only int
// Note: Dynamic exception specifications are deprecated in C++11 and removed in C++17
// but this concept is often taught. Modern C++ uses 'noexcept'.
void throwInt() throw(int) {
    throw 10;
}

// Function throwing something not in list leads to unexpected termination
// void throwChar() throw(int) { throw 'a'; } 

int main() {
    try {
        throwInt();
    }
    catch (int e) {
        cout << "Caught int: " << e << endl;
    }
    return 0;
}
