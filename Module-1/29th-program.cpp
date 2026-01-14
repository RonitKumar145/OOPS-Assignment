//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    cout << "Demonstrating break and continue loop control statements:" << endl;

    // normal loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            cout << "Skipping 5 using continue statement." << endl;
            continue; // Skips the rest of the loop body for the current iteration
        }

        if (i == 9) {
            cout << "Breaking at 9 using break statement." << endl;
            break; // Exits the loop immediately
        }

        cout << "Number: " << i << endl;
    }

    return 0;
}
