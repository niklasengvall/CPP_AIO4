// Starting with Main

// Original file:   main.cpp
// Original folder: CPP_AIO4/BookI/Chapter01/SayHello

// Code from:       C++ All in one for dummies, 4th edition, 2021, author John Paul Mueller
//                  Book I, chapter 3, p. 55-67

// File:            SayHello.cpp 
// Created:         2022-04-23, Niklas Engvall
// Updated:         2022-04-23, Niklas Engvall

// Purpose:         This example shows how the first running main function can be coded with a bit more comments

// Description:     The code prints text, results of calculations and some escape sequence characters like tab
//                  with the stream output object cout from the class ostream, defined in iostream, together with the insertion operator <<                 

// Returns:         0 to calling function, software or operating system

// BASH (terminal) commands in Linux

// Compile without debug information:   g++ SayHello.cpp -O3 -Wall -std=c++20 -o SayHello_R.o
// Run command:                         ./SayHello_R.o

// Compile with debug information:      g++ SayHello.cpp -g -Og -Wall -std=c++20 -o SayHello_D.o
// Run command:                         ./SayHello_D.o

#include <iostream>     // Preprocessor directive that include classes, objects and methods (functions) from C++ standard library for 
                        // input/output streams

using namespace std;    // Telling the compiler that we are using namespace std, now we don't need to write std::cout 

int main()              // The first function that runs in a C/C++ project
{                       // Body of main starts with a { 

    cout << "Hello\tI am your computer talking." << endl;   // Prints Hello with a tab space and I am your computer talking. on your console
    cout << 5 + 10 << endl;                                 // Prints 15 and the endl statement moves the cursor to the beginning of the next line
    cout << 5 + 10 / 2 * 3 + 25 << endl;                    // endl moves all text (flushes) from the buffer to the console terminal followed by a
                                                            // newline
    
    // This line produces a warning message during you compilation of the code
    cout << 12345678 * 100 / 2 * 3 * 3 << endl;             // This calculation makes an overflow, the number is to big to be represented correctly
    cout << long(12345678) * 100 / 2 * 3 * 3 << endl;       // This calculation doesn't makes an overflow, I'm using type conversion to a long int
    
    cout << 5 + 10 / 2 * (3 + 25) << endl;                  // Calculation in paranthesis goes first, 5 + 10 / 2 * 28 = 5 + 5 * 28 = 5 + 140 = 145

    cout << "\\tabc" << endl;                               // Two backslashes prints one backslash, so tabbed space won't be printed
    cout << "Backslash and double quote are \"." << endl;   // \" prints a double quote
    return 0;                                               // return a 0 to the calling function/program/os (in this casse you from the console/IDE
}   // Body of main ends with }
