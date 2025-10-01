#include <iostream>
using namespace std;

// Function to calculate area
int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    int length, width;

    // Input
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    // Output
    cout << "Area of rectangle = " << calculateArea(length, width) << endl;

    return 0;
}
