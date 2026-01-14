//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    double basicSalary, allowances, deductions;

public:
    void getDetails() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Allowances: ";
        cin >> allowances;
        cout << "Enter Deductions: ";
        cin >> deductions;
    }

    double calculateNetSalary() {
        return basicSalary + allowances - deductions;
    }

    void printPaySlip() {
        cout << "\n--- Pay Slip ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Allowances: " << allowances << endl;
        cout << "Deductions: " << deductions << endl;
        cout << "Net Salary: " << calculateNetSalary() << endl;
    }
};

int main() {
    Employee e;
    e.getDetails();
    e.printPaySlip();

    return 0;
}
