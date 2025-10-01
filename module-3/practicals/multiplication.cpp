#include <iostream>
using namespace std;

int main() {
    int num;

    // Input
    cout << "Enter a number to display its multiplication table: ";
    cin >> num;

    // Display multiplication table (1 to 10)
    cout << "\nMultiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }

    return 0;
}
