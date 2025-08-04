#include <iostream>
using namespace std;

main() {
    // Implicit Type Conversion (done automatically by the compiler)
    int intVal = 10;
    float floatVal = intVal;  // int to float (implicit)
    
    cout << "Implicit Conversion:" << endl;
    cout << "Integer value: " << intVal << endl;
    cout << "Float value (from int): " << floatVal << endl;

    // Explicit Type Conversion (using type casting)
    float price = 99.99;
    int intPrice = (int)price;  // float to int (explicit)

    cout << "\nExplicit Conversion:" << endl;
    cout << "Original float price: " << price << endl;
    cout << "Converted int price: " << intPrice << endl;

    // Another example: char to int and vice versa
    char ch = 'A';
    int asciiValue = (int)ch;  // Explicit: char to int
    char newChar = (char)(asciiValue + 1);  // Explicit: int to char

    cout << "\nCharacter Conversion:" << endl;
    cout << "Character: " << ch << ", ASCII: " << asciiValue << endl;
    cout << "Next character: " << newChar << endl;

    return 0;
}

