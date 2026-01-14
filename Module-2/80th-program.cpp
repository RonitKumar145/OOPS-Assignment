//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Sample {
public:
    Sample() {
        cout << "Constructor called" << endl;
    }
    ~Sample() {
        cout << "Destructor called" << endl;
    }
    void show() {
        cout << "Inside Sample class" << endl;
    }
};

int main() {
    cout << "Creating object dynamically..." << endl;
    
    // Dynamic object creation using new
    Sample* ptr = new Sample();
    
    ptr->show();
    
    cout << "Deleting object..." << endl;
    
    // Explicit deletion using delete
    delete ptr;

    return 0;
}
