// swap alternative two number ...

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternative(int arr[],int size){
    for(int i =0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
 
    int even[8] = {2,4,6,8,10,12,14,16};
    int odd[7] = {1,3,5,7,9,11,13};

    printArray(even, 8);
    swapAlternative(even, 8);
    printArray(even, 8);

    printArray(odd, 7);
    swapAlternative(odd, 7);
    printArray(odd, 7);

    return 0;
}