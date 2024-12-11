/*iffa's notes:
80 - 100 = A grade
60 - 79 = B grade
59 = C grade
hw 4 - no 2*/

#include <iostream>
using namespace std;

// function to determine the grade based on the score
char determineGrade(int score) {
    if (score >= 80 && score <= 100) {
        return 'A';
    } else if (score >= 60 && score <= 79) {
        return 'B';
    } else if (score == 59) {
        return 'C';
    }
}

int main() {
    int score;
    cout << "Enter the score: \n";
    cin >> score;
    // call the determineGrade function to get the grade based on the score
    char grade = determineGrade(score);
    // output the grade
    cout << "The grade is " << grade << "\n" << endl;
    return 0;
}