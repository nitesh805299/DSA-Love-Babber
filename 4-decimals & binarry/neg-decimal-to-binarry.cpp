#include<iostream>
#include<bitset>
using namespace std;

int main() {

    int n;
    cin >> n;

    bitset<32> binary(n);

    cout << binary;

    return 0;
}