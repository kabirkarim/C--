#include <iostream>
using namespace std;

int main() {
    int number, reverse = 0, remainder;

    cout << "Enter a number: ";
    cin >> number;

    while (number >= 1) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    cout << reverse << endl;
    return 0;
}
