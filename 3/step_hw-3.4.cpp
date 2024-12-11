/*iffa's notes:
looping program to produces a diagram
hw 4 - no 4*/

#include <iostream>
using namespace std;

int main() {
    int maxRows = 5; // number of rows
    // loop to iterate through numbers from 1 to 5
    for (int i = 1; i <= maxRows; i++) {
        int numCount = 2 * i - 1; // number of characters to print
        // print leading spaces for center alignment
        for (int space = 1; space <= maxRows - i; space++) {
            cout << " ";
        }
        // inner loop to print the number i, numCount times
        for (int j = 1; j <= numCount; j++) {
            cout << i;
        }
        //print a newline character after each row
        cout << endl;
    }
    return 0;
}