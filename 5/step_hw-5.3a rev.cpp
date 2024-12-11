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
hw 5 - no 3 (recursive) rev*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> memo(50, -1); // initialize memo with sufficient size and value -1

int fib(int n) {
    if (memo[n] != -1) { //if it has been calculated, return the value from memo
        return memo[n];
    }
    if (n == 1 || n == 2) {
        return memo[n] = 1; // store the result in memo
    }
    memo[n] = fib(n - 1) + fib(n - 2); // store the result of the calculation in memo
    return memo[n];
}

int main() {
    int n = 48;
    cout << fib(n) << endl;
    return 0;
}

/*this approach is inefficient because many redundant calculations*/