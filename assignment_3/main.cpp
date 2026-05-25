#include <iostream>
#include "student.h"

using namespace std;

int main() {
    int choice;

    // Repeating menu using a do-while loop
    do {
        cout << "\n===================================================" << endl;
        cout << "\tSTUDENT MANAGEMENT SYSTEM" << endl;
        cout << "===================================================" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student by ID" << endl;
        cout << "4. Update Student Information" << endl;
        cout << "5. Delete a Student" << endl;
        cout << "6. Exit Program" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        cout << "-------------------------------------------------" << endl;

        // Calling appropriate function based on menu selection
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid selection! Please choose between 1 and 6." << endl;
        }
    } while (choice != 6); // End only when the user selects choice 6 (Exit)

    return 0;
}