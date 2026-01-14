//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    // Check marks and assign grade
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        // executes if marks are between 80 and 89
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        // executes if marks are between 70 and 79
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        // executes if marks are between 60 and 69
        cout << "Grade: D" << endl;
    } else {
        // executes if marks are below 60
        cout << "Grade: F" << endl;
    }

    return 0;
}
