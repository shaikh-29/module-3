#include <iostream>
#include <string>   // For using string data type

using namespace std;

int main() {
    string name;
    int age;

    // Input name
    cout << "Enter your name: ";
    getline(cin, name);   // getline is used to read full name (including spaces)

    // Input age
    cout << "Enter your age: ";
    cin >> age;

    // Display personalized greeting
    cout << "\nHello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
