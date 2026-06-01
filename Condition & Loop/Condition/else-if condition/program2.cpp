#include <iostream>
using namespace std;


// This program checks if the number is positive, negative or zero
int main (){
    int a;
    cout<<"Enter a number ";
    cin>>a;

    // condition 
    if (a>0){
        cout<<"the number is a positive number";

    }
    else if (a<0){
        cout <<"the number is a negative number ";

    }
    else{
        cout<<"the number is zero";
    }
    

}