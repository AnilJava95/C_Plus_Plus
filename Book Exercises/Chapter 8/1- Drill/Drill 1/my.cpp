/*
 * Author's name and email: Michael
 * Program description: Includes my.h and defines the functions
 *  print_foo and print that were declared in my.h.
 * Latest version: 9:57 PM, 1/5/2020.
 * Older versions:
 */

#include <iostream>
#include "my.h"

 // Prints the global foo variable that was declared in my.h 
 //  and defines in use.cpp.
void print_foo()
{
	std::cout << "Value of foo is " << foo << ".\n";
}

// Prints it's parameter.
void print(int i)
{
	std::cout << "Value of i is " << i << ".\n";
}
