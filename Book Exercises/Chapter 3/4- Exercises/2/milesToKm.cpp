/*
 * Author's name and email: Michael
 * Program description: Converts from miles to kilometers.
 * Latest version: 4:33 PM, 11/15/2019. 
 * Older versions: 
 */

#include <iostream>

int main()
{
	double miles = 0;
	std::cout << "Enter miles to convert to kilometers> ";
	std::cin >> miles;
	std::cout << miles << " miles = " << miles * 1.609 << " kilometers\n";
}