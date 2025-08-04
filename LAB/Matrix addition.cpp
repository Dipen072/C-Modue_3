#include <iostream>
using namespace std;

main() {
    // Declare two 2x2 matrices and one result matrix
    int matrix1[2][2], matrix2[2][2], sum[2][2];

    // Input elements for first matrix
    cout << "Enter elements for the first 2x2 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Input elements for second matrix
    cout << "\nEnter elements for the second 2x2 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Add matrices and store result in 'sum'
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result
    cout << "\nResultant Matrix after Addition:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

