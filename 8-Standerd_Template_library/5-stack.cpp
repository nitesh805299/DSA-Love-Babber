#include<iostream>
#include<stack>
using namespace std;


int main (){

stack<string> s;

s.push("nitesh");
s.push("kumar");
s.push("chaurasiya");
s.push("rahul");

cout<<"top Element ->"<<" "<<s.top()<<endl;

s.pop();
cout<<"top Element ->"<<" "<<s.top()<<endl;

cout<<"size of stack"<<" "<<s.size()<<endl;

cout<<"empty or not  ->"<<" "<<s.empty()<<endl;





}