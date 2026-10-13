#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){
   vector<int> a= {13,17,5,3,2};
   int n= a.size();
  int max = 2;

  vector<int> leader;
  leader.push_back(max);
  for(int i=n-2; i >=0; i--){
    if(a[i] >= max){
        max = a[i];
          leader.push_back(max);
    }

  }
reverse(leader.begin(),leader.end());
for(auto b:leader){
    cout<<b<<endl;
}


    return 0;
}
