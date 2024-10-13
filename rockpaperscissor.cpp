#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

string getComputerChoice() {
    int randomChoice = rand() % 3;
    switch(randomChoice) {
        case 0: return "Rock";
        case 1: return "Paper";
        case 2: return "Scissors";
    }
    return "";
}

string getResult(string player, string computer) {
    if (player == computer) {
        return "It's a tie!";
    } else if ((player == "Rock" && computer == "Scissors") || (player == "Paper" && computer == "Rock") || (player == "Scissors" && computer == "Paper")) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    srand(time(0));
    string playerChoice;
    char playAgain;

    do {
        cout << "Welcome to Rock, Paper, Scissors!" << endl;
        cout << "Enter your choice (Rock, Paper, Scissors): ";
        cin >> playerChoice;

        playerChoice[0] = toupper(playerChoice[0]);
        for (size_t i = 1; i < playerChoice.length(); i++) {
            playerChoice[i] = tolower(playerChoice[i]);
        }

        string computerChoice = getComputerChoice();
        cout << "Computer chose: " << computerChoice << endl;
        cout << getResult(playerChoice, computerChoice) << endl;

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
