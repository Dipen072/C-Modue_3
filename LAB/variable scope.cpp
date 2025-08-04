#include <iostream>
using namespace std;

// ?? Global variable (accessible throughout the program)
int globalVar = 100;

// Function demonstrating local variable
void showLocal() {
    int localVar = 50;  // Local variable (only accessible inside this function)
    cout << "Inside showLocal() - Local Variable: " << localVar << endl;
    cout << "Inside showLocal() - Global Variable: " << globalVar << endl;
}

// Function modifying global variable
void modifyGlobal() {
    globalVar += 10;
    cout << "Inside modifyGlobal() - Global Variable after modification: " << globalVar << endl;
}

main() {
    int localVar = 25;  // Local to main
    cout << "Inside main() - Local Variable: " << localVar << endl;
    cout << "Inside main() - Global Variable: " << globalVar << endl;

    // Call functions to demonstrate scope
    showLocal();
    modifyGlobal();

    cout << "Back in main() - Global Variable is now: " << globalVar << endl;

    return 0;
}

