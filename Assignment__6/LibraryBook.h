#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <string>
using namespace std;

class LibraryBook {
private:
    int bookID;
    string title;
    string author;
    string borrowerName;
    int daysBorrowed;
    bool isBorrowed;

public:
    // Default constructor
    LibraryBook();

    // Parameterized constructor
    LibraryBook(int id, string title, string author);

    // Destructor
    ~LibraryBook();

    // Getters
    int getBookID();
    string getTitle();
    string getAuthor();
    string getBorrowerName();
    int getDaysBorrowed();
    bool getIsBorrowed();

    // Setters
    void setBookID(int id);
    void setTitle(string t);
    void setAuthor(string a);
    void setBorrowerName(string name);
    void setDaysBorrowed(int days);
    void setIsBorrowed(bool status);

    // Other methods
    void displayBook();
    bool isOverdue();
    double calculateFine();
};

#endif
