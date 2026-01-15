//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

struct Data { int id; };

int main() {
    Data d = {101};
    ofstream f("struct.dat", ios::binary);
    f.write((char*)&d, sizeof(d));
    f.close();
    cout << "Struct Written\n";
    return 0;
}
