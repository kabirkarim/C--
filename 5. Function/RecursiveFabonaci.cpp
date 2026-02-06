#include <iostream>
using namespace std;

/*
Sample Output
Enter number of terms: 6
0   1   1   2   3   5
*/

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << "\t";
    }

    return 0;
}
