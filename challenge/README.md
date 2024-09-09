# Fix My Code Challenge

## Overview
In this project, we will fix existing code in various programming languages. The goal is not to rewrite the code but to identify and fix the issues in the given implementations. This is a valuable exercise to improve debugging skills and understand code written by others.

Each task will focus on a different programming language, and our job is to fix the code to work as expected.

## Requirements
- All files will be compiled on **Ubuntu 20.04 LTS**.
- Allowed editors: `vi`, `vim`, `emacs`.
- The code should not be entirely rewritten; only necessary fixes should be made.
- A **README.md** file is mandatory at the root of the project.

## Tasks

### Task 0: FizzBuzz (Python)
- **Issue**: The FizzBuzz implementation prints "Fizz" instead of "FizzBuzz" for multiples of 15.
- **Fix**: Ensure that multiples of both 3 and 5 print "FizzBuzz".

**File**: `0-fizzbuzz.py`

### Task 1: Print Square (JavaScript)
- **Issue**: The script does not print a square of the correct size based on the input argument.
- **Fix**: Ensure the script properly handles dynamic sizing and prints a square of the correct dimensions.

**File**: `1-print_square.js`

### Task 2: Sort (Ruby)
- **Issue**: The Ruby script is not sorting arguments correctly.
- **Fix**: Ensure the script sorts numeric and string arguments in the correct order.

**File**: `2-sort.rb`

### Task 3: User Password (Python)
- **Issue**: The `is_valid_password` method is not correctly validating the user’s password.
- **Fix**: Adjust the logic to correctly verify passwords.

**File**: `3-user.py`

### Task 4: Double Linked List (C)
- **Issue**: The double linked list implementation has issues when deleting nodes.
- **Fix**: Ensure the node deletion operation works as expected.

**File**: `4-delete_dnodeint/`

## How to Run

Each task file can be run individually from the command line. For example:

- **Task 0 (FizzBuzz)**:
  Run `python3 0-fizzbuzz.py` or `./0-fizzbuzz.py`.

- **Task 1 (Print Square)**:
  Run `./1-print_square.js <size>` where `<size>` is the size of the square.

- **Task 2 (Sort)**:
  Run `ruby 2-sort.rb` followed by a list of arguments to sort.

- **Task 3 (User Password)**:
  Run `python3 3-user.py` or `./3-user.py`.

- **Task 4 (Double Linked List)**:
  Compile the code using `gcc`, then run the resulting executable.
