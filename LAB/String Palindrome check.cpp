#include <iostream>
#include <string>
using namespace std;

main() {
    string str;
    bool isPalindrome = true;

    // Input string from user
    cout << "Enter a string: ";
    getline(cin, str);  // allows spaces too

    int len = str.length();

    // Compare characters from both ends
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    // Output result
    if (isPalindrome)
        cout << "\"" << str << "\" is a palindrome." << endl;
    else
        cout << "\"" << str << "\" is not a palindrome." << endl;

    return 0;
}

