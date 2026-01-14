//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("merged.txt"); // using previously merged file
    ofstream oddFile("odd_lines.txt");
    ofstream evenFile("even_lines.txt");
    
    string line;
    int lineCount = 1;
    
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            if (lineCount % 2 != 0) {
                oddFile << line << endl;
            } else {
                evenFile << line << endl;
            }
            lineCount++;
        }
        cout << "File split into 'odd_lines.txt' and 'even_lines.txt'." << endl;
        
        inFile.close();
        oddFile.close();
        evenFile.close();
    } else {
        cout << "Source file not found." << endl;
    }
    
    return 0;
}
