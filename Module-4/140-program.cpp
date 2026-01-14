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
    int updateRoll;
    bool found = false;

    // Use fstream for both read and write capabilities
    fstream file("students.dat", ios::binary | ios::in | ios::out);

    cout << "Enter Roll Number to update: ";
    cin >> updateRoll;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.roll == updateRoll) {
            found = true;
            cout << "Current Name: " << s.name << endl;
            cout << "Enter New Name: ";
            cin >> s.name;

            // Move pointer back by one record size to overwrite
            // seekp moves the 'put' pointer
            int pos = -1 * static_cast<int>(sizeof(s));
            file.seekp(pos, ios::cur);
            
            file.write((char*)&s, sizeof(s));
            cout << "Record Updated." << endl;
            break;
        }
    }
    file.close();

    if (!found) cout << "Record not found." << endl;

    return 0;
}
