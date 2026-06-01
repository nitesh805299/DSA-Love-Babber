#include<iostream>
using namespace std;

// WAP to find a prime number using while loop

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n <= 1) {
        cout << "The number is not prime";
    }
    else {

        int i = 2;
        bool prime = true;

        while(i < n) {

            if(n % i == 0) {
                prime = false;
                break;
            }

            i++;
        }

        if(prime) {
            cout << "The number is prime";
        }
        else {
            cout << "The number is not prime";
        }
    }

    return 0;
}