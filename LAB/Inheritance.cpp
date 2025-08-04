#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    int studentID;

public:
    void setStudentDetails(string n, int a, int id) {
        setPersonDetails(n, a);  // Reusing base class function
        studentID = id;
    }

    void displayStudentDetails() {
        cout << "\n--- Student Info ---\n";
        displayPersonDetails();  // Reusing base class function
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string s) {
        setPersonDetails(n, a);  // Reusing base class function
        subject = s;
    }

    void displayTeacherDetails() {
        cout << "\n--- Teacher Info ---\n";
        displayPersonDetails();  // Reusing base class function
        cout << "Subject: " << subject << endl;
    }
};

main() {
    // Create Student object
    Student s;
    s.setStudentDetails("Dipen", 22, 101);
    s.displayStudentDetails();

    // Create Teacher object
    Teacher t;
    t.setTeacherDetails("Mr. Kunal", 25, "Database");
    t.displayTeacherDetails();

    return 0;
}

