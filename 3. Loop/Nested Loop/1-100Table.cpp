#include <iostream>
using namespace std;

int main() {
    int table = 1, limit = 10;

    for (int x = 1; x <= 10; x++) {
        for (int y = 1; y <= 10; y++) {
            for (int z = limit - 9; z <= limit; z++) {
                cout << z << " x " << table << " = " << z * table << "   ";
            }
            table++;
            cout << endl;
        }
        table = 1;
        limit += 10;
        cout << endl;
    }
    return 0;
}
