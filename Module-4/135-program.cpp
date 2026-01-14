//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <sstream> // Header for stringstream
#include <string>
using namespace std;

int main() {
    string str = "100 200 300";
    stringstream ss(str);
    int num;

    cout << "Parsing string using stringstream:" << endl;
    while (ss >> num) {
        cout << "Number: " << num << endl;
    }

    // Creating string from numbers
    stringstream os;
    os << "Result: " << 50 * 2;
    cout << "Result string: " << os.str() << endl;

    return 0;
}
