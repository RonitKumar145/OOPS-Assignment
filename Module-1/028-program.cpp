//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int n;

    cout << "Enter how many numbers to print: ";
    cin >> n;

    cout << "Printing numbers using do-while loop: ";
    // do-while loop executes the body at least once
    do {
        cout << i << " ";
        i++;
    } while (i <= n); // check condition after execution
    cout << endl;

    return 0;
}
