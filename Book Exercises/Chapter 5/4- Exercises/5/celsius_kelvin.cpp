/*
 * Author's name and email: Michael
 * Program description: Adding kelvin to celsius feature.
 * Latest version: 4:07 PM, 11/27/2019.
 * Older versions:
 */

#include <iostream>

double ctok(double c)
{
	if (c < -273.15)
		throw std::invalid_argument("Invalid argument for ctok");
	double k = c + 273.15;
	return k;
}

double ktoc(double k)
{
	if (k < 0)
		throw std::invalid_argument("Invalid argument for ktoc");
	double c = k - 273.15;
	return c;
}

int main()
{
	double first_value = 0;
	double second_value = 0;
	char unit = ' ';

	std::cout << "Enter a value followed by a unit. 'C' or 'c' for celsius "
		"or 'K' or 'k' for kelvin: ";
	try {
		std::cin >> first_value >> unit;
		if (unit == 'C' || unit == 'c')
		{
			second_value = ctok(first_value);
			std::cout << first_value << "C = " << second_value << "K\n";
		}
		else if (unit == 'K' || unit == 'k')
		{
			second_value = ktoc(first_value);
			std::cout << first_value << "k = " << second_value << "C\n";
		}
		else
			throw std::invalid_argument("Invalid unit");
	}
	catch (std::invalid_argument & e) {
		std::cerr << e.what();
	}
}
