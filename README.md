# Statistics Calculator Using Multiple Programming Paradigms

## Overview

This project implements a Statistics Calculator that calculates basic statistics from a list of integers.

The program calculates:

- Mean
- Median
- Mode(s)

Additional features included:

- Range calculation
- Standard deviation calculation
- Handling cases where no mode exists

The same problem was implemented using three different programming paradigms:

- C → Procedural Programming
- OCaml → Functional Programming
- Python → Object-Oriented Programming


## Files Included

Statistics-Calculator/

- stats.c
- stats.ml
- stats.py
- README.md


All three implementations are included in the same repository.


## Implementation Details


## C Implementation (Procedural Programming)

The C implementation follows a procedural programming approach.

Features:
- Uses arrays to store integer values
- Uses separate functions for mean, median, mode, range, and standard deviation
- Implements sorting and frequency counting manually
- Demonstrates step-by-step procedural execution


## OCaml Implementation (Functional Programming)

The OCaml implementation follows a functional programming approach.

Features:
- Uses immutable lists
- Uses functional operations such as fold
- Avoids mutable state
- Uses functions to process and transform data


## Python Implementation (Object-Oriented Programming)

The Python implementation follows an object-oriented programming approach.

Features:
- Uses a StatisticsCalculator class
- Stores numbers as object attributes
- Uses separate methods for each calculation
- Uses Python lists and dictionaries for data handling


## Running the Programs

The programs were tested and executed using the TutorialsPoint Online Compiler.

Website:

https://www.tutorialspoint.com/codingground.html


## Running C

1. Open the C compiler on TutorialsPoint
2. Copy the contents of stats.c
3. Run the program


## Running OCaml

1. Open the OCaml compiler on TutorialsPoint
2. Copy the contents of stats.ml
3. Run the program


## Running Python

1. Open the Python compiler on TutorialsPoint
2. Copy the contents of stats.py
3. Run the program


## Sample Data Used

[1, 1, 2, 2, 3]


## Sample Output

Mean: 1.80

Median: 2.00

Mode(s): 1 2

Range: 2

Standard Deviation: 0.75


## Comparison of Programming Paradigms


### Procedural Programming (C)

The program is organized using functions that perform specific tasks. The programmer controls the execution flow and manually handles operations such as sorting and counting.


### Functional Programming (OCaml)

The program focuses on immutable data and functional transformations. Operations are performed using functions and list processing instead of modifying variables.


### Object-Oriented Programming (Python)

The program is organized using a class that combines data and related methods. This approach improves code organization and makes the program easier to expand.


## Author

Umama Azhar
