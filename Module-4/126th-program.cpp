//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("output.txt");
    
    if (outFile.is_open()) {
        outFile << "Hello, File Handling!" << endl;
        outFile << "This is line 2." << endl;
        cout << "Data written to 'output.txt'." << endl;
        outFile.close();
    } else {
        cout << "Unable to open file." << endl;
    }
    
    return 0;
}
