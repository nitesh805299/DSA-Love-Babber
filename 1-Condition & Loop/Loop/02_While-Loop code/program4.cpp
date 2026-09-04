#include<iostream>
using namespace std;
//Wap to fahrenheit to celsius using while loop
int main(){
    int fahrenheit = 0;
    float celsius;

    while(fahrenheit <= 300){
        celsius = (fahrenheit - 32) * 5.0/9.0;
        cout<<fahrenheit<<" F = "<<celsius<<" C"<<endl;
        fahrenheit += 20;
    }
  
    return 0;
}