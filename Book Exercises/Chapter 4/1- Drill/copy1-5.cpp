/*
 * Author's name and email: Michael
 * Program description: Take two numbers from user. Print them on the screen. 
 *  Print smaller and larger. Print if they are equal or not. Print if they
 *  are almost equal or not.
 * Latest version: 11:53 AM, 11/21/2019.
 * Older versions:
 */

#include <iostream>

int main()
{
	double number1, number2;

	while (std::cin >> number1 >> number2)
	{
		std::cout << number1 << ' ' << number2 << '\n';

		if (number1 < number2)
		{
			std::cout << "The smaller value is: " << number1
				<< "\nThe larger value is: " << number2 << '\n';
			if (number2 - number1 <= number2 / 100)
				std::cout << "The numbers are almost equal\n";
		}
		else if (number2 < number1)
		{
			std::cout << "The smaller value is: " << number2
				<< "\nThe larger value is: " << number1 << '\n';
			if (number1 - number2 <= number1 / 100)
				std::cout << "The numbers are almost equal\n";
		}
		else
			std::cout << "The numbers are equal.\n";
	}
}