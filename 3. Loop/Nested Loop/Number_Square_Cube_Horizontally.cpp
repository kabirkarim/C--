#include <iostream>
using namespace std;

int main() {
    cout << "Number\t\tSquare\t\tCube\n";

    for (int x = 1; x <= 10; x++) {
        cout << x << "\t\t";
        cout << x * x << "\t\t";
        cout << x * x * x << endl;
    }
    return 0;
}
