//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <exception>
using namespace std;

// Defining custom exception
class MyException : public exception {
public:
    const char* what() const throw() {
        return "Custom User-Defined Exception Occurred!";
    }
};

int main() {
    try {
        throw MyException();
    }
    catch (MyException& e) {
        cout << e.what() << endl;
    }
    return 0;
}
