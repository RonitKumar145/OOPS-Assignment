//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    char inputString[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(inputString, 100);

    // Loop through the character array until null character is found
    while (inputString[length] != '\0') {
        length++;
    }

    cout << "Length of the string is: " << length << endl;

    return 0;
}
