#include "LibraryBook.h"
#include <iostream>
using namespace std;

// Default constructor
LibraryBook::LibraryBook() {
    bookID = 0;
    title = "";
    author = "";
    borrowerName = "";
    daysBorrowed = 0;
    isBorrowed = false;
}

// Parameterized constructor
LibraryBook::LibraryBook(int id, string t, string a) {
    bookID = id;
    title = t;
    author = a;
    borrowerName = "";
    daysBorrowed = 0;
    isBorrowed = false;
}

// Destructor
LibraryBook::~LibraryBook() {
    cout << "Book object '" << title << "' has been destroyed." << endl;
}

// --- Getters ---
int LibraryBook::getBookID() { return bookID; }
string LibraryBook::getTitle() { return title; }
string LibraryBook::getAuthor() { return author; }
string LibraryBook::getBorrowerName() { return borrowerName; }
int LibraryBook::getDaysBorrowed() { return daysBorrowed; }
bool LibraryBook::getIsBorrowed() { return isBorrowed; }

// --- Setters ---
void LibraryBook::setBookID(int id) { bookID = id; }
void LibraryBook::setTitle(string t) { title = t; }
void LibraryBook::setAuthor(string a) { author = a; }
void LibraryBook::setBorrowerName(string name) { borrowerName = name; }
void LibraryBook::setDaysBorrowed(int days) { daysBorrowed = days; }
void LibraryBook::setIsBorrowed(bool status) { isBorrowed = status; }

// Display book details
void LibraryBook::displayBook() {
    cout << "-------------------------------" << endl;
    cout << "Book ID    : " << bookID << endl;
    cout << "Title      : " << title << endl;
    cout << "Author     : " << author << endl;
    cout << "Status     : " << (isBorrowed ? "Borrowed" : "Available") << endl;
    if (isBorrowed) {
        cout << "Borrower   : " << borrowerName << endl;
        cout << "Days Borrowed: " << daysBorrowed << endl;
        if (isOverdue()) {
            cout << "** OVERDUE! Fine: " << calculateFine() << " RWF **" << endl;
        }
    }
    cout << "-------------------------------" << endl;
}

// A book is overdue if borrowed for more than 14 days
bool LibraryBook::isOverdue() {
    return (isBorrowed && daysBorrowed > 14);
}

// Fine = 50 RWF per extra day after 14 days
double LibraryBook::calculateFine() {
    if (isOverdue()) {
        int extraDays = daysBorrowed - 14;
        return extraDays * 50.0;
    }
    return 0.0;
}
