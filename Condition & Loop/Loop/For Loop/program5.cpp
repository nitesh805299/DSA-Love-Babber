#include<iostream>
using namespace std;

// Wap to find a prime number..
int main() {
    int n;
    
    cout << "Enter the value of n: ";
    cin >> n;
    bool isprime =1;
    for(int i=2 ;i<n;i++){
        if(n%i==0){
             
            isprime=0;
             break;
        }
           
     
            
        
    }
    if(isprime ==0){
       cout<<n<<"is not prime number";
    }
    else{
        cout<<"is prime number";
    }
    

    return 0;
}