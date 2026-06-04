#include<iostream>
using namespace std;

int countsetbit(int n){
    int count =0;
    while(n>0){
     if (n&1){
        count +=1;
     }
     n = n>>1;

    }
    return count;

}

int main(){
 int a,b;
 cout<<"enter the value of a ,b is: ";
 cin>>a>>b;

  int totelserbit = countsetbit(a) + countsetbit(b);

  cout<<"totel set bit are :"<<" "<<totelserbit ;

}