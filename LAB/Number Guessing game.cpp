#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

main() {
    int secretNumber, userGuess;
    
    // Seed the random number generator
    srand(time(0));
    secretNumber = rand() % 100 + 1;  // Random number between 1 and 100

    cout << "Guess the number (between 1 and 100): ";

    // Loop until the correct guess
    while (true) {
        cin >> userGuess;

        if (userGuess < 1 || userGuess > 100) {
            cout << "Please enter a number between 1 and 100." << endl;
        }
        else if (userGuess < secretNumber) {
            cout << "Too low. Try again: ";
        }
        else if (userGuess > secretNumber) {
            cout << "Too high. Try again: ";
        }
        else {
            cout << "?? Correct! You guessed the number!" << endl;
            break;  // Exit the loop
        }
    }

    return 0;
}

