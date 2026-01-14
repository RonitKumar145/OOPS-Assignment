//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Truncate mode: Deletes existing content
    ofstream file1("mode_test.txt", ios::trunc);
    file1 << "Truncated content." << endl;
    file1.close();

    // Append mode: Adds to end
    ofstream file2("mode_test.txt", ios::app);
    file2 << "Appended content." << endl;
    file2.close();

    cout << "File operations with modes completed." << endl;
    
    return 0;
}
