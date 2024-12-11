/*iffa's notes:
float f -> f^2 (f * f)
hw 1 - no 3*/

#include <iostream>
using namespace std;

int main() {
    // declare a floating-point variable
    float f;
    // ask the user to input a floating-point number
    cout << "Enter a floating-point number: \n";
    cin >> f;
    // output the square of the input number
    cout << "The square of " << f << " is " << f * f << endl;
    return 0;
}