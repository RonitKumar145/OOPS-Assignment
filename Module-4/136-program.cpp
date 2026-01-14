//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("test_exist.txt");
    
    // Good practice: Try to open the file
    if (file.good()) {
        cout << "File 'test_exist.txt' exists." << endl;
    } else {
        cout << "File 'test_exist.txt' does not exist." << endl;
    }
    file.close();

    return 0;
}
