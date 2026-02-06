#include <iostream>
using namespace std;

/*
Sample Output
Enter number of elements: 5
Enter 5 integers:
3 7 2 9 4
Maximum value = 9
*/

/* Function to find maximum element in array */
int findMax(int arr[], int size) {
    int maxVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int arr[100], size;

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxValue = findMax(arr, size);
    cout << "Maximum value = " << maxValue << endl;

    return 0;
}
