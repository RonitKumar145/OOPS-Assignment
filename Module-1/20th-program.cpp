//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    // Using ternary operator to check positivity
    string result = (num > 0) ? "positive" : (num < 0) ? "negative" : "zero";

    cout << num << " = " << result << endl;

    return 0;
}