// Copying variable value to another variable with the same type 

// Original file:   main.cpp
// Original folder: CPP_AIO4/BookI/Chapter04/CopyVariable

// Code from:       C++ All in one for dummies, 4th edition, 2021, author John Paul Mueller
//                  Book I, chapter 4, p. 75

// File:            CopyVariable.cpp 
// Created:         2022-04-24, Niklas Engvall
// Updated:         2022-04-24, Niklas Engvall

// Purpose:         This example shows how to copy a variable valuee to another variable of same type 

// Description:     The code in main declares variable my_start and my_finish
//                  Then we assign 48 to my_start and copy that (assign) to the variable my_finish
//                  The last thing we do is printing the value 48 to the terminal

// Returns:         0 to calling function, software or operating system#include <iostream>

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int my_start, my_finish;    // Declares my variables
    my_finish = my_start = 48;  // Initialize my_start to 48, then copies it's value to my_finish variable 

    cout << my_finish << endl;  // Prints my_finish value to the terminal
    return 0;
}
