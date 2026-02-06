#include <iostream>
using namespace std;


int main() {
    int limit = 9;
    int hrz_loop_counter = 5;
    int space = 4;
    
    for (int i = 1; i <= limit; i++) {
        for (int j = 1; j <= hrz_loop_counter; j++) {
            if (j == space + 1 || j == hrz_loop_counter)
            cout << "#";
            else
            cout << " ";
        }
        
        if (i < limit / 2 + 1) {
            space--;
            hrz_loop_counter++;
        } else {
            space++;
            hrz_loop_counter--;
        }
        cout << endl;
    }
    return 0;
}
/*
Output (for width = 9)
    #
   # #
  #   #
 #     #
#       #
 #     #
  #   #
   # #
    #
*/
