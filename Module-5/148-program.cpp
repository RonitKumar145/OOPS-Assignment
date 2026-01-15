//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    try {
        throw 20;
    } catch(int e) {
        cout << "Int: " << e << endl;
    } catch(...) {
        cout << "Default\n";
    }
    return 0;
}
