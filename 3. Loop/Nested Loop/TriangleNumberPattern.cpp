#include <iostream>
using namespace std;

int main() {
    int height = 6, num = 1;

    for (int x = 1; x <= height; x++) {
        for (int y = 1; y <= x; y++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
