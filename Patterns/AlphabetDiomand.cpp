#include <iostream>
using namespace std;

int main() {
    int asteriks = 1, middle = 1;
    int values_in_row = (7 / 2) + 1;
    char ch = 'A';
    
    for (int count = 0; count < 7; count++) {
        for (int j = 0; j < values_in_row; j++) {
            if (j < values_in_row - asteriks)
                cout << " ";
            else
                cout << ch++;
        }

        if (middle < 7) {
            asteriks += 2;
            middle += 2;
            values_in_row++;
        } else {
            values_in_row--;
            asteriks -= 2;
        }
        cout << endl;
    }
    return 0;
}


/*
Output
    A
   BCD
  EFGHI
 JKLMNOP
  QRSTU
   VWX
    Y
*/