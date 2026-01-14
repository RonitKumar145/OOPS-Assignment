//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <iomanip> // Required for setw and setprecision
using namespace std;

int main() {
    double pi = 3.1415926535;
    
    cout << "Default: " << pi << endl;
    
    cout << "Set Precision (4): " << setprecision(4) << pi << endl;
    
    cout << "Set Width (10): " << setw(10) << 12345 << endl;
    cout << "Set Width (10): " << setw(10) << 12 << endl;
    
    return 0;
}
