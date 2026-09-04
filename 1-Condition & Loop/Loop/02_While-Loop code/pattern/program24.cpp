#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        //space print karna hai
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        //star print karna hai
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}