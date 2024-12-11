/*iffa's notes:
int a=5; int b=3;
(a): num = (a++)+b
(b): num = (++a)+b
(c): num = (a++)+(b++)
(d): num = (++a)+(++b)
(e): a+ = a+(b++)
hw 2 - no 2*/
#include <iostream>
using namespace std;

int main() {
    // initial values
    int a = 5;
    int b = 3;
    // (a): num = (a++) + b
    int num_a = (a++) + b;
    cout << "Result of (a): " << num_a << "\n" << endl;
    // (b): num = (++a) + b
    int num_b = (++a) + b;
    cout << "Result of (b): " << num_b << "\n" << endl;
    // (c): num = (a++) + (b++)
    int num_c = (a++) + (b++);
    cout << "Result of (c): " << num_c << "\n" << endl;
    // (d): num = (++a) + (++b)
    int num_d = (++a) + (++b);
    cout << "Result of (d): " << num_d << "\n" << endl;
    // (e): a += a + (b++)
    a += a + (b++);
    cout << "Result of (e): " << a << "\n" << endl;
    return 0;
}