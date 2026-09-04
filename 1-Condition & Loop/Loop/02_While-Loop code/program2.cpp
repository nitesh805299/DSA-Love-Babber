#include<iostream>
using namespace std;
//sum of n number using while loop


int main(){

int n;
cout<<"Enter the number:";
cin>>n;

int sum=0;
int i=1;
while(i<=n){
    sum = sum + i;
    i++;
}
cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;
return 0;
}