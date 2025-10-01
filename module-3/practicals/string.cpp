#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    // Input string
    cout << "Enter a string: ";
    cin >> str;   // (If you want spaces, use getline instead of cin)

    int n = str.length();
    bool isPalindrome = true;

    // Check palindrome
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    // Display result
    if (isPalindrome)
        cout << "The string is a Palindrome." << endl;
    else
        cout << "The string is NOT a Palindrome." << endl;

    return 0;
}
