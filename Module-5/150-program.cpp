//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    try {
        throw 10; // Can assume any type here
    }
    catch (...) {
        cout << "Caught generic exception using '...'" << endl;
    }
    return 0;
}
