#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;
    int count = 1;

    cout << "Enter a number: ";
    cin >> n;

    while (count <= n) {
        factorial *= count;
        count++;
    }

    cout << factorial << endl;
    return 0;
}
