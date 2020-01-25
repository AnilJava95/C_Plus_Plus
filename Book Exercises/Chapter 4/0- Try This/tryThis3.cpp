/*
 * Author's name and email: Michael
 * Program description: Print out lowercase letters
 *  using a loop.
 * Latest version: 3:20 PM, 11/19/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	char c = 'a';

	while (c <= 'z')
	{
		std::cout << c << "  " << 1 * c << '\n';
		c++;
	}
}