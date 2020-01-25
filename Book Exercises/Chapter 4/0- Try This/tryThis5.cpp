/*
 * Author's name and email: Michael
 * Program description: Calculates square without using the multiply 
 *  operator.
 * Latest version: 4:49 PM, 11/19/2019.
 * Older versions: 
 */

#include <iostream>

int square(int number)
{
	int result = 0;
	for (int counter = 0; counter < number; counter++)
	{
		result += number;
	}
	return result;
}

int main()
{
	std::cout << square(5);
}