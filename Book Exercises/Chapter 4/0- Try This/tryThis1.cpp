/*
 * Author's name and email: Michael
 * Program description: Converts yen, krone or pound to dollar.
 * Latest version: 12:28 PM, 11/19/2019;
 * Older versions: 
 */

#include <iostream>

int main()
{
	constexpr double yen_per_dollar = 108.78;
	constexpr double krone_per_dollar = 6.75;
	constexpr double pound_per_dollar = 0.77;

	double money = 0;
	char currency = ' ';

	std::cout << "Enter an amount of money followed by a currency" 
		"(y, k, p)> ";
	std::cin >> money >> currency;

	if (currency == 'y')
		std::cout << money << " yen == " << money / yen_per_dollar 
		<< " dollars";
	else if (currency == 'k')
		std::cout << money << " krone == " << money / krone_per_dollar 
		<< " dollars";
	else if (currency == 'p')
		std::cout << money << " pound == " << money / pound_per_dollar 
		<< " dollars";
	else
		std::cout << "Unknown currency: " << currency;
}