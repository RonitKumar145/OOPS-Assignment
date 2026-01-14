//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open in append mode
    ofstream outFile("output.txt", ios::app);
    
    if (outFile.is_open()) {
        outFile << "Appended Line." << endl;
        cout << "Data appended successfully." << endl;
        outFile.close();
    } else {
        cout << "Unable to open file." << endl;
    }
    
    return 0;
}
