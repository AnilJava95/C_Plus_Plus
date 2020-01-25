/*
 * Author's name and email: Michael
 * Program description: Converts numbers in string 
 *  form "one" to digit form "1".
 * Latest version: 10:50 AM, 11/16/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	std::string number;

	std::cout << "Enter a digit> ";
	while (std::cin >> number)
	{
		if (number == "zero")
			std::cout << "Number is 0\n";
		else if (number == "one")
			std::cout << "Number is 1\n";
		else if (number == "two")
			std::cout << "Number is 2\n";
		else if (number == "three")
			std::cout << "Number is 3\n";
		else if (number == "four")
			std::cout << "Number is 4\n";
		else
			std::cout << "not a number i know\n";

		std::cout << "Enter a digit> ";
	}
}