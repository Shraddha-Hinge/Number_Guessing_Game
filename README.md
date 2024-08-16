# Tic-Tac-Toe Game

This C++ project implements a classic Tic-Tac-Toe game for two players. It provides a command-line interface where players can input their moves and play against each other. The project serves as an example of basic C++ programming concepts, including control structures, functions, arrays, and user input handling.

## Table of Contents

- [Introduction](#introduction)
- [Components](#components)
  - [Game Board](#game-board)
  - [Player Actions](#player-actions)
  - [Game Logic](#game-logic)
- [Usage](#usage)

## Introduction

The Tic-Tac-Toe game is designed for two players to take turns marking the spaces in a 3×3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game. This project demonstrates fundamental C++ concepts and provides a simple, interactive game that can be played in the terminal.

## Components

### Game Board

- **Board Representation**: The game board is represented as a 3x3 grid of characters. Each cell can hold an 'X', 'O', or remain empty.
- **Display**: The board is displayed after each move, showing the current state of the game.

### Player Actions

- **Input**: Players are prompted to enter the row and column where they want to place their mark ('X' or 'O').
- **Validation**: The program checks if the chosen cell is within the valid range and if it is empty before accepting the move.

### Game Logic

- **Win Conditions**: The game checks for a winning condition after each move, determining if any row, column, or diagonal has been completed by a player.
- **Draw Condition**: If all cells are filled and no player has won, the game declares a draw.
- **Toss**: The game includes a toss to decide which player will make the first move.

## Usage

To use this project, follow these steps:

1. Ensure you have a C++ compiler installed on your system (e.g., GCC).
2. Clone or download this repository.
3. Navigate to the project directory in your terminal.
4. Compile the project using `g++ -o tictactoe tictactoe.cpp` or similar commands.
5. Run the executable `./tictactoe` to start the application.
6. Input the names of both players when prompted.
7. Follow the on-screen instructions to play the game, taking turns to input your moves.
8. The game will declare the winner or a draw based on the gameplay.
