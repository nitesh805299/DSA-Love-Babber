#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[], int n) {

    int freq[100];
    int freqSize = 0;

    for (int i = 0; i < n; i++) {

        // Check if current element was already processed
        bool alreadyCounted = false;

        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                alreadyCounted = true;
                break;
            }
        }

        if (alreadyCounted)
            continue;

        // Count frequency
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Check if frequency already exists
        for (int x = 0; x < freqSize; x++) {
            if (freq[x] == count) {
                return false;
            }
        }

        freq[freqSize] = count;
        freqSize++;
    }

    return true;
}

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (uniqueOccurrences(arr, n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}