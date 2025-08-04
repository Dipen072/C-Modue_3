#include <iostream>
#include <string>  // Required for using string and getline
using namespace std;

main() {
    string name;
    int age;

    // Ask for the user's name
    cout << "Enter your name: ";
    getline(cin, name);  // Accepts full name including spaces

    // Ask for the user's age
    cout << "Enter your age: ";
    cin >> age;

    // Display a personalized greeting
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}

