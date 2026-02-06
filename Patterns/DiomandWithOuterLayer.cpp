#include <iostream>
using namespace std;

int main() {
    int start_space = 4;
    int end_space = 6;
    int middle = 1;
    
    for (int i = 0; i < 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (j > start_space && j < end_space)
            cout << "@";
            else
            cout << "~";
        }
        
        if (middle < 9) {
            start_space--;
            end_space++;
            middle += 2;
        } else {
            start_space++;
            end_space--;
        }
        cout << endl;
    }
    return 0;
}

/*
Output
~~~~@~~~~
~~~@@@~~~
~~@@@@@~~
~@@@@@@@~
@@@@@@@@@
~@@@@@@@~
~~@@@@@~~
~~~@@@~~~
~~~~@~~~~
*/
