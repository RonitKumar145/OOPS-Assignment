//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    try {
        throw 10;
    } catch(int e) {
        cout << "Caught " << e << endl;
    }
    return 0;
}
