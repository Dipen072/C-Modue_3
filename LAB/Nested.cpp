#include <iostream>
using namespace std;

main() {
    int rows;

    // Get number of rows from user
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}

