/*iffa's notes:
area = (upper + base) * height / 2
else if to check whether it is integer or double
return type should be double
input can be integer or double
hw 6 - no 2*/

#include <iostream>
using namespace std;

// check if the value is an integer
bool isInteger(double value) {
    return value == static_cast<int>(value);
}

// integer upper, base, and height
double trapezoid(int upper, int base, int height) {
    return static_cast<double>(upper + base) * height / 2.0;
}

// integer upper and base; double height
double trapezoid(int upper, int base, double height) {
    return static_cast<double>(upper + base) * height / 2.0;
}

// integer upper and height; double base
double trapezoid(int upper, double base, int height) {
    return (static_cast<double>(upper) + base) * height / 2.0;
}

// integer upper; double base and height
double trapezoid(int upper, double base, double height) {
    return (static_cast<double>(upper) + base) * height / 2.0;
}

// double upper; integer base and height
double trapezoid(double upper, int base, int height) {
    return (upper + static_cast<double>(base)) * height / 2.0;
}

// double upper and height; integer base
double trapezoid(double upper, int base, double height) {
    return (upper + static_cast<double>(base)) * height / 2.0;
}

// double upper and base; integer height
double trapezoid(double upper, double base, int height) {
    return (upper + base) * height / 2.0;
}

// double upper, base, and height
double trapezoid(double upper, double base, double height) {
    return (upper + base) * height / 2.0;
}

int main() {
    double upper, base, height;
    cout << "Upper length?" << endl;
    cin >> upper;
    cout << "\nBase lenght?" << endl;
    cin >> base;
    cout << "\nHeight?" << endl;
    cin >> height;
    // check types of inputs
    // determine the appropriate overloaded trapezoid function to call
    if (isInteger(upper)) {
        if (isInteger(base)) {
            if (isInteger(height)) {
                cout << "\nArea: " << trapezoid(static_cast<int>(upper), static_cast<int>(base), static_cast<int>(height)) << "\n" << endl;
            } else {
                cout << "\nArea: " << trapezoid(static_cast<int>(upper), static_cast<int>(base), height) << "\n" << endl;
            }
        } else {
            if (isInteger(height)) {
                cout << "\nArea: " << trapezoid(static_cast<int>(upper), base, static_cast<int>(height)) << "\n" << endl;
            } else {
                cout << "\nArea: " << trapezoid(static_cast<int>(upper), base, height) << "\n" << endl;
            }
        }
    } else {
        if (isInteger(base)) {
            if (isInteger(height)) {
                cout << "\nArea: " << trapezoid(upper, static_cast<int>(base), static_cast<int>(height)) << "\n" << endl;
            } else {
                cout << "\nArea: " << trapezoid(upper, static_cast<int>(base), height) << "\n" << endl;
            }
        } else {
            if (isInteger(height)) {
                cout << "\nArea: " << trapezoid(upper, base, static_cast<int>(height)) << "\n" << endl;
            } else {
                cout << "\nArea: " << trapezoid(upper, base, height) << "\n" << endl;
            }
        }
    }
    return 0;
}