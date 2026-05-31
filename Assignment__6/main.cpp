#include <iostream>
#include "LibraryBook.h"
#include "Functions.h"
using namespace std;

int main() {
    int choice;

    cout << "==========================================" << endl;
    cout << "   KIGALI INDEPENDENT UNIVERSITY" << endl;
    cout << "   Library Book Borrowing System" << endl;
    cout << "==========================================" << endl;

    do {
        cout << "\n========== MAIN MENU ==========" << endl;
        cout << "1. Add New Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Search Book by ID" << endl;
        cout << "6. Display Overdue Books" << endl;
        cout << "7. Calculate Total Fines" << endl;
        cout << "8. Exit" << endl;
        cout << "================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                borrowBookMenu();
                break;
            case 4:
                returnBookMenu();
                break;
            case 5:
                searchBook();
                break;
            case 6:
                displayOverdueBooks();
                break;
            case 7:
                calculateTotalFines();
                break;
            case 8:
                cout << "Thank you for using the Library System. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 8." << endl;
        }

    } while (choice != 8);

    return 0;
}
