#include <iostream>
using namespace std;

/*
Sample Output
Enter two integers: 4 6
Product = 24
*/

/* Function to multiply two integers */
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int result = multiply(num1, num2);
    cout << "Product = " << result << endl;

    return 0;
}
