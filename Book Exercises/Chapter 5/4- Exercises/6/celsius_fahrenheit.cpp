/*
 * Author's name and email: Michael
 * Program description: Celsius to fahrenheit or fahrenheir to celsius.
 * Latest version: 2:57 PM, 11/27/2019.
 * Older versions: 
 */

#include <iostream>

double ctof(double c)
{
	if (c < -273.15)  // Absolute zero.
		throw std::invalid_argument("Invalid value for ctof");
	double f = (c * 9.0 / 5.0) + 32 ;
	return f;
}

double ftoc(double f)
{
	if (f < -459.67) // Absolute zero.
		throw std::invalid_argument("Invalid value for ftoc");
	double c = (f - 32) * 5.0 / 9.0;
	return c;
}

int main()
{
	double first_value = 0;
	double second_value = 0;
	char unit = ' ';

	std::cout << "Enter a value followed by a unit. 'C' or 'c' for celsius "
		"or 'F' or 'f' for fahrenheit: ";
	try {
		std::cin >> first_value >> unit;
		if (unit == 'C' || unit == 'c')
		{
			second_value = ctof(first_value);
			std::cout << first_value << "C = " << second_value << "F\n";
		}
		else if (unit == 'F' || unit == 'f')
		{
			second_value = ftoc(first_value);
			std::cout << first_value << "F = " << second_value << "C\n";
		}
		else
			throw std::invalid_argument("Invalid unit");
	}
	catch (std::invalid_argument& e)	{
		std::cerr << e.what();
	}
}
