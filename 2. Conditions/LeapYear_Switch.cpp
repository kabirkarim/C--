#include <iostream>
using namespace std;

int main() {
    int year, isLeap;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        isLeap = 1;
    else
        isLeap = 0;

    switch (isLeap) {
        case 1:
            cout << year << " is a Leap Year";
            break;
        case 0:
            cout << year << " is NOT a Leap Year";
            break;
    }

    return 0;
}
