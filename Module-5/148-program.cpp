//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <string>
using namespace std;

int main() {
    try {
        throw string("String Exception Occurred");
    }
    catch (string e) {
        cout << "Caught: " << e << endl;
    }
    return 0;
}
