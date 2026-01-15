//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream f("data.txt", ios::out);
    f << "A B C D E";
    f.close();
    
    f.open("data.txt", ios::in);
    f.seekg(4, ios::beg);
    char c; f >> c;
    cout << "Char at pos 4: " << c << endl;
    return 0;
}
