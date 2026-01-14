//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll: ";
        cin >> roll;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s;
    s.input();

    // Write object data to file (Text mode)
    ofstream outFile("student.txt");
    outFile << s.name << " " << s.roll << endl;
    outFile.close();

    // Read object data from file
    Student s2;
    ifstream inFile("student.txt");
    inFile >> s2.name >> s2.roll;
    inFile.close();

    cout << "Data read from file:" << endl;
    s2.display();

    return 0;
}
