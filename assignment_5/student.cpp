#include "student.h"

// Global storage
Student students[100];
int count = 0;

// Add a new student
void addStudent() {
    int id, age;
    string name, course;

    cout << "\n  Enter ID     : "; cin >> id;
    cout << "  Enter Name   : "; cin.ignore(); getline(cin, name);
    cout << "  Enter Age    : "; cin >> age;
    cout << "  Enter Course : "; cin.ignore(); getline(cin, course);

    Student s(id, name, age, course);
    students[count] = s;
    count++;

    cout << "  Student added successfully!" << endl;
}

// Display all students
void displayStudents() {
    if (count == 0) {
        cout << "\n  No students found." << endl;
        return;
    }
    cout << "\n  -------- All Students --------" << endl;
    for (int i = 0; i < count; i++) {
        students[i].display();
    }
    cout << "  Total: " << count << " student(s)" << endl;
}

// Search a student by ID
void searchStudent() {
    int id;
    cout << "\n  Enter ID to search: "; cin >> id;

    for (int i = 0; i < count; i++) {
        if (students[i].getId() == id) {
            cout << "  Student found:" << endl;
            students[i].display();
            return;
        }
    }
    cout << "  Student not found." << endl;
}

// Update student information
void updateStudent() {
    int id;
    cout << "\n  Enter ID to update: "; cin >> id;

    for (int i = 0; i < count; i++) {
        if (students[i].getId() == id) {
            string name, course;
            int age;

            cout << "  Enter new Name   : "; cin.ignore(); getline(cin, name);
            cout << "  Enter new Age    : "; cin >> age;
            cout << "  Enter new Course : "; cin.ignore(); getline(cin, course);

            students[i].setName(name);
            students[i].setAge(age);
            students[i].setCourse(course);

            cout << "  Student updated successfully!" << endl;
            return;
        }
    }
    cout << "  Student not found." << endl;
}

// Delete a student
void deleteStudent() {
    int id;
    cout << "\n  Enter ID to delete: "; cin >> id;

    for (int i = 0; i < count; i++) {
        if (students[i].getId() == id) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            cout << "  Student deleted successfully!" << endl;
            return;
        }
    }
    cout << "  Student not found." << endl;
}