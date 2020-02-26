//: Text.h

/* 
 Title: Text.h
 Description: Header file for a Text Class
 Date: 02-Oct-2019
 Author: Andrew Shepherd
 Version: 1.0
 Copyright: 2019 Andrew Shepherd

 Purpose: Interface file for the data and operations of the Text class.
*/

// include and define statements
#ifndef TEXT_H
#define TEXT_H
#include <string>
using namespace std; 

class Text { 
   string fileText; 
public:   
   Text(); // Default Constructor 
   Text(string fileName); // Constructor with file input
   ~Text(); // Destructor
   string contents();
};
#endif // TEXT_H ///:~
