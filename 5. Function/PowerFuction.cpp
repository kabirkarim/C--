#include <iostream>
using namespace std;

/*
Sample Output
Enter base: 2
Enter exponent: 5
Result = 32
*/

/* Function to calculate power */
int power(int base, int exponent) {
    int result = 1;

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    int result = power(base, exponent);
    cout << "Result = " << result << endl;

    return 0;
}
