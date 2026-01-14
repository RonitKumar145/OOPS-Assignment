//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename to open: ";
    cin >> filename;

    try {
        ifstream file(filename.c_str());
        // Configure ifstream to throw exceptions on failure
        file.exceptions(ifstream::failbit | ifstream::badbit);
        
        cout << "File opened successfully." << endl;
        file.close();
    }
    catch (ifstream::failure e) {
        cout << "Exception opening/reading file" << endl;
    }
    return 0;
}
