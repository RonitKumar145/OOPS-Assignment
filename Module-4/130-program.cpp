//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("data.txt", ios::app);
    f << " Appended Text";
    f.close();
    cout << "Appended\n";
    return 0;
}
