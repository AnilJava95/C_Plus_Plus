/*
 * Author's name and email: Michael
 * Program description: Finding prime numbers between 1-100 using sieve of
 *  Eratosthenes method.
 * Latest version: 1:37 PM, 11/22/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	std::vector<bool> primes(100, true);

	// find primes
	for (int counter = 2; counter < 100; counter++)
	{
		if (primes[counter] == false)
			continue;
		else
		{
			for (int counter2 = counter + 1; counter2 <= 99; counter2++)
			{
				if (counter2 % counter == 0)
					primes[counter2] = false;
			}
		}
	}

	// print primes
	for (int counter = 2; counter <= 99; counter++)
	{
		if (primes[counter] == true)
		{
			std::cout << counter << '\n';
		}
	}
}