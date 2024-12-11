/*iffa's notes:
char ch=‘A'; 
short s = 12;
float f=12.4f;
int i=15;
double d = 13.62;
(a): s+(f/s)+(ch*i)
(b): ch+d/(s-i)*f
(c): (s+d)/ch*(d+i)
hw 2 - no 1*/
#include <iostream>
using namespace std;

int main() {
    // declare the variables
    char ch = 'A';
    short s = 12;
    float f = 12.4f;
    int i = 15;
    double d = 13.62;
    // calculate (a): s + (f / s) + (ch * i)
    double res_a = s + (f / s) + (ch * i);
    // calculate (b): ch + d / (s = i) * f
    double res_b = ch + d / (s - i) * f;
    // calculate (c): (s + d) / ch * (d + i)
    double res_c = (s + d) / ch * (d + i);
    // output the results
    cout << "Result of (a): " << res_a << "\n" << endl;
    cout << "Result of (b): " << res_b << "\n" << endl;
    cout << "Result of (c): " << res_c << "\n" << endl;
    return 0;
}