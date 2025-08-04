#include <iostream>
using namespace std;

// Function to calculate area
int calculateArea(int length, int width) {
    return length * width;
}

main() {
    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    int area = calculateArea(length, width);

    cout << "Area of rectangle: " << area << endl;

    return 0;
}

