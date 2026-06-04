#include <iostream>
using namespace std;

// 1 -> prime number
// 0 -> not prime number

bool isPrime(int n){

    if(n <= 1){
        return false;
    }

    // divide हो गया तो not prime
    for(int i = 2; i < n; i++){

        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main(){

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    if(isPrime(n)){
        cout << n << " is a prime number";
    }
    else{
        cout << n << " is not a prime number";
    }

    return 0;
}