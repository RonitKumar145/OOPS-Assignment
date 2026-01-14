//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream dest("destination.txt");
    char ch;
    
    // Create source file if not explicitly present for demo
    ofstream temp("source.txt");
    temp << "This is content to be copied.";
    temp.close();
    // Re-open for reading
    source.open("source.txt");

    if (source.is_open() && dest.is_open()) {
        while (source.get(ch)) {
            dest.put(ch);
        }
        cout << "File copied successfully." << endl;
        source.close();
        dest.close();
    } else {
        cout << "Error opening files." << endl;
    }
    
    return 0;
}
