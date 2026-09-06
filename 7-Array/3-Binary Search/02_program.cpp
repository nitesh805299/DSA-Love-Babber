//first and last position of an element in a sorted array

#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1; // search in left half
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurnece(int arr[],int size, int key){
    int start = 0; 
    int end = size - 1;
    int ans= -1;

    while (start<=end){
        int mid = start + (end - start)/2;

       if(arr[mid] == key){
            ans = mid;
            start = mid + 1; // search in right half
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){

    int even[6] = {1,2,3,3,4,5};
    int odd[5] = {1,4,4,4,5};

    cout << "First occurrence of 3 in even array: " << firstOccurence(even, 6, 3) << endl;
    cout << "Last occurrence of 3 in even array: " << lastOccurnece(even, 6, 3) << endl;

    cout << "First occurrence of 4 in odd array: " << firstOccurence(odd, 5, 4) << endl;
    cout << "Last occurrence of 4 in odd array: " << lastOccurnece(odd, 5, 4) << endl;

    return 0;
}