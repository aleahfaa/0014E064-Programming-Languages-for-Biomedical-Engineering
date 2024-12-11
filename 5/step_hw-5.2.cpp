/*iffa's notes:
calculate the total amount T based on:
- principal amount P
- monthly interest rate r
- deposit period (in months) n
formula: T=P*(1+r)^n
P, r, T -> double; n -> int
hw 5 - no 2*/

#include <iostream>
#include <cmath>
using namespace std;

// function to calculate the total amount T
double calculateT(double P, double r, int n) {
    return P * pow(1 + r, n);
}

int main() {
    double P, r, T;
    int n;
    // input
    cout << "Principal Amount (P): \n" << endl;
    cin >> P;
    cout << "Monthly Interest Rate (r): \n" << endl;
    cin >> r;
    cout << "Deposit Period (in month, n): \n" << endl;
    cin >> n;
    // call the function to calculate the total
    T = calculateT(P, r, n);
    // display the result
    cout << "Total Amount (T): " << T << "\n" << endl;
    return 0;
}