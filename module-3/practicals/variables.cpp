#include <iostream>
#include <string>
using namespace std;

int main() {
    // Constant declaration (value cannot be changed)
    const double PI = 3.14159;

    // Variable declarations
    int age = 20;                // Integer variable
    float height = 5.9;          // Floating-point variable
    char grade = 'A';            // Character variable
    string name = "Harshil";     // String variable
    bool isStudent = true;       // Boolean variable

    // Operations
    int nextYearAge = age + 1;   // Arithmetic operation
    double circleArea = PI * 4 * 4;  // Area of circle with radius 4

    // Output
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " (Next year: " << nextYearAge << ")" << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student? " << (isStudent ? "Yes" : "No") << endl;
    cout << "Constant PI value: " << PI << endl;
    cout << "Area of circle (r=4): " << circleArea << endl;

    return 0;
}

