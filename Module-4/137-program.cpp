//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

struct Data {
    int id;
    double value;
};

int main() {
    Data d1 = {101, 99.5};
    
    // Write binary
    ofstream outFile("binary.dat", ios::binary);
    outFile.write((char*)&d1, sizeof(d1));
    outFile.close();
    
    // Read binary
    Data d2;
    ifstream inFile("binary.dat", ios::binary);
    inFile.read((char*)&d2, sizeof(d2));
    inFile.close();
    
    cout << "Read from binary: ID=" << d2.id << ", Value=" << d2.value << endl;
    
    return 0;
}
