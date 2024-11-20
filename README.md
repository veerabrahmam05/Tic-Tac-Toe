
Tic Tac Toe Game

This project is a console-based implementation of the classic Tic Tac Toe game, where a human player competes against the computer. The game is written in C++ and features a simple interface for a fun gaming experience.

Features

Interactive Gameplay: Play against a computer that makes random valid moves.
Dynamic Board Rendering: The game updates the board after every move.
Winning Logic: Detects winners or ties and ends the game accordingly.
Replayable: Enjoy multiple rounds by re-running the program.

How to Play

Run the program in a C++ compiler or terminal.

Choose your move by entering a number from 1 to 9 that corresponds to the grid position:

 1 | 2 | 3
---|---|---
 4 | 5 | 6
 7 | 8 | 9
 
Your marker (X) will be placed at the selected position.

The computer will then make its move with its marker (O).

The game continues until either:

  A player achieves three markers in a row, column, or diagonal.
        
  The game ends in a tie when all spots are filled.

Prerequisites

C++ Compiler: Ensure a C++ compiler (e.g., g++) is installed on your system.

Basic Terminal/IDE Knowledge: Ability to compile and run a C++ program.

How to Run

Clone the repository or download the code file (tictactoe.cpp).

Open a terminal or IDE, navigate to the file's directory, and compile it:

        g++ -o tictactoe tictactoe.cpp

Run the program:

        ./tictactoe

Follow the on-screen instructions to play the game.

Code Highlights

Game Logic: The program uses loops and conditional statements to manage gameplay and check for winners or ties.
Randomized Moves: The computer's moves are randomized using the rand() function.
Clean UI: The game board is dynamically updated after each move.

Contributing

Feel free to fork this repository and enhance the project with features like:
Adding difficulty levels for the computer.
Implementing a graphical user interface (GUI).
Supporting multiplayer mode.
