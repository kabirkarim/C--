#include <iostream>
using namespace std;

int main() {
    int space = 4;
    int width = 5;
    
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= width; j++) {
            if (j > space)
                cout << "*";
            else
            cout << " ";
        }
        cout << endl;

        if (i > 9 / 2) {
            width--;
            space++;
        } else {
            space--;
            width++;
        }
    }
    return 0;
}


/*
Output
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/