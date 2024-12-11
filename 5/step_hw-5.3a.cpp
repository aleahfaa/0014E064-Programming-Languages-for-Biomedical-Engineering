/*iffa's notes:
fibonacci sequence
f_n =
\begin{cases}
1, & \text n = 1 \\
1, & \text n = 2 \\
f_{n-1} + f_{n-2}, & \text n \geq 3
\end{cases}
calculate the value of the 48th term
which is more efficient: using recursion or a for loop?
hw 5 - no 3 (recursive)*/

#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 48;
    cout << fib(n) << endl;
    return 0;
}

/*this approach is inefficient because many redundant calculations*/