#include <iostream>
using namespace std;

int main() {
    float temp_f;
    float temp_c;

    cout << "Enter a temperature in fahrenheit: " << endl;
    cin >> temp_f;
    
    temp_c = (temp_f - 32) * 5 / 9;
    cout << "Your temperature in celsius is " << temp_c << endl;

    return 0;
}
