/*iffa's notes:
bmi = weight/height^2
bmi >= 18.5 && bmi < 24 = normal weight
bmi < 18.5 = underweight
bmi >= 24 = overweight
hw 4 - no 3*/

#include <iostream>
using namespace std;

// function to calculate the bmi
float calculateBMI(float height, float weight) {
    return weight / (height * height);
}

// function to determine the weight category based on the bmi
string determineCategory(float bmi) {
    if (bmi < 18.5) {
        return "Underweight";
    } else if (bmi >= 18.5 && bmi < 24) {
        return "Normal Weight";
    } else if (bmi >= 24) {
        return "Overweight";
    }
}

// main function
int main() {
    float height, weight, bmi;
    // input height and weight from the user
    cout << "Enter height (in meters): \n";
    cin >> height;
    cout << "Enter weight (in kilograms): \n";
    cin >> weight;
    // call the function to calculate bmi
    bmi = calculateBMI(height, weight);
    // output the bmi value
    cout << "BMI: " << bmi << "\n" << endl;
    // call the function to determine and print the weight category
    string category = determineCategory(bmi);
    cout << category << "\n" << endl;
    return 0;
}