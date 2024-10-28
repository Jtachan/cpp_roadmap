# Index

- [Exercise](#exercise-7-functions)
    - [Objective](#objective)
    - [Task](#task)
    - [Expected result](#expected-result)
- [C++ theory](#c-theory)

# Exercise 7: Functions
## Objective
Learn how to define, declare, and use functions in C++.

## Task

- Create a documented header (`.h`) file containing all the functions.
- Define a function named `square()` that takes an integer parameter and returns its square.
- Define a function named `greet()` that prints a simple greeting message to the console.
- Use both functions in the `main()` function to demonstrate how they work.

## Expected Result

- The `square()` function should calculate and return the square of a number.
- The `greet()` function should print a greeting message.
- The `main()` function should use these functions and display results to the console

# C++ theory

## Functions

Functions are a self-contained block of code that performs a specific task.
They allow coders to break down complex problems into smaller manageable task, improving also its readability and reuse.

Each function is composed by:

- The **return type**, which is `void` when it does not return anything.
- The **parameters**, each one with its specified type.

```cpp
int add(int a, int b) {
    return a + b;
}
```