#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;

    while(i <= n){

        // spaces
        int space = n - i;

        while(space){
            cout << " ";
            space--;
        }

        // increasing numbers
        int j = 1;

        while(j <= i){
            cout << j;
            j++;
        }

        // decreasing numbers
        int k = i - 1;

        while(k >= 1){
            cout << k;
            k--;
        }

        cout << endl;

        i++;
    }

    return 0;
}