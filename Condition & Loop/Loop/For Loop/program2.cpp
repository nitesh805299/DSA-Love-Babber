#include<iostream>
using namespace std;
// use multiple condition

int main(){
   for(int a=4,b=6;a>=0,b>=0;--a,--b){
    cout<<a<<" "<<b<<endl;
   }
   //output
// 4 6
// 3 5
// 2 4
// 1 3
// 0 2
// -1 1
// -2 0
   //the comma operator is used.
// Only the last condition (b>=0) is actually checked for loop continuation.

// So the loop runs until b becomes negative.
    for(int a=4,b=6;a>=0&&b>=0;--a,--b){
    cout<<a<<" "<<b<<endl;
   } 
   //output
  //4 6
  //3 5
  //2 4
  //1 3
  //0 2

    for(int a=4,b=6;a>=0||b>=0;--a,--b){
    cout<<a<<" "<<b<<endl;
   }
   //output
   //4 6
// 3 5
// 2 4
// 1 3
// 0 2
// -1 1
// -2 0
}