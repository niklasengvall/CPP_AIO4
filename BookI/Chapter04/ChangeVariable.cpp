// Changing a simple variable 

// Original file:   main.cpp
// Original folder: CPP_AIO4/BookI/Chapter04/ChangeVariable

// Code from:       C++ All in one for dummies, 4th edition, 2021, author John Paul Mueller
//                  Book I, chapter 4, p. 74

// File:            ChangeVariable.cpp 
// Created:         2022-04-24, Niklas Engvall
// Updated:         2022-04-24, Niklas Engvall

// Purpose:         This example shows how to declare and initiate a simple variable and print it out on the screen
//                  Afterwards we want to change the value of the variable and print out it's new value

// Description:     The code in main declares and initiate variable my_no to 7 and prints it out on the standard console, yor terminal window
//                  Then we assign 21 to the same variable my_no and prints out the new value

// Returns:         0 to calling function, software or operating system#include <iostream>

#include <iostream>

using std::cout;    // Include this objects namespaces
using std::endl;

int main(void)                          // void tells the compiler I wont accept any argument to this function, but it can return a int value.
{
    int my_no = 7;                      // Declare a my_no variable as int and initiate it (store) with number 7.
    cout << my_no << endl;              // Prints out my number on the screen
    
    my_no = 21;                         // Asign a new value 21 to my_no
    cout << my_no << endl;
    return 0;
}
