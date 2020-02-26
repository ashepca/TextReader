//: Text.cpp

/* 
 Title: Text.cpp
 Description: Implementation file for a Text Class
 Date: 02-Oct-2019
 Author: Andrew Shepherd
 Version: 1.0
 Copyright: 2019 Andrew Shepherd

 Purpose: Implementation file for the operations of the Text class.
*/

// include and define statements
#include "Text.h"
#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

Text::Text() {
   fileText = "I've also created a default Text Object";
}

Text::Text(string fileName) {
   ifstream inputFile(fileName);
   while(!inputFile) {
      cout << "File not found, please enter another file: ";
      cin >> fileName;
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      inputFile.open(fileName);
   }
   string currentLine;
   while(getline(inputFile, currentLine)) {
      fileText = fileText + currentLine;
   }   
} 

Text::~Text() {  
}

string Text::contents() {
   if(fileText == "")
      return "Empty";
   return fileText;
} ///:~
