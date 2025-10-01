#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // -- Arithmetic Operators --
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;  // integer division
    cout << "a % b = " << (a % b) << endl;  // modulus
    cout << endl;

    // -- Relational Operators --
    cout << "Relational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << endl;

    // -- Logical Operators --
    bool x = true, y = false;
    cout << "Logical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;
    cout << endl;

    // -- Bitwise Operators --
    cout << "Bitwise Operators:" << endl;
    cout << "a & b = " << (a & b) << endl;   // AND
    cout << "a | b = " << (a | b) << endl;   // OR
    cout << "a ^ b = " << (a ^ b) << endl;   // XOR
    cout << "~a = " << (~a) << endl;         // NOT
    cout << "a << 1 = " << (a << 1) << endl; // Left shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Right shift

    return 0;
}
