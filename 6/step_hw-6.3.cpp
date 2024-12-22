/*iffa's notes:
calculate triangle areas (double) with default parameters
base = 2; height = 1
calculate: triangle(); triangle(10); triangle(12,3);
area = (base * height) / 2.0
hw 6 - no 3*/

#include <iostream>
using namespace std;

double triangle(int base = 2, int height = 1) {
    // display the value of base and height
    cout << "Base: " << base << ", Height: " << height << "\n" << endl;
    // calculate the area of 
    return (base * height) / 2.0;
}

int main() {
    // default values (base = 2, height = 1)
    cout << "triangle(): " << triangle() << "\n" << endl;
    // base = 10, height = 1
    cout << "triangle(10): " << triangle(10) << "\n" << endl;
    // base = 12, height = 3
    cout << "triangle(12,3): " << triangle(12, 3) << "\n" << endl;
    return 0;
}