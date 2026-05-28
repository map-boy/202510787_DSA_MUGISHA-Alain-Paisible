#include <iostream>   
#include <fstream>    
#include <string>     
#include "notepad.h"  


using namespace std;




void writeFile(string filename) {

    ofstream myFile(filename);

    
    if (!myFile) {
        cout << "Error: Could not create the file." << endl;
        return; 
    }

    cout << "File opened for writing." << endl;
    cout << "Type your text below. Type 'END' on a new line to stop." << endl;
    cout << "----------------------------------------" << endl;

    string line; 

    
    while (true) {
        getline(cin, line); 

        
        if (line == "END") {
            break; // exit the loop
        }

        
        myFile << line << endl;
    }

    
    myFile.close();

    cout << "----------------------------------------" << endl;
    cout << "File saved successfully as: " << filename << endl;
}



void readFile(string filename) {

    
    ifstream myFile(filename);

    
    if (!myFile) {
        cout << "Error: File not found. Make sure the filename is correct." << endl;
        return; 
    }

    cout << "----------------------------------------" << endl;
    cout << "Contents of file: " << filename << endl;
    cout << "----------------------------------------" << endl;

    string line; 

    
    while (getline(myFile, line)) {
        cout << line << endl; 
    }

    cout << "----------------------------------------" << endl;
    cout << "End of file." << endl;

    
    myFile.close();
}




void appendFile(string filename) {

    
    fstream myFile(filename, ios::app);

    
    if (!myFile) {
        cout << "Error: Could not open file for appending." << endl;
        return;
    }

    cout << "File opened for appending." << endl;
    cout << "Type the text you want to add. Type 'END' on a new line to stop." << endl;
    cout << "----------------------------------------" << endl;

    string line;

    
    while (true) {
        getline(cin, line); 

        
        if (line == "END") {
            break;
        }

        
        myFile << line << endl;
    }

   
    myFile.close();

    cout << "----------------------------------------" << endl;
    cout << "Text added successfully to: " << filename << endl;
}