#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "LibraryBook.h"

// Maximum number of books the library can hold
const int MAX_BOOKS = 100;

// External variables declared here, defined in Functions.cpp
extern LibraryBook books[MAX_BOOKS];
extern int bookCount;

// Function declarations
void addBook();
void displayBooks();
void searchBook();
void borrowBookMenu();
void returnBookMenu();
void displayOverdueBooks();
void calculateTotalFines();

#endif
