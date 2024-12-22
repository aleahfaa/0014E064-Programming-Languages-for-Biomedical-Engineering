/*iffa's notes:
calculate the trapezoid area
use header file "head_math.h"
hw 6 - no 5a*/

#include <iostream>
#include "head_math.h" // custom header file
using namespace std;

int main() {
    // float ub, lb, h;
    double ub, lb, h;
    // get the input
    cout << "Upper base of trapezoid: " << endl;
    cin >> ub;
    cout << "\nLower base of trapezoid: " << endl;
    cin >> lb;
    cout << "\nHeight of trapezoid: " << endl;
    cin >> h;
    // calculate the area
    // float area = trapezoid(ub, lb, h);
    double area = TRAPEZOID(ub, lb, h);
    // display result
    cout << "\nArea of trapezoid: " << area << "\n" << endl;
    return 0;
}