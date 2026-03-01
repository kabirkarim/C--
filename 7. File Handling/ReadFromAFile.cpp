#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fp("userData.txt");   // Open file
    string line;

    if (!fp) {
        cout << "Error: File not found." << endl;
        return 1;
    }

    cout << "Contents of userData.txt:\n\n";

    // Read file line by line
    while (getline(fp, line)) {
        cout << line << endl;
    }

    fp.close();
    return 0;
}