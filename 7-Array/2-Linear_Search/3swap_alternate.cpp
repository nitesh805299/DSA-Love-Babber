#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size; i += 2) {
        if (i + 1 < size) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main() {
    int even[8] = {4, 5, 3, 7, 1, 7, 2, 9};
    int odd[7] = {4, 6, 8, 9, 2, 5, 7};

    cout << "Before swapping even array: ";
    for (int i = 0; i < 8; i++) {
        cout << even[i] << " ";
    }
    cout << endl;

    swapAlternate(even, 8);

    cout << "After swapping even array: ";
    printArray(even, 8);

    cout << "Before swapping odd array: ";
    for (int i = 0; i < 7; i++) {
        cout << odd[i] << " ";
    }
    cout << endl;

    swapAlternate(odd, 7);

    cout << "After swapping odd array: ";
    printArray(odd, 7);

    return 0;
}