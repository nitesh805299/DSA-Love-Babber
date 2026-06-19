#include<iostream>
using namespace std;

void AllDuplicatesElement(int arr[],int size){
    int ans = 0;
    for ( int i = 0; i < size; i++){
       bool alreadyPrinted = false;

       //check the duplicates element are peinted or not ...

       for(int k=0; k<i;k++){
        if(arr[k] == arr[i]){
            alreadyPrinted = true ;
            break;
        }
       }
       if (alreadyPrinted)
       continue;

       // find dhuplicate 
             for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
       }
    }


int main(){
  int arr[6]={3,4,3,4,2,5};
   
  cout<< " Duplicate element is :";
  AllDuplicatesElement(arr,6);
  
    return 0;
}
