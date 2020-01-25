/*
 * Author's name and email: Michael
 * Program description: Takes three strings from user and 
 *  prints them from smallest to largest.
 * Latest version: 10:24 AM, 11/16/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	std::string val1, val2, val3;
	std::string smallest, middle, largest;

	std::cout << "Enter three string values> ";
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