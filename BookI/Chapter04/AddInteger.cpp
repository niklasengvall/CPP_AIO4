// Copying variable value to another variable with the same type 

// Original file:   main.cpp
// Original folder: CPP_AIO4/BookI/Chapter04/AddInteger

// Code from:       C++ All in one for dummies, 4th edition, 2021, author John Paul Mueller
//                  Book I, chapter 4, p. 78

// File:            AddInteger.cpp 
// Created:         2022-04-24, Niklas Engvall
// Updated:         2022-04-24, Niklas Engvall

// Purpose:         This example shows how to make calculations with + and - operators together with variables 

// Description:     The code in main declares variable start_time and end_time
//                  Then we assign 25 to start_time and 55 to end_time
//                  The last thing we do is printing the results of an addition and a subtraction to the terminal

// Returns:         0 to calling function, software or operating system#include <iostream>
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
    int start_time, end_time;
    
    start_time = 25; // Variable initilizing
    end_time = 55;
    
    cout << "Total time elapsed: " << start_time + end_time << endl;                                // Adding variables 
    cout << "Time ellapsed between start_time and end_time: " <<  end_time - start_time << endl;    // Subtracting variables
    
    return 0;
}
