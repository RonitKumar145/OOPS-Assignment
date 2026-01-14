//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns (max 10): ";
    cin >> rows >> cols;

    int matrix1[10][10], matrix2[10][10], sumMatrix[10][10];

    // Input first matrix
    cout << "Enter elements of 1st matrix:" << endl;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> matrix1[i][j];

    // Input second matrix
    cout << "Enter elements of 2nd matrix:" << endl;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> matrix2[i][j];

    // Addition logic: sum relevant elements
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];

    // Display result matrix
    cout << "Sum of matrices:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            cout << sumMatrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
