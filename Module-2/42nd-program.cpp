//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Student {
private:
    // Private attribute - restricted access
    int rollNumber;

public:
    // Public attribute - accessible from anywhere
    string name;

    // Public method to set the private roll number
    void setRollNumber(int r) {
        rollNumber = r;
    }

    // Public method to get the private roll number
    int getRollNumber() {
        return rollNumber;
    }
};

int main() {
    Student student1;
    
    // Accessing public member directly
    student1.name = "Ronit";
    
    // Accessing private member via public setter method
    student1.setRollNumber(48);

    cout << "Name: " << student1.name << endl;
    cout << "Roll Number (accessed via method): " << student1.getRollNumber() << endl;

    return 0;
}
