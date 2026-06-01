#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        //space print karna hai
        int space = i-1;
        while(space){
            cout<<" ";
            space--;
        }

        //star print karna hai
        int j=1;
        while(j<=n+1-i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}