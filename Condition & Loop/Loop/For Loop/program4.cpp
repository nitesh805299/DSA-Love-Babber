#include<iostream>
using namespace std;

//fibonacci serics.........
int main() {
    int n;

    
    cout << "Enter the value of n: ";
    cin >> n;
    int a=0;
    int b=1;
   cout<<a<<" "<<b<<" ";

    for(int i = 1; i <= n; i++) {
        int temp=a+b;
        cout<<temp<<" ";
        a=b;
        b=temp;
    }


    return 0;
}