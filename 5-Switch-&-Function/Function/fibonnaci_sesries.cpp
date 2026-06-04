#include <iostream>
using namespace std;

// Function to print Fibonacci series
void fibonacci(int n){

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for(int i = 1; i <= n-2; i++){

        int next = a + b;

        cout << next << " ";

        a = b;
        b = next;
    }
}

int main(){

    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    fibonacci(n);

    return 0;
}