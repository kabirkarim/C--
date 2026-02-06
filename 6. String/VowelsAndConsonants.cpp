#include <iostream>
#include <string>
using namespace std;

/*
Output:
Vowels = 5
Consonants = 10
*/

int main() {
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter string: ";
    getline(cin, str);

    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;

    return 0;
}
