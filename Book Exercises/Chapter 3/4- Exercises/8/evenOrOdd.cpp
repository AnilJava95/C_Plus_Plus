/*
 * Author's name and email: Michael
 * Program description: Test whether a number is odd or even.
 * Latest version: 10:30 AM, 11/16/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	int number;

	std::cout << "Enter an integer> ";
	std::cin >> number;

	if (number % 2 == 0)
		std::cout << "Number " << number << " is even.";
	else
		std::cout << "Number " << number << " is odd.";
}