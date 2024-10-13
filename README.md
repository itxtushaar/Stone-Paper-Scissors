# Rock, Paper, Scissors Game in C++

## Overview

This project is a C++ console-based implementation of the classic "Rock, Paper, Scissors" game. It allows the player to compete against the computer in an interactive and fun way. The computer makes its choice randomly, and the player's input is validated and processed to determine the winner. After each round, the player is prompted to either play again or exit the game.

## Features

1. **Randomized Computer Choice**:
   - The computer selects its move (Rock, Paper, or Scissors) randomly using the `rand()` function, which is seeded by the current time to ensure true randomness each time the game is played.

2. **Input Handling**:
   - The player's input is accepted in any case format (e.g., "rock," "ROCK," "Rock") and is converted to a consistent format using `toupper()` and `tolower()` functions to avoid case sensitivity issues.

3. **Game Logic**:
   - The game compares the player's choice with the computer's choice using a simple decision tree.
   - The outcomes are:
     - **Tie**: Both player and computer choose the same option.
     - **Player Wins**: The player’s choice beats the computer’s choice (e.g., Rock beats Scissors).
     - **Computer Wins**: The computer’s choice beats the player’s choice (e.g., Scissors beat Paper).

4. **Replay Option**:
   - After each round, the player is asked if they want to play again. If the player chooses 'y' or 'Y', the game restarts; otherwise, it exits gracefully.

5. **Simple and Clean UI**:
   - The program runs in the console with a clear and minimalistic interface that guides the user through the game.
   - Messages are displayed to indicate the player’s and computer’s choices and the result of each round.

## Code Breakdown

### 1. **Main Program Structure (`main()`)**:
   - The main game loop is encapsulated within a `do-while` loop to enable repeated gameplay if the user chooses to continue.
   - It prompts the player for their choice, calls the necessary functions to generate the computer’s choice, compares the two, and displays the result.

### 2. **Random Computer Choice (`getComputerChoice()`)**:
   - The function `getComputerChoice()` generates a random number between 0 and 2, which is then mapped to "Rock," "Paper," or "Scissors."
   - This randomness is based on `rand()`, which is seeded by `srand(time(0))` in `main()` to ensure different outcomes on each execution.

### 3. **Game Logic (`getResult()`)**:
   - The function `getResult()` compares the player's choice and the computer's choice.
   - It returns the outcome as a string: either "You win!", "Computer wins!" or "It's a tie!".

### 4. **Input Validation and Case Handling**:
   - The player’s input is processed to ensure that it matches one of the valid game choices ("Rock," "Paper," or "Scissors") regardless of case.
   - The program does not account for invalid inputs (e.g., if a user enters an incorrect value like "Rocks"), but this can be easily extended.

### 5. **Play Again Option**:
   - After the result of each game, the player is prompted with: "Do you want to play again? (y/n)". If the player enters 'y' or 'Y', the game restarts; otherwise, the program exits with a "Thanks for playing!" message.

## How to Use

### Prerequisites:
- **C++ Compiler**: Any standard C++ compiler (e.g., GCC, Clang, or MSVC) is required to compile and run the program.

### Steps to Run:
1. Clone the repository:
   ```
   git clone https://github.com/username/rock-paper-scissors-cpp.git
   ```
2. Navigate to the project directory:
   ```
   cd rock-paper-scissors-cpp
   ```
3. Compile the program:
   ```
   g++ -o rpsgame main.cpp
   ```
4. Run the program:
   ```
   ./rpsgame
   ```

### Example Output:
```
Welcome to Rock, Paper, Scissors!
Enter your choice (Rock, Paper, Scissors): Rock
Computer chose: Scissors
You win!
Do you want to play again? (y/n): y
Welcome to Rock, Paper, Scissors!
Enter your choice (Rock, Paper, Scissors): Paper
Computer chose: Rock
You win!
Do you want to play again? (y/n): n
Thanks for playing!
```

## Extending the Project

This game can be extended with several new features:
- **Input validation**: Handling invalid inputs like "Rocks" or numbers.
- **Scoring system**: Keeping track of wins, losses, and ties across multiple rounds.
- **Multiplayer support**: Adding a second player option for a player-vs-player mode.
- **Graphical Interface**: Using libraries like SFML or SDL to implement a GUI version.

## Project Structure

```
rock-paper-scissors-cpp/
│
├── main.cpp         # The main C++ source code for the game
├── README.md        # Detailed project description
└── LICENSE          # License information (optional)
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
