#include "student.h"

int main() {
    int choice;

    cout << "===============================" << endl;
    cout << "  Student Management System   " << endl;
    cout << "===============================" << endl;

    do {
        cout << "\n  ------- Menu -------"   << endl;
        cout << "  1. Add Student"            << endl;
        cout << "  2. Display All available Students"   << endl;
        cout << "  3. Search Student by using ID"   << endl;
        cout << "  4. Update Student"         << endl;
        cout << "  5. Delete Student"         << endl;
        cout << "  6. Exit"                   << endl;
        cout << "  --------------------"      << endl;
        cout << "  Enter choice: ";
        cin  >> choice;

        switch (choice) {
            case 1: addStudent();      break;
            case 2: displayStudents(); break;
            case 3: searchStudent();   break;
            case 4: updateStudent();   break;
            case 5: deleteStudent();   break;
            case 6: cout << "\n  Goodbye!" << endl; break;
            default: cout << "\n  Invalid choice. Try again." << endl;
        }

    } while (choice != 6);

    return 0;
}