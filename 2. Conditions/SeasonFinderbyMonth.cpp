#include <iostream>
using namespace std;

int main() {
    int month, season;

    cout << "Enter month number (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid input!";
        return 0;
    }

    season = ((month - 1) / 3) + 1;

    switch (season) {
        case 1:
            cout << "Winter";
            break;
        case 2:
            cout << "Spring";
            break;
        case 3:
            cout << "Summer";
            break;
        case 4:
            cout << "Fall";
            break;
    }

    return 0;
}
