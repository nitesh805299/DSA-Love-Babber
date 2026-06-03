#include<iostream>
using namespace std;

// Bitwise operators are used to perform bit-level operations on data. They operate on the individual bits of the operands and return a result based on the operation performed. The common bitwise operators in C++ include:
// 1. Bitwise AND (&)
// 2. Bitwise OR (|)
// 3. Bitwise XOR (^)
// 4. Bitwise NOT (~)
// 5. Left Shift (<<)
// 6. Right Shift (>>)

int main(){

    int a = 5; // In binary: 0101
    int b = 3; // In binary: 0011


    // Explanation: The bitwise AND operator compares each bit of the two operands and returns 1 if both bits are 1, otherwise it returns 0.
    cout << "Bitwise AND (a & b): " << (a & b) << endl; // Output: 1 (0001)
    
    // Explanation: The bitwise OR operator compares each bit of the two operands and returns 1 if at least one of the bits is 1, otherwise it returns 0.
    cout << "Bitwise OR (a | b): " << (a | b) << endl; // Output: 7 (0111)
    
    // Explanation: The bitwise XOR operator compares each bit of the two operands and returns 1 if the bits are different, otherwise it returns 0.// Note: The bitwise XOR of 5 (0101) and 3 (0011) results in 6 (0110).
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl; // Output: 6 (0110)

    // Explanation: The bitwise NOT operator takes a single operand and inverts all the bits. In C++, the result is represented in two's complement form, which is why we get -6 for ~5.// Note: The bitwise NOT of 5 (0101) results in -6 (1010 in two's complement).
    cout << "Bitwise NOT (~a): " << (~a) << endl; // Output: -6 (in two's complement)
    
    // Explanation: The left shift operator shifts the bits of the operand to the left by the specified number of positions. In this case, shifting 5 (0101) to the left by 1 position results in 10 (1010).// Note: The vacated bits on the right are filled with zeros.
    cout << "Left Shift (a << 1): " << (a << 1) << endl; // Output: 10 (1010)
    
    // Explanation: The right shift operator shifts the bits of the operand to the right by the specified number of positions. In this case, shifting 5 (0101) to the right by 1 position results in 2 (0010).  // Note: The behavior of right shift for negative numbers can be implementation-defined (arithmetic vs logical shift).
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl; // Output: 2 (0010)

    return 0;

}