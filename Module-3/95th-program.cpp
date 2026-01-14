//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    void getBasicInfo() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
    }
};

class Salary : public Employee {
    float basic, hra, da, netSalary;
public:
    void getSalaryDetails() {
        cout << "Enter Basic Salary: ";
        cin >> basic;
        cout << "Enter HRA: ";
        cin >> hra;
        cout << "Enter DA: ";
        cin >> da;
    }
    void calculateNet() {
        netSalary = basic + hra + da;
    }
    void displayPaySlip() {
        cout << "\n--- Pay Slip ---" << endl;
        cout << "ID: " << id << " Name: " << name << endl;
        cout << "Basic: " << basic << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    Salary emp;
    emp.getBasicInfo();
    emp.getSalaryDetails();
    emp.calculateNet();
    emp.displayPaySlip();
    return 0;
}
