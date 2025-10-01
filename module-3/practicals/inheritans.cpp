#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Function to display person details
    void displayPersonInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    string studentID;

public:
    // Constructor
    Student(string n, int a, string id) : Person(n, a) {
        studentID = id;
    }

    // Function to display student details
    void displayStudentInfo() {
        displayPersonInfo(); // Reuse base class function
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;

public:
    // Constructor
    Teacher(string n, int a, string sub) : Person(n, a) {
        subject = sub;
    }

    // Function to display teacher details
    void displayTeacherInfo() {
        displayPersonInfo(); // Reuse base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create Student object
    Student s("Alice", 20, "S123");
    cout << "Student Information:" << endl;
    s.displayStudentInfo();

    cout << endl;

    // Create Teacher object
    Teacher t("Mr. John", 45, "Mathematics");
    cout << "Teacher Information:" << endl;
    t.displayTeacherInfo();

    return 0;
}
