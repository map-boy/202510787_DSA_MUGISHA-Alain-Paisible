#include <iostream>
#include "student.h"

using namespace std;

// Global array capacity and current active student count
const int MAX_STUDENTS = 100;
Student students[MAX_STUDENTS];
int studentCount = 0;

// Function to add a student
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "System full! Cannot add more students." << endl;
        return;
    }

    cout << "Enter Student ID (Numbers only): ";
    cin >> students[studentCount].id;
    cin.ignore(); // Clear the buffer line

    cout << "Enter Student Name: ";
    getline(cin, students[studentCount].name);

    cout << "Enter Student Age: ";
    cin >> students[studentCount].age;
    cin.ignore();

    cout << "Enter Student Course: ";
    getline(cin, students[studentCount].course);

    studentCount++;
    cout << "Student added successfully!" << endl;
}

// Function to display all students
void displayStudents() {
    if (studentCount == 0) {
        cout << "No student records available." << endl;
        return;
    }

    cout << "\n--- ALL REGISTERED STUDENTS ---" << endl;
    for (int i = 0; i < studentCount; i++) {
        cout << "ID: " << students[i].id << "\t";
        cout << "Name: " << students[i].name << "\t";
        cout << "Age: " << students[i].age << "\t";
        cout << "Course: " << students[i].course << endl;
    }
    cout << "-------------------------------------------------" << endl;
}

// Function to search for a student by ID
void searchStudent() {
    if (studentCount == 0) {
        cout << "No students registered yet." << endl;
        return;
    }

    int searchId;
    cout << "Enter Student ID to search: ";
    cin >> searchId;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == searchId) {
            cout << "\nStudent Found:" << endl;
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Course: " << students[i].course << endl;
            return;
        }
    }
    cout << "Student with ID " << searchId << " not found." << endl;
}

// Function to update an existing student's details
void updateStudent() {
    if (studentCount == 0) {
        cout << "No students registered yet." << endl;
        return;
    }

    int updateId;
    cout << "Enter Student ID to update: ";
    cin >> updateId;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == updateId) {
            cout << "Current Name: " << students[i].name << ". Enter new name: ";
            cin.ignore();
            getline(cin, students[i].name);

            cout << "Current Age: " << students[i].age << ". Enter new age: ";
            cin >> students[i].age;
            cin.ignore();

            cout << "Current Course: " << students[i].course << ". Enter new course: ";
            getline(cin, students[i].course);

            cout << "Student information updated successfully!" << endl;
            return;
        }
    }
    cout << "Student with ID " << updateId << " not found." << endl;
}

// Function to delete a student from records
void deleteStudent() {
    if (studentCount == 0) {
        cout << "No students registered yet." << endl;
        return;
    }

    int deleteId;
    cout << "Enter Student ID to delete: ";
    cin >> deleteId;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == deleteId) {
            // Shift elements left to overwrite deleted element
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            cout << "Student deleted successfully!" << endl;
            return;
        }
    }
    cout << "Student with ID " << deleteId << " not found." << endl;
}