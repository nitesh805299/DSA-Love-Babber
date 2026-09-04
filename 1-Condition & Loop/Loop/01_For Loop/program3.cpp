#include<iostream>
using namespace std;

int main() {
    int n;
    // sum of n number
    
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum = " << sum;

    return 0;
}