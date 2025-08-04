#include <iostream>
using namespace std;

main() {
    // Constant: value cannot be changed
    const float PI = 3.14159;

    // Variables of different data types
    int age = 20;
    float height = 5.9;
    double weight = 65.5;
    char grade = 'A';
    bool isStudent = true;

    // Performing operations
    age = age + 5;
    double areaOfCircle = PI * 4 * 4;  // Area of a circle with radius 4

    // Display the values
    cout << "Age after 5 years: " << age << endl;
    cout << "Height: " << height << " ft" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is a student? " << (isStudent ? "Yes" : "No") << endl;
    cout << "Area of circle with radius 4: " << areaOfCircle << endl;

    // Uncommenting the next line will cause an error because PI is a constant
    // PI = 3.14;

    return 0;
}

