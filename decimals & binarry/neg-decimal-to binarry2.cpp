#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Positive number
    if(n >= 0) {

        int ans = 0;
        int i = 0;

        while(n != 0) {

            int bit = n & 1;

            ans = (bit * pow(10, i)) + ans;

            n = n >> 1;

            i++;
        }

        cout << "Binary = " << ans;
    }

    // Negative number
    else {

        int num = -n;

        int binary = 0;
        int i = 0;

        // Positive binary nikalo
        while(num != 0) {

            int bit = num & 1;

            binary = (bit * pow(10, i)) + binary;

            num = num >> 1;

            i++;
        }

        // 1's complement
        int ones = 0;
        int p = 1;

        while(binary != 0) {

            int digit = binary % 10;

            if(digit == 0)
                ones = ones + 1 * p;

            else
                ones = ones + 0 * p;

            binary = binary / 10;

            p = p * 10;
        }

        // 2's complement
        int twos = ones + 1;

        cout << "2's Complement = " << twos;
    }

    return 0;
}