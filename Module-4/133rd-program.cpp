//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("students_data.txt", ios::app);
    int n, roll;
    string name;

    cout << "How many students to add? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter Name and Roll for student " << i + 1 << ": ";
        cin >> name >> roll;
        outFile << name << " " << roll << endl;
    }
    outFile.close();
    cout << "Data saved." << endl;

    return 0;
}
