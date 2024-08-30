# Exercise 6: Robust User Input with Error Handling
## Objective
Learn how to handle errors gracefully, particularly when dealing with user input.

## Task

- Prompt the user to enter an integer between 1 and 100.
- Validate the input:
  - If the user enters something that isn’t an integer, display an error message and prompt them to try again.
  - If the user enters an integer outside the valid range (1-100), display an error message and prompt them to try again.
- Once a valid input is received, display a confirmation message.

## Expected Result
The program should continue to prompt the user until they provide a valid integer within the specified range.
Display a confirmation message once the correct input is provided.

Example interaction:
```commandline
Enter an integer between 1 and 100: 
abc
Invalid input. Please enter an integer between 1 and 100: 
150
Input out of range. Please enter an integer between 1 and 100: 
50
Thank you! You entered 50.
```