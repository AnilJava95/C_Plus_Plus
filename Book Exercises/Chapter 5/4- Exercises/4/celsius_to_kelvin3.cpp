/*
 * Author's name and email: Michael
 * Program description: Adding exception handling to celsius to kelvin
 *  program. In ctok function.
 * Latest version: 2:14 PM, 11/27/2019.
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

int main()
{
	double c = 0;
	std::cin >> c;
	try	{
		double k = ctok(c);
		std::cout << k << '\n';
	}
	catch (std::invalid_argument& e)	{
		std::cerr << e.what();
	}
}
