/*
 * Author's name and email: Michael
 * Program description: Taking a number called max from user and 
 *  finding prime numbers between 1-max.
 * Latest version: 1:09 PM, 11/22/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> primes = { 2 };
	bool divisible = false;
	int max;

	std::cout << "Enter a number to find prime numbers between 1-number: ";
	std::cin >> max;

	for (int counter = 3; counter < max; counter++)
	{
		for (int prime : primes)
		{
			if (counter % prime == 0)
			{
				divisible = true;
				break;
			}
		}
		if (divisible == false)
			primes.push_back(counter);
		else
			divisible = false;
	}

	for (int prime : primes)
		std::cout << prime << '\n';
}