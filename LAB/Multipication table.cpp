#include <iostream>
using namespace std;

main() {
    int number;

    // Ask the user for input
    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    // Print the multiplication table using a for loop
    cout << "\nMultiplication Table of " << number << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}

