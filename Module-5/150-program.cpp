//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

void test() { throw 100; }

int main() {
    try {
        test();
    } catch(int e) {
        cout << "Exception: " << e << endl;
    }
    return 0;
}
