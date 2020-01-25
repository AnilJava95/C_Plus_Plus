/*
 * Author's name and email: Michael
 * Program description: Trying unsafe conversion.
 * Latest version: 3:35 PM, 11/14/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	double d = 0;
	while (std::cin >> d)
	{
		int i = d;
		char c = i;
		int i2 = c;
		std::cout << "d == " << d
			<< " i == " << i
			<< " i2 == " << i2
			<< " char(" << c << ")\n";
	}
}