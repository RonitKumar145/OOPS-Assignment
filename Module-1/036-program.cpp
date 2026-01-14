//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter rows and columns for first matrix (max 10): ";
    cin >> rows1 >> cols1;
    cout << "Enter rows and columns for second matrix (max 10): ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 1;
    }

    int matrix1[10][10], matrix2[10][10], productMatrix[10][10];

    // Input first matrix
    cout << "Enter elements of matrix 1:" << endl;
    for(int i = 0; i < rows1; ++i)
        for(int j = 0; j < cols1; ++j)
            cin >> matrix1[i][j];

    // Input second matrix
    cout << "Enter elements of matrix 2:" << endl;
    for(int i = 0; i < rows2; ++i)
        for(int j = 0; j < cols2; ++j)
            cin >> matrix2[i][j];

    // Initialize result matrix to 0
    for(int i = 0; i < rows1; ++i)
        for(int j = 0; j < cols2; ++j)
            productMatrix[i][j] = 0;

    // Multiplication logic: using nested loops
    for(int i = 0; i < rows1; ++i)
        for(int j = 0; j < cols2; ++j)
            for(int k = 0; k < cols1; ++k)
                productMatrix[i][j] += matrix1[i][k] * matrix2[k][j];

    // Display result product matrix
    cout << "Output Matrix:" << endl;
    for(int i = 0; i < rows1; ++i) {
        for(int j = 0; j < cols2; ++j)
            cout << productMatrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
