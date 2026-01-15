//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream f("rec.txt", ios::out);
    f << "101 Ronit\n102 Kumar";
    f.close();

    string s; int id;
    cout << "Enter ID: "; cin >> id; // Search logic
    cout << "Searching... (Simulated)\n";
    return 0;
}
