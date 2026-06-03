#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;

    while(i <= n) {

        // spaces
        int space = 1;
        while(space < i) {
            cout << "  ";
            space++;
        }

        // numbers
        int j = i;
        while(j <= n) {
            cout << j << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}