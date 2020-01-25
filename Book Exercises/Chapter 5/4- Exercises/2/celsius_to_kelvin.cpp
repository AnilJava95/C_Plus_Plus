/*
 * Author's name and email: Michael
 * Program description: Fixed the bugs in this program.
 * Latest version: 12:28 PM, 11/27/2019.
 * Older versions: 
 */

#include <iostream>

double ctok(double c)
{
	double k = c + 273.15;
	return k;
}

int main()
{
	double c = 0;
	std::cin >> c;
	double k = ctok(c);
	std::cout << k << '\n';
}
