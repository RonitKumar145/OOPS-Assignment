//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Outer try block." << endl;
        try {
            cout << "Inner try block." << endl;
            throw 99;
        }
        catch (int e) {
            cout << "Caught in inner catch: " << e << endl;
            // Rethrow to handle in outer block if needed, or handle completely here
            throw; 
        }
    }
    catch (int e) {
        cout << "Caught in outer catch: " << e << endl;
    }
    return 0;
}
