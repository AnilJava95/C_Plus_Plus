/*
 * Author's name and email: Michael
 * Program description: Finding prime numbers between 1-number using sieve of
 *  Eratosthenes method.
 * Latest version: 1:52 PM, 11/22/2019.
 * Older versions:
 */

#include <iostream>
#include <vector>

int main()
{
	int number;

	std::cout << "Enter a number to find prime numbers between 1-number"
		" using sieve of eratosthenes method: ";
	std::cin >> number;

	std::vector<bool> primes(number, true);

	// find primes
	for (int counter = 2; counter < number; counter++)
	{
		if (primes[counter] == false)
			continue;
		else
		{
			for (int counter2 = counter + 1; counter2 < number; counter2++)
			{
				if (counter2 % counter == 0)
					primes[counter2] = false;
			}
		}
	}

	// print primes
	for (int counter = 2; counter < number; counter++)
	{
		if (primes[counter] == true)
		{
			std::cout << counter << '\n';
		}
	}
}