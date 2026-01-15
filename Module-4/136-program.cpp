//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int x = 12345;
    ofstream out("bin.dat", ios::binary);
    out.write((char*)&x, sizeof(x));
    out.close();
    
    int y;
    ifstream in("bin.dat", ios::binary);
    in.read((char*)&y, sizeof(y));
    cout << "Read: " << y << endl;
    return 0;
}
