//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    char name[20];
};

int main() {
    Student s;
    int searchRoll;
    bool found = false;

    cout << "Enter Roll Number to search: ";
    cin >> searchRoll;

    ifstream file("students.dat", ios::binary);
    if (!file) {
        cout << "File not found!" << endl;
        return 0;
    }

    while (file.read((char*)&s, sizeof(s))) {
        if (s.roll == searchRoll) {
            cout << "Record Found! Name: " << s.name << endl;
            found = true;
            break;
        }
    }
    file.close();

    if (!found) cout << "Record not found." << endl;

    return 0;
}
