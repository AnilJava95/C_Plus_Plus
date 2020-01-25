/*
 * Author's name and email: Michael
 * Program description: Takes two integers from user and displays 
 *  information about these two integers.
 * Latest version: 5:22 PM, 11/15/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	int val1, val2;

	std::cout << "Enter two integer values> ";
	std::cin >> val1 >> val2;

	if (val1 > val2)
		std::cout << val1 <<" is bigger than " << val2 << ".\n";
	else
		std::cout << val2 << " is bigger than " << val1 << ".\n";
	if (val2 != 0)
		std::cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n'
		<< val1 << " * " << val2 << " = " << val1 * val2 << '\n'
		<< val1 << " / " << val2 << " = " << val1 / val2 << '\n';
	else
		std::cout << "Val2 cant be zero.";
}