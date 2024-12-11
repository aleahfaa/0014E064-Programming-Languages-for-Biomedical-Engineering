/*iffa's notes:
input a, b
output b - a
hw 1 - no 4*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    // prompt user to enter two integers
    cout << "Enter two integers (a and b): \n";
    cin >> a >> b;
    // calculate and output the result of b - a
    cout << "Result of b - a is: " << b - a << endl;
    return 0;
}