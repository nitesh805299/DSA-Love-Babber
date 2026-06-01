#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
       
        //star print karna hai
        int j=1;
        while(j<=n+1-i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}