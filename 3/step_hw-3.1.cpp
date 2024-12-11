/*iffa's notes:
5% off = at least 1000
8% off = 3000 - 4999
10% off = 5000 - 9999
15% off = exceed 10000
total amount = $12,500
hw 4 - no 1*/

#include <iostream>
using namespace std;

// function to calculate discount based on the total amount
double discount(double total) {
    // calculate discount based on total amount
    if (total >= 10000) {
        return 0.15;
    } else if (total >= 5000 && total <= 9999) {
        return 0.10;
    } else if (total >= 3000 && total <= 4999) {
        return 0.08;
    } else if (total >= 1000) {
        return 0.05;
    } else {
        return 0.0;
    }
}

int main() {
    double totalAmount = 12500.0; // the given total for shipping
    /* // prompt the user to enter the total purchase amount
    cout << "Enter the total purchase amount: \n"
    cin >> totalAmount; */
    double discountRate = discount(totalAmount); // get the discount rate based on total amount
    double discountAmount = totalAmount * discountRate; // calculate discount amount
    double payableAmount = totalAmount - discountAmount; // calculate payable amount after applying the discount
    // output results
    cout << "Total Purchase Amount: $" << totalAmount << "\n" << endl;
    cout << "Discount Rate: " << (discountRate * 100) << "% \n" << endl;
    cout << "Discount Amount: $" << discountAmount << "\n" << endl;
    cout << "Payable Amount after Discount: $" << payableAmount << "\n" << endl;
    return 0;
}