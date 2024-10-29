# Index

- [Exercise](#exercise-8-file-io-operations)
    - [Objective](#objective)
    - [Task](#task)
    - [Hints](#hints)
    - [Expected result](#expected-result)
- [C++ theory](#c-theory)

# Exercise 8: File I/O Operations
## Objective
Practice reading from and writing to files in C++. This exercise will help you understand how to handle file streams, manage file input/output, and incorporate error handling.

## Tasks

- Create a Text File: Manually create a text file named "data.txt" in the same directory as your C++ program. Add the follwing numbers in the file:

```commandline
42
67
89
23
```

- Read from the File:  Write a C++ program that reads the integers from data.txt, one by one.
- Calculate the Sum: As you read each integer from the file, calculate their sum and display the result after all numbers have been read.
- Write the Result to Another File: Write the sum of the integers into a new file named "result.txt".
- Error Handling: Implement error handling to check if the files can be opened successfully. If a file can't be opened, display an appropriate error message.

## Hints

- File Reading: Use `std::ifstream` for reading from a file.
- File Writing: Use `std::ofstream` for writing to a file.
- Loops: You'll likely use a loop to read the numbers from the file.
- Error Handling: Check if the file stream is in a good state before proceeding with reading or writing operations.


## Expected Result
The program should print each number from data.txt to the console, display the sum, and write the sum to result.txt.

# C++ theory
