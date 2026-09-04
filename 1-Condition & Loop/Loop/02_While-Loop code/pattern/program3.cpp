#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n+1-i){
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
