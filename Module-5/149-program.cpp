//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    try {
        throw 'A';
    } catch(...) {
        cout << "Caught All\n";
    }
    return 0;
}
