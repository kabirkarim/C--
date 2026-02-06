#include <iostream>
#include <string>
using namespace std;


int main() {
    string str;
    int length = 0;

    cout << "Enter string: ";
    getline(cin, str);

    for (char c : str)
        length++;

    cout << "Length = " << length << endl;
    return 0;
}
