#include <iostream>  
#include <string>    
#include "notepad.h" 


using namespace std;

int main() {

    int choice;      
    string filename; 

    
    cout << "==============================" << endl;
    cout << "   WELCOME TO SIMPLE NOTEPAD  " << endl;
    cout << "==============================" << endl;

    
    do {
        
        cout << endl;
        cout << "===== SIMPLE NOTEPAD =====" << endl;
        cout << "1. Write File" << endl;
        cout << "2. Read File" << endl;
        cout << "3. Append File" << endl;
        cout << "4. Exit" << endl;
        cout << "==========================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        
        cin.ignore();

        
        switch (choice) {

            case 1:
                
                cout << "Enter the filename to write (e.g. notes.txt): ";
                getline(cin, filename); 
                writeFile(filename);   
                break;

            case 2:
                
                cout << "Enter the filename to read (e.g. notes.txt): ";
                getline(cin, filename); 
                readFile(filename);    
                break;

            case 3:
                
                cout << "Enter the filename to append to (e.g. notes.txt): ";
                getline(cin, filename);  
                appendFile(filename);    
                break;

            case 4:
                
                cout << "Thank you for using Simple Notepad. Goodbye!" << endl;
                break;

            default:
                
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }

    } while (choice != 4); 

    return 0; 
}