#include <iostream>
using namespace std;

// array with function


// array function
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int thirth[15];

    for(int i = 0; i < 15; i++) {
        thirth[i] = i + 1;
    }

    printArray(thirth, 15);

    return 0;
}