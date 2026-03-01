#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fp("userData.txt", ios::app);  // Open file in append mode

    if (!fp) {
        cout << "Error opening file." << endl;
        return 1;
    }

    string name;
    int age;
    char choice;

    do {
        cout << "Enter name: ";
        getline(cin, name);   // Read full name (with spaces)

        cout << "Enter age: ";
        cin >> age;
        cin.ignore();   // Clear newline from buffer

        // Write to file
        fp << "Name: " << name << ", Age: " << age << endl;

        cout << "Do you want to add another entry? (y/n): ";
        cin >> choice;
        cin.ignore();   // Clear newline

    } while (choice == 'y' || choice == 'Y');

    fp.close();

    cout << "Data saved successfully in userData.txt" << endl;

    return 0;
}