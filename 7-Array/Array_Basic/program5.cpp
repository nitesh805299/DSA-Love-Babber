#include <iostream>
#include <climits>
#include <algorithm>   // std::max() aur std::min() ke liye
using namespace std;

int getMax(int num[], int n) {
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++) {

        // Method 1
        // if(num[i] > maxi) {
        //     maxi = num[i];
        // }

        // Method 2 (Short Form)
        maxi = max(maxi, num[i]);
    }

    return maxi;
}

int getMin(int num[], int n) {
    int mini = INT_MAX;

    for(int i = 0; i < n; i++) {

        // Method 1
        // if(num[i] < mini) {
        //     mini = num[i];
        // }

        // Method 2 (Short Form)
        mini = min(mini, num[i]);
    }

    return mini;
}

int main() {

    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int num[100];

    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximum Value = " << getMax(num, size) << endl;
    cout << "Minimum Value = " << getMin(num, size) << endl;

    return 0;
}