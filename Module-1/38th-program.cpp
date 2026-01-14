//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    char sourceString[100], destinationString[100];
    int i;

    cout << "Enter source string: ";
    cin.getline(sourceString, 100);

    // Copying sourceString to destinationString manually character by character
    for(i = 0; sourceString[i] != '\0'; ++i) {
        destinationString[i] = sourceString[i];
    }

    destinationString[i] = '\0'; // Add null terminator to end of destination string

    cout << "Source String: " << sourceString << endl;
    cout << "Destination String (copied): " << destinationString << endl;

    return 0;
}
