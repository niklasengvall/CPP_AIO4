// Adding values to a variable and store it in the same variable 

// Original file:   main.cpp
// Original folder: CPP_AIO4/BookI/Chapter04/AddInteger3

// Code from:       C++ All in one for dummies, 4th edition, 2021, author John Paul Mueller
//                  Book I, chapter 4, p. 80-81

// File:            AddInteger3.cpp 
// Created:         2022-04-24, Niklas Engvall
// Updated:         2022-04-24, Niklas Engvall

// Purpose:         This example shows how to store calculations into the very same variable

// Description:     The code in main declares and initialize a variable var to 7
//                  After that we print its value on the console
//                  Then it adds 7 to the var value and which is 14 and stores that new value in var.
//                  The new value is printed on the console
//                  The program continues and shows how to add new values in different ways using += and ++ operators and prints it on screen

// Returns:         0 to calling function, software or operating system#include <iostream>#include <iostream>

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int var = 7;

    cout << var << endl; // Prints the var value (7)

    var = var + 7;          // Adds 7 to the variable and assign the new value (14) into the same variable
    cout << var << endl;

    var += 14;              // Same as above but written in a shorter way, var now stores the value 28
    cout << var << endl;

    ++var;                  // Add just 1 to the variable and store it, can be written like var++ or var += 1 as well 
    cout << var << endl;

    return 0;
}
