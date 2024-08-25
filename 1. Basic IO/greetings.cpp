/* This program uses 'std::cin' and 'std::cout' to get data
 * from the user and greet him/her.
 * These names come from 'console input' and 'console output'.
 */

#include <iostream>

int main() {
    int age;
    std::string name;

    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "How old are you?" << std::endl;
    std::cin >> age;

    std::cout << "Hello, " << name << "! You are " << age << " years old."
              << std::endl;
    return 0;
}
