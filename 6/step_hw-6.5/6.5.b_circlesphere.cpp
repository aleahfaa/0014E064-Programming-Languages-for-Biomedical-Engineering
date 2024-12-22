/*iffa's notes:
calculate the circumference of circle
calculate the volume of sphere
use header file "head_math.h"
hw 6 - no 5b*/

#include <iostream>
#include "head_math.h" // custom header file
using namespace std;

int main() {
    // float r;
    double r;
    cout << "Radius: " << endl;
    cin >> r;
    // calculate the circumference of circle
    // float circle_circumference = PERIPHERY(r);
    double circle_circumference = PERIPHERY(r);
    // calculate the volume of sphere
    // float sphere_volume - VOLUME(r);
    double sphere_volume = VOLUME(r);
    // display results
    cout << "\nCircumference of circle: " << circle_circumference << "\n" << endl;
    cout << "Volume of sphere: " << sphere_volume << "\n" << endl;
    return 0; 
}