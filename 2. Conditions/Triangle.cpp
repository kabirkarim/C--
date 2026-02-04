#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter three angles: ";
    cin >> a >> b >> c;

    if (a + b + c == 180) {
        if (a == b && b == c)
            cout << "Equilateral Triangle";
        else if (a == b || b == c || a == c)
            cout << "Isosceles Triangle";
        else if (a == 90 || b == 90 || c == 90)
            cout << "Right Triangle";
        else
            cout << "Scalene Triangle";
    }
    else {
        cout << "Not a Triangle";
    }

    return 0;
}
