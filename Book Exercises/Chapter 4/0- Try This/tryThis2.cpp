/*
 * Author's name and email: Michael
 * Program description: Converts yen, krone or pound to dollar. Using 
 *  switch statement.
 * Latest version: 1:39 PM, 11/19/2019.
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

	std::cout << "Enter an amount of money followed by a currency "
		"(y, k, p)> ";
	std::cin >> money >> currency;

	switch (currency)
	{
		case 'y':
			std::cout << money << " yen == " << money / yen_per_dollar 
			<< " dollars";
			break;
		case 'k':
			std::cout << money << " krone == " << money / krone_per_dollar 
			<< " dollars";
			break;
		case 'p':
			std::cout << money << " pound == " << money / pound_per_dollar 
			<< " dollars";
			break;
		default:
			std::cout << "Unknown currency: " << currency;
			break;
	}		
}