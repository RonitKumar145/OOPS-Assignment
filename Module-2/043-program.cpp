//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class MyClass {
public:
    // Function defined inside class definition
    void insideFunction() {
        cout << "This function is defined inside the class." << endl;
    }

    // Function declaration only
    void outsideFunction();
};

// Function definition outside the class using scope resolution operator ::
void MyClass::outsideFunction() {
    cout << "This function is defined outside the class." << endl;
}

int main() {
    MyClass myObj;
    
    // Calling the function defined inside
    myObj.insideFunction();
    
    // Calling the function defined outside
    myObj.outsideFunction();

    return 0;
}
