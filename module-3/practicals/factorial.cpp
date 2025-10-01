#include <iostream>
using namespace std;

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)  // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num;

    // Input
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Error! Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}
