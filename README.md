# Sudoku Solver

A simple Sudoku solver written in C that uses a backtracking algorithm to solve Sudoku puzzles.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [How It Works](#how-it-works)
- [Usage](#usage)
- [Compilation and Execution](#compilation-and-execution)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project is a Sudoku solver implemented in C. It reads a partially filled Sudoku grid and tries to solve it using the backtracking algorithm.

## Features

- Solves 9x9 Sudoku puzzles.
- Uses backtracking to find the solution.
- Includes a sample puzzle for testing.

## How It Works

The solver uses a backtracking algorithm to try and fill the empty cells with numbers from 1 to 9. It checks if the number can be placed in the cell without violating the Sudoku rules (no repeated numbers in any row, column, or 3x3 subgrid). If a number does not lead to a solution, it backtracks and tries the next number.

## Usage

To use the Sudoku solver, you need to compile the C program and run the executable. 

### Compilation and Execution

1. **Save the Program**: Save the code in a file named `sudoku_solver.c`.

2. **Compile the Program**:
   Open a terminal or command prompt and navigate to the directory containing `sudoku_solver.c`. Then, compile the program using `gcc`:

**###Here is an example Sudoku puzzle used in the program:**

5 3 0 | 0 7 0 | 0 0 0
6 0 0 | 1 9 5 | 0 0 0
0 9 8 | 0 0 0 | 0 6 0
---------------------
8 0 0 | 0 6 0 | 0 0 3
4 0 0 | 8 0 3 | 0 0 1
7 0 0 | 0 2 0 | 0 0 6
---------------------
0 6 0 | 0 0 0 | 2 8 0
0 0 0 | 4 1 9 | 0 0 5
0 0 0 | 0 8 0 | 0 7 9

Contributions are welcome! If you have suggestions for improvements or want to report bugs, please open an issue or submit a pull request.
