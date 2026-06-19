#include <iostream>
using namespace std;

void intersection(int arr1[], int n, int arr2[], int m) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";

                // is element ko use ho gaya mark kar do
                arr2[j] = -1;
                break;
            }
        }
    }
}

int main() {

    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 3};

    cout << "Intersection Elements: ";

    intersection(arr1, 6, arr2, 4);

    return 0;
}