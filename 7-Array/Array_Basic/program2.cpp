#include<iostream>
using namespace std;

int main(){
// declare

  int number[15];

  // accessing an array 

//   cout << endl<<"value at is index "<< number[14]<< endl;

//   cout << endl<<"value at is index "<< number[20]<< endl;



   int second [3] = {2,5,8};
   cout<<"value of 2 index is "<<second[2]<< endl;

   int third[15] = {2,5,8,4};
   int n9 =5;
   for (int i=0;i<n9;i++){
    cout<<third[i]<<" ";
   }

   cout<<endl<<endl;


    int fourth[10] ={0};
    int n =10;
      for (int i=0;i<n;i++){
       cout<<fourth[i]<<" ";
       }
  
      cout<<endl<<endl;

   
    int fifth[10] ={1};
    int n8 =10;
      for (int i=0;i<n8;i++){
       cout<<fifth[i]<<" ";

       }

       cout<<endl;

       //Agar tum chahte ho ki 0 se 9 index tak sabhi elements 1 hon, to loop se initialize karo:

    int sixth[10];

    for(int i = 0; i < 10; i++) {
        sixth[i] = 1;
    
    }

    for(int i = 0; i < 10; i++) {
        cout << sixth[i] << " ";
    }


  cout<<endl<<"Everythink is Fine "<<endl<<endl;
    return 0;
}
