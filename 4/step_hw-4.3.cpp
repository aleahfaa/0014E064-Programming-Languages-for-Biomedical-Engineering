/*iffa's notes:
check the day using 1-7
1 = monday and 7 = sunday
using if else statement
sorry my chinese is not good
抱歉我的中文不好
hw 4 - no 3 (code)*/

#include <iostream>
using namespace std;

int main() {
    int day;
    // set an interger value for the day (1 to 7)
    cout << "Enter a number (1 to 7): \n輸入一個數字 (1 到 7): \n" << endl;
    cin >> day;
    // check the value for the day
    if (day == 1) {
        cout << "Monday (週一) \n" << endl;
    } else if (day == 2) {
        cout << "Tuesday (週二) \n" << endl;
    } else if (day == 3) {
        cout << "Wednesday (週三) \n" << endl;
    } else if (day == 4) {
        cout << "Thursday (週四) \n" << endl;
    } else if (day == 5) {
        cout << "Friday (星期五) \n" << endl;
    } else if (day == 6) {
        cout << "Saturday (週六) \n" << endl;
    } else if (day == 7) {
        cout << "Sunday (星期日) \n" << endl;
    } else {
        cout << "Does not exist (不存在) \n" << endl;
    }
    return 0;
}