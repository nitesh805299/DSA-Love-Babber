#include<iostream>
using namespace std;

//print the first n natural numbers using while loop

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int i = 1;
    while(i <= n){
        cout<<i<<" ";
        i++;
    }
    return 0;
}