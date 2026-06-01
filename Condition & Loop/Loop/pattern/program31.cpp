#include<iostream>
using namespace std;    
int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){

        //pattern 1
        int j=1;
        
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
       

        //pattern 2
        int k=i-1;
        while(k>=1){
            cout<<"*"<<" ";
            k--;
        }

        //pattern 3
        int l=i-1;
        while(l>=1){
            cout<<"*"<<" ";
            l--;
        }
        //pattern 4
        int m=n-i+1;
        while(m>=1){
            cout<<m<<" ";
            m--;
        }   
       
        cout<<endl;
        i++;
    }
  
    
    return 0;
}