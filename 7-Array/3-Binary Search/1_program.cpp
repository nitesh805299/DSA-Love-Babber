// Binary Search Algorithm

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
  int start = 0 ;
  int end = size -1;
  int mid = start +(end-start)/2;


  while(start<= end ){
    
    if(arr[mid] == key){
      return mid ;

    }

    else if(arr[mid] < key){
      start = mid + 1;
    }

    else{
      end = mid - 1;
    }
    mid = start +(end-start)/2;
  }
  return -1;

}

int main (){

  int Even[6] = {2,4,6,8,10,12};
  int Odd[5] = {1,3,5,7,9};

  int EvenIndex = binarySearch(Even,6,10);
  cout << "Index of 10 is : " << EvenIndex << endl;

  int oddIndex = binarySearch(Odd,5,7);
  cout << "Index of 7 is : " << oddIndex << endl;

  return 0;
}