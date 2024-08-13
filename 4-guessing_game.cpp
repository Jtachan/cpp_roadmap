/* Game where a random number among 1 and 100 is chosen.
The user has to guess the number. For every guess, the
program will anounce if the number is too high, too low
or it is the correct guess. 

This exercise practises the 'while' and 'do-while' operations.
*/

#include <iostream>
#include <cstdlib>  // For 'rand()' and 'srand()'
#include <ctime>    // For 'time()'

using namespace std;

int main() {
    /* Seed random number generator.
     * Without the seed, the random number will always be the
     * same every time the program is execured.
     */
    srand(time(0));

    // Generate random number:
    int random_number = rand() % 100 + 1;
    int user_guess;
    bool correct_guess = false;

    cout << "I have selected a number among 1 and 100 "
            "and you have to guess it." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> user_guess;

        if (user_guess == random_number) {
            cout << "Congratulations! You've guessed "
                    "the number!" << endl;
            correct_guess = true;
        } else if (user_guess < random_number) {
            cout << "Too low!" << endl;
        } else {
            cout << "Too high!" << endl;
        }
    } while (!correct_guess);
    return 0;
}
