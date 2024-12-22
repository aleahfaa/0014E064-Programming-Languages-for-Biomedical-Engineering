/*iffa's notes:
sphere volume calculator
define macro to calculate the volume of sphere
define pi
radii 1 to 5
hw 6 - no 4*/

#include <iostream>
#include <iomanip>
#define PI 3.1415926 // define pi as a constant
// volume = (4/3) * PI * r^3
#define VOLUME(r) ((4.0/3.0) * PI * (r) * (r) * (r)) // define macro function
using namespace std;

int main() {
    cout << "Radius\tVolume\n" << endl;
    cout << "--------------------\n" << endl;
    // configure output formating use fix-point notating and show 2 decimal places
    cout << fixed << setprecision(2);
    // calculate the volume of spheres with radii 1 to 5
    for (int r = 1; r <= 5; r++) {
        cout << r << "\t" << VOLUME(r) << endl;
    }
    return 0;
}