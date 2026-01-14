//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create an output file stream
    ofstream outFile("example.txt");
    
    if (outFile.is_open()) {
        cout << "File 'example.txt' created successfully." << endl;
        outFile.close();
    } else {
        cout << "Error creating file." << endl;
    }
    
    return 0;
}
