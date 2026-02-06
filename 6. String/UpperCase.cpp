#include <iostream>
#include <string>
using namespace std;

/*
Output:
Uppercase string: HELLO
*/

int main() {
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    for (char &c : str)
        if (c >= 'a' && c <= 'z')
            c -= 32;

    cout << "Uppercase string: " << str << endl;
    return 0;
}
