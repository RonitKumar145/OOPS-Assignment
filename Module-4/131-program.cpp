//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("test.txt", ios::out | ios::trunc);
    f << "Overwritten content";
    f.close();
    cout << "Done\n";
    return 0;
}
