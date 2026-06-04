#include<iostream>
using namespace std;

  
int nth_term(int a, int n, int d){

   int ans = a+(n-1)*d;
   return ans;

}

int main(){
 int a;
cout<<"Enter the first term : ";
cin>>a;

int d;
cout<<"Enter the common diference:";
cin>>d;

 int n;
cout<<"Enter the value of n : ";
cin>>n;
cout<<"Nth term is : "<< nth_term(a,n,d);
}



