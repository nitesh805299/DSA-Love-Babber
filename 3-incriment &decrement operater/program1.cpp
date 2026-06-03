#include<iostream>
using namespace std;
//increment and decrement operator

// Increment and decrement operators are used to increase or decrease the value of a variable by 1, respectively. They can be used in two forms: prefix and postfix.    
// 1. Prefix Increment (++variable): The variable is incremented first, and then its new value is used in the expression.
// 2. Postfix Increment (variable++): The current value of the variable is used in the expression first, and then the variable is incremented.
// 3. Prefix Decrement (--variable): The variable is decremented first, and then its new value is used in the expression.
// 4. Postfix Decrement (variable--): The current value of the variable is used in the expression first, and then the variable is decremented.

int main(){

    int a = 5;

    // Using prefix increment
    cout << "Prefix Increment (++a): " << (++a) << endl; // Output: 6 (a is incremented before being used)
    
    // Using postfix increment
    cout << "Postfix Increment (a++): " << (a++) << endl; // Output: 6 (a is used before being incremented)
    cout << "Current value of a after postfix increment: " << a << endl; // Output: 7 (a is now incremented)

    // Using prefix decrement
    cout << "Prefix Decrement (--a): " << (--a) << endl; // Output: 6 (a is decremented before being used)
    
    // Using postfix decrement
    cout << "Postfix Decrement (a--): " << (a--) << endl; // Output: 6 (a is used before being decremented)
    cout << "Current value of a after postfix decrement: " << a << endl; // Output: 5 (a is now decremented)

    return 0;

}