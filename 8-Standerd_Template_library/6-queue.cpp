#include<iostream>
#include<queue>

using namespace std;
int main (){

queue<string> q;
q.push("nitesh");
q.push("kumar");
q.push("chaurasiya");
q.push("rahul");

cout<<"first Element ->"<<" "<<q.front()<<endl;

cout<<"size before pop->"<<" "<<q.size()<<endl;


q.pop();
cout<<"first Element ->"<<" "<<q.front()<<endl;

cout<<"size after pop->"<<" "<<q.size()<<endl;


}