// Adding variable value to another variable with the same type and store the result in a new variable

// Original file:   main.cpp
// Original folder: CPP_AIO4/BookI/Chapter04/AddInteger2

// Code from:       C++ All in one for dummies, 4th edition, 2021, author John Paul Mueller
//                  Book I, chapter 4, p. 79

// File:            AddInteger2.cpp 
// Created:         2022-04-24, Niklas Engvall
// Updated:         2022-04-24, Niklas Engvall

// Purpose:         This example shows how to store calculations between variables in a third variable with the same type

// Description:     The code in main declares variables then assigns some values to start_time and end_time
//                  After that we calculate the total_time and elapsed_time
//                  The last thing we do is printing the results using the variables that stores the result of the calculations

// Returns:         0 to calling function, software or operating system#include <iostream>

#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
    int start_time, end_time, total_time, elapsed_time; // Variable declarations
    
    start_time = 25; // Variable initilizing
    end_time = 55;
    
    total_time =  start_time + end_time;    // Make some calulations
    elapsed_time = end_time - start_time; 
    
    // Prints result 
    cout << "Total time: " << total_time << endl;                                           
    cout << "Time elapsed between start_time and end_time: " <<  elapsed_time << endl;    
        
    return 0;
}
