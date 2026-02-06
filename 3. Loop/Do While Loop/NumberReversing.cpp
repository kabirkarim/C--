#include <iostream>
using namespace std;

int main() {
    int value = 12345;
    int rem, rev = 0;

    do {
        rem = value % 10;
        value /= 10;
        rev = rev * 10 + rem;
    } while (value > 0);

    cout << rev << endl;

    return 0;
}
