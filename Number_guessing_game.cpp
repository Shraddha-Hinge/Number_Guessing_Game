#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// Function to play the game for a given difficulty level
void playGame(int maxChoices) {
    srand(time(0));
    int secretNumber = 1 + (rand() % 100);
    int playerChoice;

    cout << "\nYou have " << maxChoices << " choices for finding the secret number between 1 and 100." << endl;

    for (int choicesLeft = maxChoices; choicesLeft > 0; --choicesLeft) {
        cout << "\n\nEnter the number: ";
        cin >> playerChoice;

        if (playerChoice == secretNumber) {
            cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
            cout << "\t\t\t Thanks for playing...." << endl;
            break;
        } else {
            cout << "Nope, " << playerChoice << " is not the right number" << endl;
            cout << (playerChoice > secretNumber ? "The secret number is smaller than the number you have chosen" : "The secret number is greater than the number you have chosen") << endl;
            cout << choicesLeft - 1 << " choices left. " << endl;
        }
    }

    cout << "The secret number was " << secretNumber << endl;
}

int main() {
    cout << "\n\t\t\tWelcome to GuessTheNumber game!" << endl;
    cout << "You have to guess a number between 1 and 100. "
            "You'll have limited choices based on the "
            "level you choose. Good Luck!"
         << endl;

    char playAgain;
    do {
        cout << "\nEnter the difficulty level: \n";
        cout << "1 for easy!\t";
        cout << "2 for medium!\t";
        cout << "3 for difficult!\t";
        cout << "0 for ending the game!\n" << endl;

        int difficultyChoice;
        cout << "Enter the number: ";
        cin >> difficultyChoice;

        switch (difficultyChoice) {
            case 1:
                playGame(10);
                break;
            case 2:
                playGame(7);
                break;
            case 3:
                playGame(5);
                break;
            case 0:
                exit(0);
            default:
                cout << "Wrong choice, Enter a valid choice to play the game! (0, 1, 2, 3)\n";
                continue;
        }

        cout << "Do you want to play again? (Enter 'p' for play again, 'q' for quit): ";
        cin >> playAgain;

    } while (playAgain == 'p');

    cout << "Thanks for playing! Goodbye.\n";

    return 0;
}

