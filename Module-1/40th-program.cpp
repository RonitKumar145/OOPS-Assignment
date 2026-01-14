//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    struct Student student1;

    // Input student details
    cout << "Enter name: ";
    cin >> student1.name;
    cout << "Enter roll number: ";
    cin >> student1.rollNo;
    cout << "Enter marks: ";
    cin >> student1.marks;

    // Display student details
    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Roll: " << student1.rollNo << endl;
    cout << "Marks: " << student1.marks << endl;

    return 0;
}
