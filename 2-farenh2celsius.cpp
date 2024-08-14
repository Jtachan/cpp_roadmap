/* Here mathematic operations are performed over a value given by the user. */

#include <iostream>

using namespace std;

int main() {
    float temp_f;
    float temp_c;

    // Without 'endl' the user writes right next to the sentence:
    cout << "Enter a temperature in fahrenheit: ";
    cin >> temp_f;

    temp_c = (temp_f - 32) * 5.0f / 9.0f;
    cout << "Your temperature in celsius is " << temp_c << endl;

    return 0;
}
