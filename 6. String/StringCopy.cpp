#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    
    cout << "Enter string: ";
    getline(cin, str1);

    int i;
    for (i = 0; i < str1[i]!='\0'; i++) {
        str2 += str1[i];   // copy character by character
    }

    cout << "Copied string: " << str2 << endl;
    return 0;
}

    
    /*
    Output:
    Copied string: Hello
    */