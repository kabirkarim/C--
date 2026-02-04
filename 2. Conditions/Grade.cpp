#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    cout << "Enter your test score (0-100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score!";
        return 0;
    }

    switch (score / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }

    cout << "Your grade is: " << grade << endl;

    return 0;
}
