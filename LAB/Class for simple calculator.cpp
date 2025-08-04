#include <iostream>
using namespace std;

// Calculator class definition
class Calculator {
public:
    // Function to add two numbers
    float add(float a, float b) {
        return a + b;
    }

    // Function to subtract two numbers
    float subtract(float a, float b) {
        return a - b;
    }

    // Function to multiply two numbers
    float multiply(float a, float b) {
        return a * b;
    }

    // Function to divide two numbers
    float divide(float a, float b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

main() {
    Calculator calc;  // Create an object of Calculator

    float num1, num2;
    char op;

    // Get user input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Use object to perform calculation
    switch (op) {
        case '+':
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}

