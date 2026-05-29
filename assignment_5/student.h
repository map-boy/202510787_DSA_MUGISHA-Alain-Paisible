#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int    id;
    string name;
    int    age;
    string course;

    // Default constructor
    Student() {
        id = 0; name = ""; age = 0; course = "";
    }

    // Parameterized constructor
    Student(int i, string n, int a, string c) {
        id = i; name = n; age = a; course = c;
    }

    // Getters
    int    getId()     { return id;     }
    string getName()   { return name;   }
    int    getAge()    { return age;    }
    string getCourse() { return course; }

    // Setters
    void setId(int i)        { id = i;     }
    void setName(string n)   { name = n;   }
    void setAge(int a)       { age = a;    }
    void setCourse(string c) { course = c; }

    // Display one student
    void display() {
        cout << "  ID: "      << id
             << "  Name: "   << name
             << "  Age: "    << age
             << "  Course: " << course << endl;
    }
};

// Function declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

#endif