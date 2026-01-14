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
    ofstream outFile("students.dat", ios::binary | ios::app);
    
    cout << "Enter Roll: "; cin >> s.roll;
    cout << "Enter Name: "; cin >> s.name;
    
    outFile.write((char*)&s, sizeof(s));
    outFile.close();
    cout << "Record added to binary file." << endl;

    ifstream inFile("students.dat", ios::binary);
    cout << "\nRetrieving Records:" << endl;
    while (inFile.read((char*)&s, sizeof(s))) {
        cout << "Roll: " << s.roll << ", Name: " << s.name << endl;
    }
    inFile.close();

    return 0;
}
