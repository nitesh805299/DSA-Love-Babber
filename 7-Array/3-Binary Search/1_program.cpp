#include<iostream>
using namespace std ;
 
int BinarySearch(int arr[], int size , int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    while (start <= end){
      if (arr[mid] == key){
        return mid ;
      }

      // go to right side ........

      if (key > arr[mid]){
        start = mid + 1;
      }
      // go to left side..........
      else{
        end = mid - 1;
      }
         mid = start + (end - start)/2;
    }
   
  return -1;

}

int main (){
  int even[6] = {3,5,7,9,12,34};
  int odd[5] = {4,6,7,9,13};

  int evenIndex = BinarySearch(even, 6, 12);
  cout << " index of even element is :"<< evenIndex<< endl;

  
  int oddIndex = BinarySearch(odd, 5, 9);
  cout << " index of odd element is :"<< oddIndex<< endl;

return 0;
}