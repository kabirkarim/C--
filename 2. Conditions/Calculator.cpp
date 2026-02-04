#include <iostream>
using namespace std;

int main() {
    int option, subOption;
    float value, result;

    cout << "This is a Conversion Calculator\n";
    cout << "Select Option Which Conversion Calculation You Want To Do:\n";
    cout << "1 = Length\n2 = Temperature\n";
    cout << "Choose An Option: ";
    cin >> option;

    if (option == 1) {
        cout << "Select Option To Convert The Length:\n";
        cout << "1 - Cm to M\n2 - M to Cm\n";
        cout << "Choose An Option: ";
        cin >> subOption;

        switch (subOption) {
            case 1:
                cout << "Enter the length in Cm: ";
                cin >> value;
                result = value / 100.0;
                cout << value << " cm = " << result << " m\n";
                break;

            case 2:
                cout << "Enter the length in M: ";
                cin >> value;
                result = value * 100.0;
                cout << value << " m = " << result << " cm\n";
                break;

            default:
                cout << "Invalid Input\n";
        }
    }
    else if (option == 2) {
        cout << "Select Option To Convert The Temperature:\n";
        cout << "1 - Fahrenheit to Celsius\n2 - Celsius to Fahrenheit\n";
        cout << "Choose An Option: ";
        cin >> subOption;

        switch (subOption) {
            case 1:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> value;
                result = (value - 32) * (5.0 / 9);
                cout << value << " F = " << result << " C\n";
                break;

            case 2:
                cout << "Enter temperature in Celsius: ";
                cin >> value;
                result = (value * 9.0 / 5) + 32;
                cout << value << " C = " << result << " F\n";
                break;

            default:
                cout << "Invalid Input\n";
        }
    }
    else {
        cout << "Invalid Choice!\n";
    }

    return 0;
}
