/* This program looks onto the if-else block logic. */

#include <iostream>

using namespace std;

int main() {
    int grade;

    // It is assumed the given number is always valid:
    cout << "Enter your grade mark (number among 0 and 100): ";
    cin >> grade;

    if (grade >= 90) {
        cout << "Your grade is A" << endl;
    } else if (grade >= 80) {
        cout << "Your grade is B" << endl;
    } else if (grade >= 70) {
        cout << "Your grade is C" << endl;
    } else if (grade >= 60) {
        cout << "Your grade is D" << endl;
    } else if (grade >= 50) {
        cout << "Your grade is E" << endl;
    } else {
        cout << "Your grade is F" << endl;
    }
    return 0;
}
