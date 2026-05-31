#include "Functions.h"
#include <iostream>
using namespace std;

// Define the global array and counter
LibraryBook books[MAX_BOOKS];
int bookCount = 0;

// Add a new book to the library
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        cout << "Library is full! Cannot add more books." << endl;
        return;
    }

    int id;
    string title, author;

    cout << "\n--- Add New Book ---" << endl;
    cout << "Enter Book ID: ";
    cin >> id;
    cin.ignore(); 

    // Check if ID already exists
    for (int i = 0; i < bookCount; i++) {
        if (books[i].getBookID() == id) {
            cout << "A book with this ID already exists!" << endl;
            return;
        }
    }

    cout << "Enter Title: ";
    getline(cin, title);
    cout << "Enter Author: ";
    getline(cin, author);

    books[bookCount] = LibraryBook(id, title, author);
    bookCount++;

    cout << "Book added successfully!" << endl;
}

// Display all books in the library
void displayBooks() {
    if (bookCount == 0) {
        cout << "No books in the library yet." << endl;
        return;
    }

    cout << "\n--- All Books ---" << endl;
    for (int i = 0; i < bookCount; i++) {
        books[i].displayBook();
    }
}

// Search for a book by its ID
void searchBook() {
    if (bookCount == 0) {
        cout << "No books in the library yet." << endl;
        return;
    }

    int id;
    cout << "\n--- Search Book by ID ---" << endl;
    cout << "Enter Book ID to search: ";
    cin >> id;

    for (int i = 0; i < bookCount; i++) {
        if (books[i].getBookID() == id) {
            cout << "Book found!" << endl;
            books[i].displayBook();
            return;
        }
    }

    cout << "Book with ID " << id << " not found." << endl;
}

// Borrow a book
void borrowBookMenu() {
    if (bookCount == 0) {
        cout << "No books in the library yet." << endl;
        return;
    }

    int id, days;
    string borrower;

    cout << "\n--- Borrow Book ---" << endl;
    cout << "Enter Book ID to borrow: ";
    cin >> id;
    cin.ignore();

    for (int i = 0; i < bookCount; i++) {
        if (books[i].getBookID() == id) {
            if (books[i].getIsBorrowed()) {
                cout << "Sorry, this book is already borrowed by " << books[i].getBorrowerName() << "." << endl;
                return;
            }

            cout << "Enter Borrower Name: ";
            getline(cin, borrower);
            cout << "Enter Number of Days to Borrow: ";
            cin >> days;

            books[i].setBorrowerName(borrower);
            books[i].setDaysBorrowed(days);
            books[i].setIsBorrowed(true);

            cout << "Book borrowed successfully!" << endl;
            if (books[i].isOverdue()) {
                cout << "Warning: This book is already set as overdue!" << endl;
            }
            return;
        }
    }

    cout << "Book with ID " << id << " not found." << endl;
}

// Return a book
void returnBookMenu() {
    if (bookCount == 0) {
        cout << "No books in the library yet." << endl;
        return;
    }

    int id;
    cout << "\n--- Return Book ---" << endl;
    cout << "Enter Book ID to return: ";
    cin >> id;

    for (int i = 0; i < bookCount; i++) {
        if (books[i].getBookID() == id) {
            if (!books[i].getIsBorrowed()) {
                cout << "This book is not currently borrowed." << endl;
                return;
            }

            // Show fine before returning
            if (books[i].isOverdue()) {
                cout << "This book is overdue! Fine to pay: " << books[i].calculateFine() << " RWF" << endl;
            }

            // Reset borrow info
            books[i].setBorrowerName("");
            books[i].setDaysBorrowed(0);
            books[i].setIsBorrowed(false);

            cout << "Book returned successfully!" << endl;
            return;
        }
    }

    cout << "Book with ID " << id << " not found." << endl;
}

// Display all overdue books
void displayOverdueBooks() {
    if (bookCount == 0) {
        cout << "No books in the library yet." << endl;
        return;
    }

    bool foundOverdue = false;
    cout << "\n--- Overdue Books ---" << endl;

    for (int i = 0; i < bookCount; i++) {
        if (books[i].isOverdue()) {
            books[i].displayBook();
            foundOverdue = true;
        }
    }

    if (!foundOverdue) {
        cout << "No overdue books at the moment." << endl;
    }
}

// Calculate and display total fines
void calculateTotalFines() {
    if (bookCount == 0) {
        cout << "No books in the library yet." << endl;
        return;
    }

    double totalFine = 0.0;
    cout << "\n--- Total Fines Summary ---" << endl;

    for (int i = 0; i < bookCount; i++) {
        if (books[i].isOverdue()) {
            double fine = books[i].calculateFine();
            cout << "Book: " << books[i].getTitle()
                 << " | Borrower: " << books[i].getBorrowerName()
                 << " | Fine: " << fine << " RWF" << endl;
            totalFine += fine;
        }
    }

    cout << "-------------------------------" << endl;
    cout << "Total Fines: " << totalFine << " RWF" << endl;
}
