#include<iostream>
using namespace std;

int main(){
 
    int size;
    cout << "Enter the size of array:";
    cin>>size;

    int num[100];
    
    // input array elements
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    int sum =0;

    //calculate sum is 
    for(int i = 0;i < size; i++){
        sum = sum + num[i];
    }

    cout <<"sum of array is "<<sum<<endl;
    return 0;
}
