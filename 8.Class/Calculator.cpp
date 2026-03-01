#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) { return a + b; }
    int sub(int a, int b) { return a - b; }
    int mul(int a, int b) { return a * b; }
    float div(float a, float b) { return a / b; }
};

int main() {
    Calculator c;
    cout << "Add: " << c.add(10, 5) << endl;
    cout << "Sub: " << c.sub(10, 5) << endl;
    cout << "Mul: " << c.mul(10, 5) << endl;
    cout << "Div: " << c.div(10, 5) << endl;
}