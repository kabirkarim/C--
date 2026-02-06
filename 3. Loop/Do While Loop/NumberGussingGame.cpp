#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int guess, count = 0;

    srand(time(0));                 // seed for random number
    int randomNumber = (rand() % 100) + 1;

    // cout << randomNumber; // (for testing)

    do {
        if (count == 0) {
            cout << "Enter a number: ";
            cin >> guess;
        }
        else {
            if (guess > randomNumber) {
                cout << "Guess Lower Number: ";
                cin >> guess;
            }
            else if (guess < randomNumber) {
                cout << "Guess Higher Number: ";
                cin >> guess;
            }
        }
        count++;
    } while (guess != randomNumber);

    cout << "Congratulations! You guessed the number in "
         << count << " attempts." << endl;

    return 0;
}
