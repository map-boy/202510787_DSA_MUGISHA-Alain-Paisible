#ifndef STUDENT_H
#define STUDENT_H
#endif

#include <string>
using namespace std;

// Defining the Student Structure
struct Student {
    int id;
    string name;
    int age;
    string course;
};

// Declaring the Functions
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

