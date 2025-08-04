#include <iostream>
using namespace std;

main() {
    const int SIZE = 100;       // Maximum array size
    int arr[SIZE];              // Declare array
    int n;                      // Actual number of elements
    int sum = 0;
    float average;

    // Input: number of elements
    cout << "Enter the number of elements (max 100): ";
    cin >> n;

    // Validate input
    if (n <= 0 || n > SIZE) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    // Input array elements
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];  // Add to sum
    }

    // Calculate average
    average = static_cast<float>(sum) / n;

    // Output results
    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

