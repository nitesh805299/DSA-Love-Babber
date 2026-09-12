#include<iostream>
using namespace std;

void sortedArray(int arr[], int size){
    for(int i = 0; i <size; i++){
        int midIndex = i;
        for(int j = i+1; j<size; j++){
            if(arr[j] < arr[midIndex]){
                midIndex = j;
            }
        }
        swap(arr[i], arr[midIndex]);
    }
}

int main(){
   
    int arr[] = {5, 4, 3, 2, 1};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    sortedArray(arr, size);
    cout<<"sorted Arrray is: ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
