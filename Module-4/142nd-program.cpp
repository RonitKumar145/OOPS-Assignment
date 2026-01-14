//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Creating two dummy files for demo
    ofstream f1("fileA.txt"); f1 << "Content from File A." << endl; f1.close();
    ofstream f2("fileB.txt"); f2 << "Content from File B." << endl; f2.close();

    ifstream inFile1("fileA.txt");
    ifstream inFile2("fileB.txt");
    ofstream outFile("merged.txt");
    
    char ch;
    
    // Copy first file
    while (inFile1.get(ch)) {
        outFile.put(ch);
    }
    
    // Copy second file
    while (inFile2.get(ch)) {
        outFile.put(ch);
    }
    
    cout << "Files merged into 'merged.txt'." << endl;
    
    inFile1.close();
    inFile2.close();
    outFile.close();

    return 0;
}
