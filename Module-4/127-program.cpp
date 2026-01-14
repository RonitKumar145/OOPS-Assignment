//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("output.txt"); // Assuming output.txt exists
    string line;
    
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file. Make sure 'output.txt' exists." << endl;
    }
    
    return 0;
}
