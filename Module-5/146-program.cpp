//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Inside try block." << endl;
        throw 10; // Throwing an integer
        cout << "This line will not execute." << endl;
    } 
    catch (int e) {
        cout << "Caught exception: " << e << endl;
    }
    cout << "After try-catch block." << endl;
    return 0;
}
