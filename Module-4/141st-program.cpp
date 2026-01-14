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
    int deleteRoll;
    bool found = false;

    cout << "Enter Roll Number to delete: ";
    cin >> deleteRoll;

    ifstream inFile("students.dat", ios::binary);
    ofstream outFile("temp.dat", ios::binary);

    if (!inFile) {
        cout << "File not found!" << endl;
        return 0;
    }

    while (inFile.read((char*)&s, sizeof(s))) {
        if (s.roll == deleteRoll) {
            found = true;
            cout << "Record with Roll " << s.roll << " deleted." << endl;
        } else {
            // Write only records that DO NOT match
            outFile.write((char*)&s, sizeof(s));
        }
    }
    inFile.close();
    outFile.close();

    // Replace original file with updated temp file
    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (!found) cout << "Record not found." << endl;

    return 0;
}
