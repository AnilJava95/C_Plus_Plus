/*
 * Author's name and email: Michael
 * Program description: Print out digits, lowercase 
 *  and uppercase letters using a loop. 
 * Latest version: 3:55 PM, 11/19/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	for (char c = '0'; c <= '9'; c++)
	{
		std::cout << c << "  " << 1 * c << '\n';
	}
	
	std::cout << '\n';
	for (char c = 'A'; c <= 'Z'; c++)
	{
		std::cout << c << "  " << 1 * c << '\n';
	}
	std::cout << '\n';
	
	for (char c = 'a'; c <= 'z'; c++)
	{
		std::cout << c << "  " << 1 * c << '\n';
	}
}