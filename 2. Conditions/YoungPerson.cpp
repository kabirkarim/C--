#include <iostream>
using namespace std;

int main() {
    int ali, hamza, basit;

    cout << "Enter Ali's age: ";
    cin >> ali;

    cout << "Enter Hamza's age: ";
    cin >> hamza;

    cout << "Enter Basit's age: ";
    cin >> basit;

    if (ali < hamza && ali < basit) {
        cout << "Ali is the youngest.";
    }
    else if (hamza < ali && hamza < basit) {
        cout << "Hamza is the youngest.";
    }
    else if (basit < ali && basit < hamza) {
        cout << "Basit is the youngest.";
    }
    else {
        cout << "Two or more have the same age.";
    }

    return 0;
}
