/*
 * Author's name and email: Michael
 * Program description: Takes three integers from user and 
 *  prints them from smallest to largest.
 * Latest version: 5:55 PM, 11/15/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	int val1, val2, val3;
	int smallest, middle, largest;

	std::cout << "Enter three integer values> ";
	std::cin >> val1 >> val2 >> val3;

	if (val1 >= val2 && val1 >= val3)
	{
		largest = val1;
		if (val2 >= val3)
		{
			middle = val2;
			smallest = val3;
		}
		else
		{
			middle = val3;
			smallest = val2;
		}
	}
	else if (val2 >= val1 && val2 >= val3)
	{
		largest = val2;
		if (val1 >= val3)
		{
			middle = val1;
			smallest = val3;
		}
		else
		{
			middle = val3;
			smallest = val1;
		}
	}
	else
	{
		largest = val3;
		if (val1 >= val2)
		{
			middle = val1;
			smallest = val2;
		}
		else
		{
			middle = val2;
			smallest = val1;
		}
	}
	
	std::cout << smallest << ", " << middle << ", " << largest;
}