#include<iostream>
#include<vector>

using namespace std;

int main(){
// vector ka size zero hota hai ....

    vector<int> v;
    cout<<"capacity_>"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity_>"<<v.capacity()<<endl;  

   v.push_back(2);
    cout<<"capacity_>"<<v.capacity()<<endl;  

   v.push_back(3);
    cout<<"capacity_>"<<v.capacity()<<endl; 
    cout<<"Size_>"<<v.size()<<endl;   


    cout<<"frist element ->"<< v.front()<<endl;
    cout<<"last element ->"<< v.back()<<endl;

    
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

   v.pop_back();
     cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size->"<<" "<<v.size()<<endl;

    v.clear();
     cout<< "after clear size->"<<" "<<v.size()<<endl;

    return 0;
}


// 1. Size क्या होता है?
// Size = अभी container में कितने elements मौजूद हैं।

// 2. Capacity क्या होती है?
// Capacity = बिना नई memory allocate किए container में अधिकतम कितने elements रखे जा सकते हैं।
