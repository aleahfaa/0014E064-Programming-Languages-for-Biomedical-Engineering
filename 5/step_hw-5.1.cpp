/*iffa's notes:
write a function to calculate:
\sum_{k=1}^{10} \frac{1}{k!}
hw 5 - no 1*/

#include <iostream>
using namespace std;

// function to calculate the factorial of the number
double factorial (int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// function to calculate sum of 1/k! for k from 1 to 10 (sum of the series)
// calling the factorial function and adding it to the sum variable
double sumOfSeries() {
    double sum = 0.0;
    for (int k = 1; k <= 10; k++) {
        sum += 1.0 / factorial(k);
    }
    return sum;
}

// main function to display the result of the series calculation
int main() {
    // call sumOfSeries function and display the result
    cout << sumOfSeries() << "\n" << endl;
    return 0;
}