//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    // First Constructor (Default)
    Student() {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor called." << endl;
    }

    // Second Constructor (Parameterized)
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Parameterized Constructor called." << endl;
    }
};

int main() {
    // Calls default constructor
    Student s1;
    cout << "Student 1: " << s1.name << " (" << s1.id << ")" << endl;

    // Calls parameterized constructor
    Student s2(101, "Ronit");
    cout << "Student 2: " << s2.name << " (" << s2.id << ")" << endl;

    return 0;
}
