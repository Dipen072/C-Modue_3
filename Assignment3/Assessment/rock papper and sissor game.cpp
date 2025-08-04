#include <iostream>
#include <cstdlib>   // For srand() and rand()
#include <ctime>     // For time()
using namespace std;

class RockPaperScissors {
private:
    int userScore;
    int compScore;
    int rounds;

public:
    RockPaperScissors() {
        userScore = 0;
        compScore = 0;
    }

    // Function to play the game
    void playGame(string playerName, int totalRounds) {
        rounds = totalRounds;

        for (int round = 1; round <= rounds; round++) {
            cout << "\n--- Round " << round << " ---" << endl;
            cout << "Choose an option:\n";
            cout << "1. Rock\n2. Paper\n3. Scissors\n";
            int userChoice;
            cout << "Enter your choice (1-3): ";
            cin >> userChoice;

            // Generate computer's random choice
            srand(time(0) + round);  // Seed with time + round for more randomness
            int compChoice = (rand() % 3) + 1;

            // Display choices
            cout << playerName << " chose: " << getChoiceName(userChoice) << endl;
            cout << "Computer chose: " << getChoiceName(compChoice) << endl;

            // Determine winner
            if (userChoice == compChoice) {
                cout << "Result: It's a Draw!" << endl;
            }
            else if ((userChoice == 1 && compChoice == 3) ||
                     (userChoice == 2 && compChoice == 1) ||
                     (userChoice == 3 && compChoice == 2)) {
                cout << "Result: " << playerName << " wins this round!" << endl;
                userScore++;
            } else {
                cout << "Result: Computer wins this round!" << endl;
                compScore++;
            }
        }

        // Final Result
        cout << "\n--- Game Over ---" << endl;
        cout << playerName << "'s Score: " << userScore << endl;
        cout << "Computer's Score: " << compScore << endl;

        if (userScore > compScore)
            cout << "?? Congratulations! " << playerName << " wins the game!" << endl;
        else if (compScore > userScore)
            cout << "?? Computer wins the game. Better luck next time!" << endl;
        else
            cout << "?? The game is a draw!" << endl;
    }

    // Helper function to convert number to choice name
    string getChoiceName(int choice) {
        switch (choice) {
            case 1: return "Rock";
            case 2: return "Paper";
            case 3: return "Scissors";
            default: return "Invalid";
        }
    }
};

main() {
    string playerName;
    int rounds;

    cout << "Welcome to Rock-Paper-Scissors Game!" << endl;

    // Accept player's name
    cout << "Enter your name: ";
    getline(cin, playerName);

    // Accept number of rounds
    cout << "Enter number of rounds to play: ";
    cin >> rounds;

    // Create game object and play
    RockPaperScissors game;
    game.playGame(playerName, rounds);

    return 0;
}

