#include <iostream>
using namespace std;

// आपका C++ प्रोग्राम सही है। यह cin.get() से एक character इनपुट लेता है और उसके ASCII value के आधार पर बताता है कि वह:

// Uppercase letter है
// Lowercase letter है
// Digit है
// या Special character है

// Code में cin.get() एक single character पढ़ता है और उसका ASCII code return करता है।

int main(){
    int a;
    a= cin.get();
    if(a>=65 && a<=90){
        cout<<"the character is an uppercase letter";
    }
    else if(a>=97 && a<=122){
        cout<<"the character is a lowercase letter";
    }
    else if(a>=48 && a<=57){
        cout<<"the character is a digit";
    }
    else{
        cout<<"the character is a special character";
    }
    return 0;
}