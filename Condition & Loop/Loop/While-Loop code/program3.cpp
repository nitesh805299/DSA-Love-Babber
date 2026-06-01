#include<iostream>
using namespace std;
//find the sum of all even numbers between 1 to n using while loop
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum = 0 ;
    int i =1 ;
    while(i<=n){
        if (i%2==0){
            sum = sum +i; 
        }
        i++;
    }
    cout<<"Sum of all even numbers between 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}