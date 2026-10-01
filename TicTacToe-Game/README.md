# TicTacToe-C

A simple terminal-based TicTacToe game made in C as a beginner practice

## How to Compile

**Linux / Mac:**
```bash
make
```

**Windows (with MinGW):**
```bash
mingw32-make
```

This will create a `tictactoe` exe file in the project root folder that you can run normally.

## How to Run and Play the game

**Linux / Mac:**
```bash
./tictactoe  
```
**Windows:**
```bash
tictactoe.exe
```


- By default, you play as `X`, the AI plays as `O` (You can easily change it in `CONSTANTS.H`)
- On your turn, enter a row and column number (1-3) separated by a space
- Example: `1 3` places your symbol in row 1, column 3

```
ENTER THE SLOT INDEX(1-3) YOU WANNA PUT YOUR SYMBOL IN: 2 2
     1   2   3
 1 | X |   |   |
 2 |   | X |   |
 3 |   |   | O |
```

First to get 3 in a row (horizontally, vertically, or diagonally) wins. If there is no more space left, then the game ends with a Draw.

## Project Structure

```
TicTacToe-C/
├── Makefile
└── src/
    ├── main.c       # Game loop
    ├── board.c/h    # Board logic, win detection
    ├── utils.c/h    # Utility functions (wait, clear console)
    └── macros.h     # Constants (player characters)
```

## Planned Features

- **Minimax algorithm** — currently the program finds the first free slot and puts a character there. Minimax will make it significantly and more fun
- **Difficulty selection** — choose between Easy (Find the first free slot) and Hard (Minimax algorithm) at the start of the game
