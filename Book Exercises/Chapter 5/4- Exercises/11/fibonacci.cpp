/*
 * Author's name and email: Michael
 * Program description: Finds biggest fibonacci number you can hold 
 *  with int data type.
 * Latest version: 1:08 PM, 11/28/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	int number = 1;
	std::vector<int> fibonacci = { 1 };

	for (int i = 0; number > 0; i++)
	{
		std::cout << fibonacci[i] << '\n';
		fibonacci.push_back(number);
		number += fibonacci[i];
	}
}
