/*
 * Author's name and email: Michael
 * Program description: Finding first n prime numbers.
 * Latest version: 2:11 PM, 11/22/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	int number;

	std::cout << "Enter a number to find first n prime numbers: ";
	std::cin >> number;

	std::vector<int> primes = { 2 };
	bool divisible = false;

	for (int counter = 3; primes.size() < number ; counter++)
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