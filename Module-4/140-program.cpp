//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream f("rec.txt", ios::in | ios::out);
    f.seekp(0);
    f << "101 Updated";
    cout << "Record Updated\n";
    return 0;
}
