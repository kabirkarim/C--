#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt", ios::binary);
    ofstream dest("destination.txt", ios::binary);

    dest << source.rdbuf();

    cout << "File copied successfully." << endl;
    return 0;
}