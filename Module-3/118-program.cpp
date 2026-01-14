//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// Aggregation: Teacher is associated with Department.
// But Teacher can exist independently of Department.

class Teacher {
public:
    string name;
    Teacher(string n) : name(n) {}
};

class Department {
private:
    string deptName;
    Teacher* teacher; // Aggregation: Department HAS-A reference to Teacher

public:
    Department(string name, Teacher* t) {
        deptName = name;
        teacher = t;
    }

    void display() {
        cout << "Department: " << deptName << endl;
        cout << "Teacher: " << teacher->name << endl;
    }
};

int main() {
    // Teacher created independently
    Teacher t1("Dr. Sharma");

    // Department associated with Teacher
    Department d1("Computer Science", &t1);

    d1.display();

    // If d1 is destroyed, t1 still exists
    cout << "Teacher " << t1.name << " still exists." << endl;

    return 0;
}
