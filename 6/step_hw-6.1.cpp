/*iffa's notes:
gcd function using reference
gcd = great common division
hw 6 - no 1*/

#include <iostream>
using namespace std;

// function to find gcd of two integers
void gcd(int& a, int& b, int& g) {
    int temp_a = a, temp_b = b;
    // using euclidean algorithm to find gcd
    while (temp_b != 0) {
        int temp = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = temp;
    }
    g = temp_a; // assigning the gcd to g
}

// initialize two integers, call gcd() function, print the result
int main() {
    // int a = x, b = y;
    int a, b, g;
    // asking for input
    cout << "First number: " << endl;
    cin >> a;
    cout << "\nSecond number: " << endl;
    cin >> b;
    gcd(a, b, g); // call gcd function
    cout << "\nThe GCD is " << g << "\n" << endl;
    return 0;
}
