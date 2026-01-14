//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    // Static data member: shared by all objects
    static string companyName;

    Employee(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << id << " " << name << " " << companyName << endl;
    }
};

// Initialize static member
string Employee::companyName = "TechCorp";

int main() {
    Employee e1(101, "Ronit");
    Employee e2(102, "Amit");

    e1.display();
    e2.display();

    // Changing static member updates it for ALL objects
    Employee::companyName = "InnovateX";
    cout << "\nAfter changing company name:" << endl;
    e1.display();
    e2.display();

    return 0;
}
