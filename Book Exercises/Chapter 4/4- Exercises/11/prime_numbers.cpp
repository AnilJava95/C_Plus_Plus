/*
 * Author's name and email: Michael
 * Program description: Finding prime numbers between 1-100.
 * Latest version: 1:01 PM, 11/22/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> primes = { 2 };
	bool divisible = false;

	for (int counter = 3; counter < 100; counter++)
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