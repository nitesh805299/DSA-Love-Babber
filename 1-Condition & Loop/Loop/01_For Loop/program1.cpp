// WAP to print a number from 1 to n using for loop

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the value of n "<<endl;
  cin>>n;

  cout<<"printing count from 1 to n"<<endl;

  for(int i=1;i<=n;i++){
     cout<<"count"<<i<< endl;
     //cout << "count " << i << " "; // if you want to print in a single line
  }
}