#include<iostream>
using namespace std;
 
int power (int a,int b){
    int ans =1;
    for(int i=1;i<=b;i++){
        ans=ans*a;

    }
   
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;

    int answer= power(a,b);
    cout<<"power of ato the power b is:"<<answer;
    
    int answer1= power(a,b);
    cout<<"power of ato the power b is:"<<answer1;

    return 0;
}