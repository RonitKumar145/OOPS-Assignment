//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;
    ss << "100 200";
    int a, b;
    ss >> a >> b;
    cout << "Sum: " << a+b << endl;
    return 0;
}
