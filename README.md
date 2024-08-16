# Number Guessing Game

This C++ project implements a simple number-guessing game where the player has to guess a secret number within a certain number of attempts. The game provides feedback to the player if their guess is too high or too low and allows the player to choose from different difficulty levels. This project is an example of basic C++ programming concepts, including loops, conditionals, random number generation, and user input handling.

## Table of Contents

- [Introduction](#introduction)
- [Components](#components)
  - [Game Flow](#game-flow)
  - [Difficulty Levels](#difficulty-levels)
  - [Feedback Mechanism](#feedback-mechanism)
- [Usage](#usage)

## Introduction

The "Guess the Number" game challenges the player to guess a randomly generated number between 1 and 100. Depending on the chosen difficulty level, the player has a limited number of guesses to find the secret number. The game continues until the player guesses correctly or runs out of attempts. The game also offers the option to play again or quit after each round.

## Components

### Game Flow

- **Initialization**: The game generates a random number between 1 and 100 at the start of each round.
- **Player Input**: The player inputs their guess, and the program provides feedback based on whether the guess is correct, too high, or too low.
- **Attempts**: The player has a limited number of guesses based on the selected difficulty level.
- **End of Game**: The game ends either when the player guesses the correct number or when the number of remaining attempts reaches zero.

### Difficulty Levels

- **Easy**: The player has 10 attempts to guess the number.
- **Medium**: The player has 7 attempts to guess the number.
- **Difficult**: The player has 5 attempts to guess the number.

### Feedback Mechanism

- **Correct Guess**: If the player's guess matches the secret number, they win the game.
- **Incorrect Guess**: The program informs the player whether the secret number is higher or lower than their guess.
- **Remaining Attempts**: The number of guesses left is displayed after each incorrect attempt.

## Usage

To use this project, follow these steps:

1. Ensure you have a C++ compiler installed on your system (e.g., GCC).
2. Clone or download this repository.
3. Navigate to the project directory in your terminal.
4. Compile the project using `g++ -o guessthenumber guessthenumber.cpp` or a similar command.
5. Run the executable `./guessthenumber` to start the application.
6. Choose the difficulty level when prompted.
7. Input your guesses according to the feedback provided.
8. Decide whether to play again or quit after each game.
