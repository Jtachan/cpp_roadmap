Exercise: Statistical Analysis of Numbers
In this exercise, you'll write a program that reads a list of numbers from a file, stores them in a vector, and then calculates and outputs the following statistics:

Mean (Average)
Median
Mode
Steps:
Reading the Numbers:

Read all the numbers from a file into a std::vector<int>.
Ensure the file exists and is not empty.
Handle any potential errors (e.g., non-numeric data).
Calculating the Statistics:

Mean: Calculate the average of the numbers.
Median: Find the middle value when the numbers are sorted. If there’s an even number of values, the median is the average of the two middle numbers.
Mode: Identify the number that appears most frequently. If there is a tie for the most frequent number, return all of them.
Output the Results:

Display the mean, median, and mode(s) to the user.
Steps to Complete the Exercise:
Set Up Your Program:

Create a main() function where you will handle the overall logic of your program.
Create functions for reading numbers from a file, calculating the mean, median, and mode, and displaying the results.
Reading Numbers from a File:

Implement a function std::vector<int> read_numbers(const std::string& filename) to read numbers from the file and store them in a std::vector<int>.
Calculating Mean:

Implement a function double calculate_mean(const std::vector<int>& numbers) to calculate and return the mean of the numbers.
Calculating Median:

Implement a function double calculate_median(std::vector<int>& numbers) to calculate and return the median. Remember to sort the vector first.
Calculating Mode:

Implement a function std::vector<int> calculate_mode(const std::vector<int>& numbers) to calculate and return the mode(s) as a vector. Use a map or an unordered map to count occurrences of each number.
Output the Results:

Use std::cout to display the mean, median, and mode(s) in a user-friendly format.