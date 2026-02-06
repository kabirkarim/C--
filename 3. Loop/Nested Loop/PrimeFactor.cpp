#include <iostream>
using namespace std;

int main() {
    int div, num = 0;

    for (int x = 2; x <= 100; x++) {
        num = x;
        div = 2;
        cout << x << ":  ";

        while (num != 1) {
            if (num % div == 0) {
                if (x == div) {
                    cout << x;
                }
                num /= div;
            } else {
                div++;
            }
        }
        cout << endl << endl;
    }
    return 0;
}
