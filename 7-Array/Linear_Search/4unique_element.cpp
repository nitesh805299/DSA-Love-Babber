#include <iostream>
using namespace std;

int uniquElement(int arr[], int size) {
    int ans = 0;

    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main() {

    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int num[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    int unique = uniquElement(num, size);

    cout << "Unique Element is: " << unique << endl;

    return 0;
}