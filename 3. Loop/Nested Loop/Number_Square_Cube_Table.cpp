#include <iostream>
using namespace std;

int main() {
    for (int y = 1; y <= 3; y++) {
        if (y == 1) cout << "Number\t";
        if (y == 2) cout << "Square\t";
        if (y == 3) cout << "Cube\t";

        for (int x = 1; x <= 10; x++) {
            if (y == 1) cout << x << "\t";
            if (y == 2) cout << x * x << "\t";
            if (y == 3) cout << x * x * x << "\t";
        }
        cout << endl;
    }
    return 0;
}
