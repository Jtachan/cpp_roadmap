# Exercise 1: Basic Input and Output

## Objective
Learn how to take user input and display it using `std::cin` and `std::cout`.

## C++ theory

### Types of variables

When defining a variable, the type of this one must be specified before its name. 
Then, the variable must be initialized (its value must be set to a known value) before it is used.

```cpp
#include <string>

int number;  // integer variable, not initialized.
std::string dayOfTheWeek = "Monday";  // string variable, initialized
```

Some of the **basic types** for variables are:

- `int`: Defines signed integers.
- `unsigned int`: Defines unsigned integers.
- `float`: A single-precision floating-point number (usually 32 bits).
- `double`: A double-precision floating-point number (usually 64 bits).
- `char`: A character type, usually 8 bits, which can represent ASCII values.
- `bool`: Represents a boolean, either 'true' or 'false'.
- `void`: Represents the absence of type.

From C++11 and onwards, there are **fixed-width integer types** using the library `<cstdint>`:

- `int8_t, int16_t, int32_t, int64_t`: Signed integers of fixed width (8, 16, 32, and 64 bits).
- `uint8_t, uint16_t, uint32_t, uint64_t`: Unsigned integers of fixed width.

There exist also **standard types**, importing the correct library.
For example `std::string` can be defined when including `<string>`.

### Using the console

To use the terminal in C++ it is necessary to include the `iostream` library.

```cpp
#include <iostream>
```

This library allows to use `std::cin` (console input) and `std::cout` (console output).
The symbols `<<` are used for printing through the console output, and `>>` to obtain data through the console input.

```cpp
int number;

std::cout << "Write a number: ";
std::cin >> number;
std::cout << "You wrote the number " << number << std::endl;
```

The manipulator `std::endl` writes the special character `\n` (new line) and flushes the buffer. 
In other words, the output is inmediately shown on the terminal.

Writing `std::endl` and `\n` are different, as `\n` does not flush the buffer and it is faster.
Try to use `std::endl` only when the output is to be shown immediately or the code is done using the console.

## Task
Write a program that:
- Asks the user to input their name.
- Asks the user to input their age.
- Outputs a message saying: "Hello, [Name]! You are [Age] years old."

## Expected Result
If the user inputs "Alice" as their name and "30" as their age, the program should output:
```commandline
Hello, Alice! You are 30 years old.
```