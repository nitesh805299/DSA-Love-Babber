#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    char op;

    cout << "Enter the operation you want to perform (+,-,*,/,%): ";
    cin >> op;

    switch(op){

        case '+':
            cout << "Answer = " << (a + b) << endl;
            break;

        case '-':
            cout << "Answer = " << (a - b) << endl;
            break;

        case '*':
            cout << "Answer = " << (a * b) << endl;
            break;

        case '/':
            cout << "Answer = " << (a / b) << endl;
            break;

        case '%':
            cout << "Answer = " << (a % b) << endl;
            break;

        default:
            cout << "Invalid Operator";
    }

    return 0;
}