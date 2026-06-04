#include<iostream>
using namespace std;
 
void odd_Even(int a){
    if(a%2==0){
       cout<<a<<" "<<"is Even number"<<endl;
    }
    else{
        cout<<a<<" "<<"is odd number"<<endl;
    }

    
}

int main(){
    int a;
    cout<<"enter number:";
    cin>>a;
    
    odd_Even(a);



}