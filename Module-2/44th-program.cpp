//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    // Method to read employee details
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Method to display employee details
    void putDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    
    emp.getDetails(); // Read input
    emp.putDetails(); // Display output

    return 0;
}
