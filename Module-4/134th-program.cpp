//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("students_data.txt"); // Assuming file exists from previous program
    string name;
    int roll;

    if (inFile.is_open()) {
        cout << "Student Data:" << endl;
        // The extraction operator returns false when EOF is reached
        while (inFile >> name >> roll) {
            cout << name << " - " << roll << endl;
        }
        inFile.close();
    } else {
        cout << "File not found." << endl;
    }

    return 0;
}
