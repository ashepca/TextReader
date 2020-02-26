//: TextReader.cpp

/* 
 Title: TextReader.cpp
 Description: Program that creates an text class, opens and displays a file
 Date: 02-Oct-2019
 Author: Andrew Shepherd
 Version: 1.0
 Copyright: 2019 Andrew Shepherd

 Purpose: The program creates a text class that contains a string object,
          opens a file, reads contents into the string object and displays.

 Compile (with GNU C++):  g++ TextReader.cpp Text.cpp

 Classes: Text

 Variables: None
*/

// include and define statements
#include "Text.h"
#include <iostream>
using namespace std;

// ------------------------------------------------------------------------
// Function: main()
// Purpose:  Main execution of the program
// Inputs:  none
// ------------------------------------------------------------------------

int main(void) { 
   // variables
   string fileToOpen;

   // request and obtain input file name
   cout << "\nEnter a file of text to read, e.g. sampleFile.txt: ";
   cin >> fileToOpen;
   cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

   // testing the file constructor 
   Text myFile(fileToOpen);
   cout << "\nThe text in that file is:" << endl;
   cout << "\n" << myFile.contents() << endl;

   // testing the default constructor
   Text defaultFile;
   cout << "\n" << defaultFile.contents() << "\n" << endl;
} ///:~
