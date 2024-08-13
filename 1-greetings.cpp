#include <iostream>
using namespace std;

/* This program uses 'cin' and 'cout' to get data
from the user and greet him/her.
These names come from 'console input' and 'console output'.
*/

int main() {
    int age;
    string name;

    cout << "What is your name?" << endl;
    cin >> name;
    cout << "How old are you?" << endl;
    cin >> age;

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}
