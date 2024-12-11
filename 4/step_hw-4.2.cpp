/*iffa's notes:
find the largest prime number less than 45
using if else statement and for loop
hw 4 - no 2 (code)*/

#include <iostream>
#include <cmath>
using namespace std;

// function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) { // 1 is not prime number
        return false;
    }
    if (n == 2 || n == 3) { // 2 and 3 are prime numbers
        return true;
    }
    // eliminate numbers divisible by 2, 3, 5, or 7
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) {
        return false;
    }
    // check divisibility for numbers greater than 7
    // the loop checks up to the sqrt of n to optimize prime check
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) { // check divisibility by i and (i + 2)
            return false;
        }
    }
    // if no divisors are found means it is a prime number
    return true;
}

// main function
int main() {
    int largestPrime = -1; // store the largest prime number found
    // loop starts at 44 and checks each number down
    for (int i = 44; i >= 2; --i) {
        if (isPrime(i)) {
            largestPrime = i; // store the prime number
            break;
        }
    }
    if (largestPrime != -1) {
        cout << largestPrime << endl;
    }
    return 0;
}