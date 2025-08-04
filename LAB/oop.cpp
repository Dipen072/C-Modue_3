#include <iostream>
using namespace std;

// Rectangle class
class Rectangle {
private:
    int length;
    int width;

public:
    // Method to set values
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    // Method to calculate area
    int calculateArea() {
        return length * width;
    }
};

main() {
    Rectangle rect;
    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    rect.setDimensions(length, width);
    cout << "Area of rectangle: " << rect.calculateArea() << endl;

    return 0;
}

