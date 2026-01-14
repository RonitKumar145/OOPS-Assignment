//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roleNo;
public:
    void getDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roleNo;
    }
};

class Marks : public Student {
protected:
    int marks1, marks2, marks3;
public:
    void getMarks() {
        cout << "Enter marks for 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }
};

class Result : public Marks {
    int total;
    float average;
public:
    void calculate() {
        total = marks1 + marks2 + marks3;
        average = total / 3.0;
    }
    void displayResult() {
        cout << "\n--- Mark Sheet ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roleNo << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {
    Result res;
    res.getDetails();
    res.getMarks();
    res.calculate();
    res.displayResult();
    return 0;
}
