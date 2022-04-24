// Creating a simple variable 

// Original file:   main.cpp
// Original folder: CPP_AIO4/BookI/Chapter04/SimpleVariable

// Code from:       C++ All in one for dummies, 4th edition, 2021, author John Paul Mueller
//                  Book I, chapter 4, p. 71

// File:            SimpleVariable.cpp 
// Created:         2022-04-24, Niklas Engvall
// Updated:         2022-04-24, Niklas Engvall

// Purpose:         This example shows how to declare and initiate a simple variable and print it out on the screen

// Description:     The code in main declares and initiate a variable to 10 and prints it out on the standard console, yor terminal window

// Returns:         0 to calling function, software or operating system
#include <iostream>

// I avoid using namespace in this example and directly tells the compiler which namespace I'm using in the objects/methods/variables

int main(void)                          // void tells the compiler I wont accept any argument to this function, but it can return a int value.
{
    int my_no = 7;                      // Declare a my_no variable as int and initiate it (store) with number 7.
    std::cout << my_no << std::endl;    // Prits out my number on the screen
    return 0;
}
