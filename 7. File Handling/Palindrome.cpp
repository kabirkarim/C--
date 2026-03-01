#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ifstream fp("data.txt");   // Open file
    string word;

    // Check if file opened successfully
    if (!fp) {
        cout << "File not found!" << endl;
        return 0;
    }

    fp >> word;   // Read word from file
    fp.close();   // Close file

    // Convert to uppercase (case insensitive check)
    for (int i = 0; i < word.length(); i++) {
        word[i] = toupper(word[i]);
    }

    int len = word.length();

    // Check Palindrome
    for (int i = 0; i < len; i++) {
        if (word[i] != word[len - i - 1]) {
            cout << "'" << word << "' is NOT a Palindrome" << endl;
            return 0;
        }
    }

    cout << "'" << word << "' is a Palindrome" << endl;

    return 0;
}